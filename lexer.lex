/*
 *lexer.lex: The scanner for the *++ language
 *
 */

%{
#include"strings.h"
#include"tokens.h"
#include<string.h>
#include"errorhandler.h"
    
int line_number = 0;
void yyerror(char *message);

int yywrap(void)
{
 line_number = 0;
 return 0;
}

%}

%x COMMENT1
        
white_space       [ \t]*
digit             [0-9]
alpha             [A-Za-z_]
alpha_num         ({alpha}|{digit})
identifier        {alpha}{alpha_num}*
unsigned_int      {digit}+
i                 {unsigned_int}
string            \'([^'\n]|\'\')+\'
bad_string        \'([^'\n]|\'\')+
decimal           {digit}*.{digit}*          
        
%%
        
"//"                BEGIN(COMMENT1);
<COMMENT1>[^}\n]+
<COMMENT1>\n        ++line_number;
<COMMENT1><<EOF>>   yyerror("EOF in comment");
<COMMENT1>"\\"      BEGIN(INITIAL);



true               return(TOK_TRUE);
false              return(TOK_FALSE);
bool               return(TOK_BOOL);
if                 return(TOK_IF);
else               return(TOK_ELSE);
elseif             return(TOK_ELSEIF);
void               return(TOK_VOID);
byte               return(TOK_BYTE);
ubyte              return(TOK_UNSIGNED_BYTE);
word               return(TOK_WORD);
uword              return(TOK_UNSIGNED_WORD);
int                return(TOK_INTEGER);
uint               return(TOK_UNSIGNED_INTEGER);
long               return(TOK_LONG);
ulong              return(TOK_UNSIGNED_LONG);
char               return(TOK_CHAR);
string             return(TOK_STRING);
null               return(TOK_NULL);
float              return(TOK_FLOAT);
double             return(TOK_DOUBLE);
long_double        return(TOK_LONG_DOUBLE);
asm                return(TOK_ASM);
define             return(TOK_DEFINE);
return             return(TOK_RETURN);
uses               return(TOK_USES);
for                return(TOK_FOR);
while              return(TOK_WHILE);
break              return(TOK_BREAK);
switch             return(TOK_SWITCH);
case               return(TOK_CASE);
loop               return(TOK_LOOP);
public             return(TOK_PUBLIC);

"<="|"=<"          return(TOK_LEQ);
"=>"|">="          return(TOK_GEQ);
"!="               return(TOK_NEQ);
"=="               return(TOK_EQ);
({identifier}++)   return(TOK_INC);
({identifier}--)   return(TOK_DEC);
"+="|"=+"          return(TOK_ADD_ASSIGN);
"-="|"=-"          return(TOK_SUB_ASSIGN);
"*="|"=*"          return(TOK_MUL_ASSIGN);
"/="|"=/"          return(TOK_DIV_ASSIGN);
"%="|"=%"          return(TOK_MOD_ASSIGN);
"="                return(TOK_ASSIGN);
"<<"               return(TOK_SHIFT_LEFT);
">>"               return(TOK_SHIFT_RIGHT);

{i}                return(TOK_UNSIGNED_INTEGER);
{string}           return(TOK_STRING);
{bad_string}       yyerror("Unterminated string");

{identifier}       return(TOK_IDENTIFIER);

[*/+\-,.;:()\[\]]  return(yytext[0]);

{white_space}      //do nothing
\n                 line_number += 1;
.                  yyerror("Illegal input");

%%
        
void yyerror(char *message) {
 fprintf(stderr, "Error: \"%s\" in line %d. Token = %s\n", message, line_number, yytext);  
 exit(1);
}

    

        
        

        
        


        
