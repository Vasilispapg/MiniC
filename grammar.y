
%{
#include "grammar.tab.h"
#include "SymbolNodes.h"
extern int yylex(yy::parser::semantic_type *yylval);
%}


%code requires{
#include "STNode.h"
}

%union{
STNode* node;
}


%language "C++"
%start compileUnit
%token <node> NUMBER IDENTIFIER
%token RETURN BREAK IF ELSE WHILE FUNCTION
%right '='
%left OR
%left AND
%nonassoc GTE GT LTE LT EQUAL NEQUAL
%left PLUS MINUS PLUSPLUS
%left MULT DIV
%nonassoc NOT ELSE
%type <node> exprs compileUnit statement if_statement while_statement set compound_statement statements arguments

%%

compileUnit : statement { g_root= $$ = new CCompileUnit();
							$$->AddChild($1);
						  }
			| compileUnit statement { g_root= $$ = new CCompileUnit();
							$$->AddChild($1);
							$$->AddChild($2);
						  }
		;


statement : exprs ';' { $$ = new CStatement();
						$$->AddChild($1);
					  }
		|	';'  {$$ = new CStatement();}
		|	if_statement 
		|	while_statement 
		|	BREAK ';' { $$ = new CBreakStatement();}
		|	RETURN exprs ';'
		|	compound_statement
		| set ';'
		;


compound_statement : '{' '}'				{$$ = new CCompoundStatement();}
					| '{' statements '}'   {$$ = new CCompoundStatement();
											$$->AddChild($2);
											}
					;

statements : statement { $$ = new CStatements();
						$$->AddChild($1);
						}
			| statements statement { $$ = new CStatements();
									$$->AddChild($1);
									$$->AddChild($2);
									}
			;

if_statement :    IF '(' exprs ')'statement {$$ = new CIFStatement();
															$$->AddChild($3);
															$$->AddChild($5);
														}
			| IF '(' exprs ')' statement  ELSE  statement  { $$ = new CIFStatement();
															 $$->AddChild($3);
															 $$->AddChild($5);
															 $$->AddChild($7);
															}
			;

while_statement:  WHILE '(' exprs ')' statement { $$ = new CWhileStatement();
														   $$->AddChild($3);
														   $$->AddChild($5); 
												}
				;

set : '[' ']' {$$ = new CSet();}
	|'[' arguments ']' {$$ = new CSet();
						 $$->AddChild($2);}
	;


arguments : exprs { $$ = new CArguments();
						 $$->AddChild($1);
					   }
		| arguments ',' exprs { $$ = new CArguments();
									 $$->AddChild($1);
									 $$->AddChild($3);
									}
		;

exprs : NUMBER 
	| IDENTIFIER
	| IDENTIFIER '=' set   {$$ = new CAssignment();
							$$->AddChild($1);
							$$->AddChild($3);
							}
	| set
	| IDENTIFIER '=' exprs {$$ = new CAssignment();
							$$->AddChild($1);
							$$->AddChild($3);
							}
	|	exprs PLUS exprs {$$ = new CAdd();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	|	exprs PLUSPLUS {$$ = new CPlusplus();
						$$->AddChild($1);
						}
	|	exprs MINUS exprs  {$$ = new CMinus();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	|	exprs DIV exprs   {$$ = new CDiv();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	|	exprs MULT exprs  {$$ = new CMult();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	| exprs AND exprs { $$ = new CAnd();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs OR exprs{ $$ = new COr();
						$$->AddChild($1);
						$$->AddChild($3);}
	| NOT exprs { $$ = new CNot();
						$$->AddChild($2);
				}
	| exprs LT exprs{$$ = new CLt();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs GT exprs{$$ = new CGt();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs GTE exprs{$$ = new CGte();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs LTE exprs{$$ = new CLte();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs EQUAL exprs{$$ = new CEqual();
						$$->AddChild($1);
						$$->AddChild($3);}
	| exprs NEQUAL exprs {$$ = new CNequal();
						$$->AddChild($1);
						$$->AddChild($3);}
	;




%%


namespace yy{
	void parser::error(const location_type& loc, const std::string& msg){
		std::cerr << "error at " << loc << ": " << msg << std::endl;
	}
}