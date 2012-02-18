/*
 *strings.c
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"strings.h"
#include"errorhandler.h"

string String(char *s) 
{
    string p = checked_malloc(strlen(s) + 1);
    strcpy(p,s);
    return p;
}

void *checked_malloc(int len)
{
    void *p = malloc(len);
    if(!p) {
        fprintf(stderr, "\nRan out of usable memory!\n");
        exit(1);
    }
    return p;
}

