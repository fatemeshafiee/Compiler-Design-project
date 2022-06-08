%option noyywrap

%{
    #include <stdio.h>
    #include "parser.tab.h"
    int lines = 1;
    int n;
%}

digit      [0-9]
printabe   [ -~]
comment    [^"!#"]
alpha      [a-zA-Z]

%% 
"int" {
    return TOKEN_INT;
}
"char" {
    return TOKEN_CHAR;
}
"if" {
    return TOKEN_IF;
}
"else" {
    return TOKEN_ELSE;
}
"elseif" {
    return TOKEN_ELSEIF;
}
"while" {
    return TOKEN_WHILE;
}
"for" {
    return TOKEN_FOR;
}
"return" {
    return TOKEN_RETURN;
}
"void" {
    return TOKEN_VOID;
}
"main" {
    return TOKEN_MAIN;
}
"continue" {
    return TOKEN_CONTINUE;
}
"break" {
    return TOKEN_BREAK;
}
"." {
    return TOKEN_DOT;
}
"(" {
    return TOKEN_LEFTPAR;
}
")" {
    return TOKEN_RIGHTPAR;
}
"[" {
    return TOKEN_LEFTBRACKET;
}
"]" {
    return TOKEN_RIGHTBRACKET;
}
"{" {
    return TOKEN_LEFTBRACE;
}
"}" {
    return TOKEN_RIGHTBRACE;
}
"," {
    return TOKEN_COMMA;
}
"<" {
    return TOKEN_LESS;
}
"<=" {
    return TOKEN_LESSEQ;
}
"==" {
    return TOKEN_EQUEL;
}
"!=" {
    return TOKEN_NOTEQUEL;
}
">" {
    return TOKEN_GREATER;
}
">=" {
    return TOKEN_GREATEREQ;
}
"|" {
    return TOKEN_OR;
}
"&" {
    return TOKEN_AND;
}
"||" {
    return TOKEN_DUBLEOR;
}
"&&" {
    return TOKEN_DUBLEAND;
}
"^" {
    return TOKEN_POWER;
}
"!" {
    return TOKEN_NOT;
}
"+" {
    return TOKEN_PLUS;
}
"++" {
    return TOKEN_PLUSPLUS;
}
"-" {
    return TOKEN_MINUSE;
}
"--" {
    return TOKEN_MINUSEMINUSE;
}
"*" {
    return TOKEN_MULTIPLY;
}
"/" {
    return TOKEN_DIVIDE;
}
"=" {
    return TOKEN_ASSIGN;
}
({alpha}|_)({alpha}|_|{digit})* {
    return TOKEN_IDENTIFIER;
}
{digit}+ {
    n = atoi(yytext);   
    if ( n>=(-32768) && n<=(32767)){
        return TOKEN_INTCONST ;
    }
    else{
        
        return TOKEN_INVALIDINTCONST;
    }
  
}
(\"{printabe}*\") {  
    return TOKEN_CHARCONST; 
}
(#!({comment}|"\n")*!#) {
    //return TOKEN_MULTILINECOMMENT;
} 
(#(.)*) {
    //return TOKEN_SINGLELINECOMMENT;
}
"\n" {

    lines++;
}
[^" "] {
    //return TOKEN_ANONYMOUS; fp = fopen("Phase1_Tokens.txt", "w");  fprintf(fp, pre1); fprintf(fp, pre2);
}

%% 