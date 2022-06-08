%option noyywrap

%{
    #include <stdio.h>
    FILE * fp , * fo;
    int lines = 1;
    int n;
    char *pre1= "";
    char *pre2= "";
%}

digit      [0-9]
printabe   [ -~]
alpha      [a-zA-Z]

%% 
"int" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_INT\n";
}
"char" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_CHAR\n";
}
"if" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_IF\n";
}
"else" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_ELSE\n";
}
"elseif" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_ELSEIF\n";
}
"while" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_WHILE\n";
}
"for" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_FOR\n";
}
"return" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_RETURN\n";
}
"void" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_VOID\n";
}
"main" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_MAIN\n";
}
"continue" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_CONTINUE\n";
}
"break" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_BREAK\n";
}
"." {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_DOT\n";
}
"(" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_LEFTPAR\n";
}
")" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_RIGHTPAR\n";
}
"[" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_LEFTBRACKET\n";
}
"]" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_RIGHTBRACKET\n";
}
"{" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_LEFTBRACE\n";
}
"}" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_RIGHTBRACE\n";
}
"," {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_COMMA\n";
}
"<" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_LESS\n";
}
"<=" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_LESSEQ\n";
}
"==" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_EQUEL\n";
}
"!=" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_NOTEQUEL\n";
}
">" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_GREATER\n";
}
">=" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_GREATEREQ\n";
}
"|" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_OR\n";
}
"&" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_AND\n";
}
"||" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_DUBLEOR\n";
}
"&&" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_DUBLEAND\n";
}
"^" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_POWER\n";
}
"!" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_NOT\n";
}
"+" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_PLUS\n";
}
"-" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_MINUSE\n";
}
"*" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_MULTIPLY\n";
}
"/" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_DIVIDE\n";
}
"=" {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_ASSIGN\n";
}
({alpha}|_)({alpha}|_|{digit})* {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_IDENTIFIER\n";
}
{digit}+ {
    if(pre2 == "TOKEN_PLUS\n" || pre2 == "TOKEN_MINUSE\n"){
        if(pre1 == "TOKEN_INTCONST\n" || pre1 == "TOKEN_INVALIDINTCONST\n" || pre1 == "TOKEN_IDENTIFIER\n"){
            fprintf(fp, pre1);
            pre1 = pre2;
            n = atoi(yytext);   
            if (n<=32767){
                pre2 = "TOKEN_INTCONST\n";
            }
            else{
                pre2 = "TOKEN_INVALIDINTCONST\n";
            }
        }
        else{
            n = atoi(yytext);
            if (n<=32767){
                pre2 = "TOKEN_INTCONST\n";
            }
            else{
                pre2 = "TOKEN_INVALIDINTCONST\n";
            }
        }
    }
    else{
        fprintf(fp, pre1);
        pre1 = pre2;
        n = atoi(yytext);   
        if (n<=32767){
            pre2 = "TOKEN_INTCONST\n";
        }
        else{
            pre2 = "TOKEN_INVALIDINTCONST\n";
        }
    }
  
}
(\"{printabe}*\") {  
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_CHARCONST\n"; 
}
(#!({printabe}|"\n")*!#) {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_MULTILINECOMMENT\n";
} 
(#(.)*) {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_SINGLELINECOMMENT\n";
}
"\n" {

    lines++;
}
[^" "] {
    fprintf(fp, pre1);
    pre1 = pre2;
    pre2 = "TOKEN_ANONYMOUS\n";

}

%% 
int main(){
    fo = fopen("input.txt", "r");
    fp = fopen("Phase1_Tokens.txt", "w");
    yyin = fo;
    yylex();
    fprintf(fp, pre1);
    fprintf(fp, pre2);
    return 0; 
}