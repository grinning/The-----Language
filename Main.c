/* 
 * File:   Main.c
 * Author: becker
 *
 * Created on January 31, 2012, 8:44 PM
 * Let us mark this a day in history
 */

#include <stdio.h>
#include <stdlib.h>
#include "tokens.h"
#include "strings.h"



YYSTYPE yylval;

int yylex(void);

string tokenNames[] = {
    
}






/*
 * Main starting file for a module
 */
int main(int argc, char **argv) {
    string fname; int tokCount;
    if(argc != 2) { fprintf(stderr, "usage: a.out filename\n"); exit(1); }
    fname = argv[1];
    for(;;) {
        tokCount = yylex();
        if(tokCount == 0) break;
        switch(tokCount) {
            case:ID case TOK_STRING:
        }
    }
    
    return 0;
}

