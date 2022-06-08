%{
	#include <stdio.h>
	extern  FILE* yyin;
%}

%token TOKEN_INT TOKEN_CHAR TOKEN_IF TOKEN_ELSE TOKEN_MINUSEMINUSE TOKEN_PLUSPLUS
%token TOKEN_ELSEIF TOKEN_WHILE TOKEN_FOR TOKEN_RETURN TOKEN_VOID TOKEN_MAIN TOKEN_CONTINUE TOKEN_BREAK TOKEN_DOT TOKEN_LEFTPAR
%token TOKEN_RIGHTPAR TOKEN_LEFTBRACKET TOKEN_RIGHTBRACKET TOKEN_LEFTBRACE TOKEN_RIGHTBRACE TOKEN_COMMA TOKEN_LESS
%token TOKEN_LESSEQ TOKEN_EQUEL TOKEN_NOTEQUEL TOKEN_GREATER TOKEN_GREATEREQ TOKEN_OR TOKEN_AND
%token TOKEN_DUBLEOR TOKEN_DUBLEAND TOKEN_POWER TOKEN_NOT TOKEN_PLUS TOKEN_MINUSE TOKEN_MULTIPLY
%token TOKEN_DIVIDE TOKEN_ASSIGN TOKEN_IDENTIFIER TOKEN_INTCONST  TOKEN_INVALIDINTCONST
%token TOKEN_CHARCONST

%start input
%right TOKEN_ASSIGN 
%left TOKEN_DUBLEOR
%left TOKEN_DUBLEAND
%left TOKEN_OR
%left TOKEN_AND
%left TOKEN_NOTEQUEL TOKEN_EQUEL
%left TOKEN_LESS TOKEN_LESSEQ TOKEN_GREATER  TOKEN_GREATEREQ
%left TOKEN_MINUSE TOKEN_PLUS
%left TOKEN_MULTIPLY TOKEN_DIVIDE
%left TOKEN_NOT
%left TOKEN_PLUSPLUS TOKEN_MINUSEMINUSE TOKEN_LEFTPAR TOKEN_RIGHTPAR




%%
input :
	
	| functions 
	;
main_func : 
	TOKEN_INT TOKEN_MAIN TOKEN_LEFTPAR TOKEN_RIGHTPAR 
	TOKEN_LEFTBRACE statements TOKEN_RIGHTBRACE
  	;
functions :
	main_func 
	| function functions
	;
function :
	return_type TOKEN_IDENTIFIER  TOKEN_LEFTPAR declaration1_func TOKEN_RIGHTPAR 
	TOKEN_LEFTBRACE statements TOKEN_RIGHTBRACE
	;
declaration1_func :
	
	| type TOKEN_IDENTIFIER declaration2_func
	;
declaration2_func :
	
	| TOKEN_COMMA type TOKEN_IDENTIFIER declaration3_func
	;
declaration3_func :
	
	| TOKEN_COMMA type TOKEN_IDENTIFIER
	;				
return_type : 
	type 
	| TOKEN_VOID
	;
type : 
	TOKEN_INT
	| TOKEN_CHAR 
	;
statements :
	
	| statement statements
	;
loop_statements :
	
	| loop_statement loop_statements
	;
statement : 
	if_statement 
	| while_statment
	| for_statment
	| dec_statment
	| expr_statment
	| call_func_statment
	| return_statement
	;
loop_statement : 
	loop_if_statement 
	| while_statment
	| for_statment
	| dec_statment
	| expr_statment
	| call_func_statment
	| return_statement
	| break_statement
	| continue_statement
	;
break_statement :
	TOKEN_BREAK TOKEN_DOT
	;
continue_statement :
	TOKEN_CONTINUE TOKEN_DOT
	;
return_statement :
	TOKEN_RETURN value TOKEN_DOT
	| TOKEN_RETURN TOKEN_DOT 
	;
brace :
	TOKEN_LEFTBRACE statements TOKEN_RIGHTBRACE
//	| statements
	;
loop_brace :
	TOKEN_LEFTBRACE loop_statements TOKEN_RIGHTBRACE
	;
if_statement :
	TOKEN_IF TOKEN_LEFTPAR conditions TOKEN_RIGHTPAR brace elseif_statement else_statement
	;
elseif_statement :
	
	| TOKEN_ELSEIF TOKEN_LEFTPAR conditions TOKEN_RIGHTPAR brace elseif_statement
	;
else_statement :
	
	| TOKEN_ELSE brace
	;
loop_if_statement :
	TOKEN_IF TOKEN_LEFTPAR conditions TOKEN_RIGHTPAR loop_brace loop_elseif_statement loop_else_statement
	;
loop_elseif_statement :
	
	| TOKEN_ELSEIF TOKEN_LEFTPAR conditions TOKEN_RIGHTPAR loop_brace loop_elseif_statement
	;
loop_else_statement :
	
	| TOKEN_ELSE loop_brace
	;
while_statment :
	TOKEN_WHILE TOKEN_LEFTPAR conditions TOKEN_RIGHTPAR loop_brace
	;
for_statment :
	TOKEN_FOR TOKEN_LEFTPAR initial TOKEN_COMMA
	for_conditions TOKEN_COMMA iteration TOKEN_RIGHTPAR loop_brace
	;
expr_statment :
	par TOKEN_DOT
	| TOKEN_IDENTIFIER TOKEN_ASSIGN par TOKEN_DOT
	| array TOKEN_ASSIGN par TOKEN_DOT
	| TOKEN_LEFTPAR TOKEN_IDENTIFIER TOKEN_ASSIGN par TOKEN_RIGHTPAR TOKEN_DOT
	| TOKEN_LEFTPAR array TOKEN_ASSIGN par TOKEN_RIGHTPAR TOKEN_DOT
	;
other_expr :
	value
	| sign_state value
	| par opr par
	| TOKEN_NOT par
	| single_opr TOKEN_IDENTIFIER
	| TOKEN_IDENTIFIER single_opr
	| single_opr TOKEN_LEFTPAR TOKEN_IDENTIFIER TOKEN_RIGHTPAR
	| TOKEN_LEFTPAR TOKEN_IDENTIFIER TOKEN_RIGHTPAR single_opr
	;
par :
    TOKEN_LEFTPAR other_expr TOKEN_RIGHTPAR
	| other_expr
	;
/* signs_state :
	| signs_state sign_state 
	| sign_state
	; */
sign_state :
	TOKEN_PLUS
	| TOKEN_MINUSE
	;
opr :
	bin_opr
	| comp_opr
	| TOKEN_POWER
	| TOKEN_PLUS
	| TOKEN_MINUSE
	| TOKEN_MULTIPLY
	| TOKEN_DIVIDE
	;
single_opr :
	TOKEN_PLUSPLUS
	| TOKEN_MINUSEMINUSE
	;
conditions :
	condition comp_opr conditions
	| condition bin_opr conditions
	| TOKEN_LEFTPAR condition comp_opr conditions TOKEN_RIGHTPAR
	| TOKEN_LEFTPAR condition bin_opr conditions TOKEN_RIGHTPAR
	| condition
	;
condition :
	par 
	| TOKEN_IDENTIFIER TOKEN_ASSIGN par 
	| TOKEN_LEFTPAR TOKEN_IDENTIFIER TOKEN_ASSIGN par TOKEN_RIGHTPAR
	;
for_conditions :
    conditions 
	| 
	;
initial : 
    conditions 
	| for_dec_statment
	| 
	;
iteration :
	conditions
	| 
	;	
comp_opr :
	TOKEN_LESSEQ 
	| TOKEN_EQUEL 
	| TOKEN_NOTEQUEL 
	| TOKEN_GREATER 
	| TOKEN_GREATEREQ
	| TOKEN_LESS
	;
bin_opr :
	TOKEN_OR 
	| TOKEN_AND 
	| TOKEN_DUBLEOR 
	| TOKEN_DUBLEAND
	;
for_dec_statment :
    for_dec_assign 
	| type names
	| for_array_dec
	;
for_dec_assign : 
	type names TOKEN_ASSIGN par
	;
for_array_dec :
	type TOKEN_IDENTIFIER dim
	;
dec_statment : 
    dec_assign 
	| type names TOKEN_DOT
	| array_dec
	;
dec_assign :
	type names TOKEN_ASSIGN value TOKEN_DOT 
	| type names TOKEN_ASSIGN par TOKEN_DOT
	;	
array_dec:
	type TOKEN_IDENTIFIER dim TOKEN_DOT
;
dim:
	TOKEN_LEFTBRACKET TOKEN_INTCONST TOKEN_RIGHTBRACKET dim 
	| TOKEN_LEFTBRACKET TOKEN_INTCONST TOKEN_RIGHTBRACKET
;
array :
	TOKEN_IDENTIFIER dim
	;
call_func_statment : 
	TOKEN_IDENTIFIER TOKEN_LEFTPAR arg1 TOKEN_RIGHTPAR TOKEN_DOT
	;	
arg1 :  

	| value arg2 
	;
arg2 :  

	| TOKEN_COMMA value arg3 
	;
arg3 :  

	| TOKEN_COMMA value 
	;
value :
	TOKEN_CHARCONST  
	| TOKEN_INTCONST
	| TOKEN_INVALIDINTCONST 
	| TOKEN_IDENTIFIER
	| array
	;
names : 
	TOKEN_IDENTIFIER TOKEN_COMMA names 
	| TOKEN_IDENTIFIER
	;
%%

void yyerror(char *s){
	printf ("Error happend %s",s);
}
int yywrap(){
	return 1;
}
int main(void){
    yyin = fopen("input.txt","r");
	yyparse();
}