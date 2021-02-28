
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
%token RETURN BREAK IF ELSE WHILE FUNCTION SET ID UNION UNIQUE SETXOR SETDIFF ISMEMBER JOIN
%right '='
%left OR
%left AND
%nonassoc GTE GT LTE LT EQUAL NEQUAL
%left PLUS MINUS PLUSPLUS
%left MULT DIV
%nonassoc NOT ELSE
%type <node> exprs compileUnit statement if_statement epxrs_operations set_operations assigns while_statement set compound_statement statements arguments last_exprs set_funcs

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
		| epxrs_operations ';' { $$ = new CStatement();
								$$->AddChild($1);
								}
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

set : '{' '}' {$$ = new CSet();}
	|'{' arguments '}' {$$ = new CSet();
						 $$->AddChild($2);}
	;


arguments : last_exprs { $$ = new CArguments();
						 $$->AddChild($1);
					   }
		| arguments ',' last_exprs { $$ = new CArguments();
									 $$->AddChild($1);
									 $$->AddChild($3);
									}
		;

assigns: IDENTIFIER '=' set   {$$ = new CAssignmentForSet();
							$$->AddChild($1);
							$$->AddChild($3);
							}

		| SET IDENTIFIER '=' IDENTIFIER {$$ = new CAssignmentForSet();
							$$->AddChild($2);
							$$->AddChild($4);
							}
		| SET IDENTIFIER '=' set_operations {$$ = new CAssignmentForSet();
							$$->AddChild($2);
							$$->AddChild($4);
							}
		| ID IDENTIFIER '=' IDENTIFIER {$$ = new CAssignment();
							$$->AddChild($2);
							$$->AddChild($4);
							}
		| IDENTIFIER '=' epxrs_operations {$$ = new CAssignment();
							$$->AddChild($1);
							$$->AddChild($3);
							}
		
		;

set_funcs:  UNION '(' IDENTIFIER ',' IDENTIFIER ')' {	$$ = new CUnion();
															$$->AddChild($3);
															$$->AddChild($5);
														}
			| UNIQUE '(' IDENTIFIER ',' IDENTIFIER ')' {	$$ = new CUnique();
															$$->AddChild($3);
															$$->AddChild($5);
														}
		|  SETXOR '(' IDENTIFIER ',' IDENTIFIER ')' {	$$ = new CSetxor();
															$$->AddChild($3);
															$$->AddChild($5);
														}
		|  SETDIFF '(' IDENTIFIER ',' IDENTIFIER ')' {	$$ = new CSetdiff();
															$$->AddChild($3);
															$$->AddChild($5);
														}
		|  ISMEMBER '(' NUMBER ',' IDENTIFIER ')'		{$$ = new CIsmember();
															$$->AddChild($3);
															$$->AddChild($5);

														}
		| SET set_operations

			;


last_exprs: NUMBER
		| IDENTIFIER
		;

exprs : last_exprs
	| set
	| assigns 
	| epxrs_operations 
	| set_funcs
	;

epxrs_operations:	last_exprs
	|	epxrs_operations PLUS epxrs_operations {$$ = new CAdd();
												$$->AddChild($1);
												$$->AddChild($3);
												}
	|	epxrs_operations PLUSPLUS {$$ = new CPlusplus();
									$$->AddChild($1);
									}
	|	epxrs_operations MINUS epxrs_operations  {$$ = new CMinus();
													$$->AddChild($1);
													$$->AddChild($3);
													}
	|	epxrs_operations DIV epxrs_operations   {$$ = new CDiv();
												$$->AddChild($1);
												$$->AddChild($3);
												}
	|	epxrs_operations MULT epxrs_operations  {$$ = new CMult();
												$$->AddChild($1);
												$$->AddChild($3);
												}
	| epxrs_operations AND epxrs_operations { $$ = new CAnd();
											$$->AddChild($1);
											$$->AddChild($3);}
	| epxrs_operations OR epxrs_operations{ $$ = new COr();
											$$->AddChild($1);
											$$->AddChild($3);}
	| NOT epxrs_operations { $$ = new CNot();
							$$->AddChild($2);
				}
	| epxrs_operations LT epxrs_operations{$$ = new CLt();
											$$->AddChild($1);
											$$->AddChild($3);}
	| epxrs_operations GT epxrs_operations{$$ = new CGt();
										$$->AddChild($1);
										$$->AddChild($3);}
	| epxrs_operations GTE epxrs_operations{$$ = new CGte();
											$$->AddChild($1);
											$$->AddChild($3);}
	| epxrs_operations LTE epxrs_operations{$$ = new CLte();
											$$->AddChild($1);
											$$->AddChild($3);}
	| epxrs_operations EQUAL epxrs_operations{$$ = new CEqual();
												$$->AddChild($1);
												$$->AddChild($3);}
	| epxrs_operations NEQUAL epxrs_operations {$$ = new CNequal();
												$$->AddChild($1);
												$$->AddChild($3);}

		;

set_operations:	last_exprs 
				|set_operations PLUS set_operations {$$ = new CAdd();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	|set_operations PLUSPLUS {$$ = new CPlusplus();
						$$->AddChild($1);
						}
	| set_operations MINUS set_operations  {$$ = new CMinus();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	|set_operations DIV set_operations   {$$ = new CDiv();
						$$->AddChild($1);
						$$->AddChild($3);
						}
	| set_operations MULT set_operations  {$$ = new CMult();
						$$->AddChild($1);
						$$->AddChild($3);
						}

		;



%%


namespace yy{
	void parser::error(const location_type& loc, const std::string& msg){
		std::cerr << "error at " << loc << ": " << msg << std::endl;
	}
}