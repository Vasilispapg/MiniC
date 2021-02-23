%option noyywrap

%{
#include <iostream>
#include <cstdlib>
#include "SymbolNodes.h"
#include "grammar.tab.h"
#include "SymbolTable.h"
#define YY_DECL int yylex(yy::parser::semantic_type *yylval)
typedef yy::parser::token token;


%}


%%



"if"			{ return token::IF;}
"else"			{ return token::ELSE;}
"return"		{ return token::RETURN;}
"break"			{ return token::BREAK;}
"while"			{ return token::WHILE;}
"function"		{ return token::FUNCTION;}

"("				{ return '(';}
")"				{ return ')';}
"{"				{ return '{';}
"}"				{ return '}';}
";"				{ return ';';}
","				{ return ',';}
"="				{ return '=';}
"*"				{ return token::MULT;}
"/"				{ return token::DIV;}
"-"				{ return token::MINUS;}
"+"				{ return token::PLUS;}
"+"{2}			{ return token::PLUSPLUS;}
"&&"			{ return token::AND;}
"||"			{ return token::OR;}
"!"				{ return token::NOT;}
"<"				{ return token::LT;}
">"				{ return token::GT;}
">="			{ return token::GTE;}
"<="			{ return token::LTE;}
"=="			{ return token::EQUAL;}
"!="			{ return token::NEQUAL;}


"0"|[1-9][0-9]*  {	yylval->node = new CNUMBER(yytext);
					return token::NUMBER;}

[a-zA-Z][a-zA-Z0-9_]* {	yylval->node = g_symbolTable.getIdentifier(yytext);
					return token::IDENTIFIER;}


					
[ \t]	
[\r\n]

%%


