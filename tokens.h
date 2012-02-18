/* 
 * File:   tokens.h
 * Author: becker
 *
 * Created on February 1, 2012, 8:57 PM
 */

typedef union {
    int pos;
    int ival;
    string sval;
}YYSTYPE;
extern YYSTYPE yylval;

#define TOK_TRUE 1
#define TOK_FALSE 2
#define TOK_BOOL 3
#define TOK_VOID 4
#define TOK_BYTE 5
#define TOK_UNSIGNED_BYTE 6
#define TOK_CHAR 7
#define TOK_WORD 8
#define TOK_UNSIGNED_WORD 9
#define TOK_STRING 10
#define TOK_INTEGER 11
#define TOK_UNSIGNED_INTEGER 12
#define TOK_LONG 13
#define TOK_UNSIGNED_LONG 14
#define TOK_NULL 15
#define TOK_FLOAT 16
#define TOK_DOUBLE 17
#define TOK_LONG_DOUBLE 18
#define TOK_ASM 19
#define TOK_DEFINE 20
#define TOK_RETURN 21
#define TOK_USES 22
#define TOK_IF 23
#define TOK_ELSE 24
#define TOK_ELSEIF 25
#define TOK_FOR 26
#define TOK_WHILE 27
#define TOK_BREAK 28
#define TOK_SWITCH 29
#define TOK_CASE 30
#define TOK_LOOP 31
#define TOK_PUBLIC 32
#define TOK_IDENTIFIER 33
#define TOK_COMMA 34
#define TOK_COLON 35
#define TOK_SEMICOLON 36
#define LPAREN 37
#define RPAREN 38
#define LBRACK 39
#define RBRACK 40
#define LBRACE 41
#define RBRACE 42
#define DOT 43
#define OP_ADD 44
#define OP_SUB 45
#define OP_MUL 46
#define OP_DIV 47
#define OP_ASSIGN 48
#define OP_MOD 49
#define OP_INC 50
#define OP_DECRE 51
#define TOK_EQ 52
#define TOK_NEQ 53
#define TOK_LT 54
#define TOK_GT 55
#define TOK_LEQ 56
#define TOK_GEQ 57
#define TOK_AND 58
#define TOK_OR 59
#define TOK_NOT 60
#define ARRAY 61
#define TOK_ADD_ASSIGN 62
#define TOK_SUB_ASSIGN 63
#define TOK_MUL_ASSIGN 64
#define TOK_DIV_ASSIGN 65
#define TOK_ASSIGN 66
#define TOK_MOD_ASSIGN 67
#define TOK_SHIFT_LEFT 68
#define TOK_SHIFT_RIGHT 69
#define TOK_INC 70
#define TOK_DEC 71





