/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* First part of user declarations.  */
/* Line 279 of lalr1.cc  */
#line 2 "grammar.y"

#include "grammar.tab.h"
#include "SymbolNodes.h"
extern int yylex(yy::parser::semantic_type *yylval);

/* Line 279 of lalr1.cc  */
#line 44 "grammar.tab.cpp"


#include "grammar.tab.h"

/* User implementation prologue.  */

/* Line 285 of lalr1.cc  */
#line 52 "grammar.tab.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location) YYUSE(Type)
# define YY_REDUCE_PRINT(Rule)        static_cast<void>(0)
# define YY_STACK_PRINT()             static_cast<void>(0)

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
/* Line 353 of lalr1.cc  */
#line 147 "grammar.tab.cpp"

  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
     :yydebug_ (false),
      yycdebug_ (&std::cerr)
#endif
  {
  }

  parser::~parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    std::ostream& yyo = debug_stream ();
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
        YYCDEBUG << "Reading a token: ";
        yychar = yylex (&yylval);
      }

    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    // Compute the default @$.
    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }

    // Perform the reduction.
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
          case 2:
/* Line 670 of lalr1.cc  */
#line 33 "grammar.y"
    { g_root= (yyval.node) = new CCompileUnit();
							(yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
						  }
    break;

  case 3:
/* Line 670 of lalr1.cc  */
#line 36 "grammar.y"
    { g_root= (yyval.node) = new CCompileUnit();
							(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
						  }
    break;

  case 4:
/* Line 670 of lalr1.cc  */
#line 43 "grammar.y"
    { (yyval.node) = new CStatement();
						(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
					  }
    break;

  case 5:
/* Line 670 of lalr1.cc  */
#line 46 "grammar.y"
    {(yyval.node) = new CStatement();}
    break;

  case 8:
/* Line 670 of lalr1.cc  */
#line 49 "grammar.y"
    { (yyval.node) = new CBreakStatement();}
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 56 "grammar.y"
    {(yyval.node) = new CCompoundStatement();}
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 57 "grammar.y"
    {(yyval.node) = new CCompoundStatement();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));
											}
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 62 "grammar.y"
    { (yyval.node) = new CStatements();
						(yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
						}
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 65 "grammar.y"
    { (yyval.node) = new CStatements();
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
									}
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 71 "grammar.y"
    {(yyval.node) = new CIFStatement();
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node));
														}
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 75 "grammar.y"
    { (yyval.node) = new CIFStatement();
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (3)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (5)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (7)].node));
															}
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 82 "grammar.y"
    { (yyval.node) = new CWhileStatement();
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node)); 
												}
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 88 "grammar.y"
    {(yyval.node) = new CSet();}
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 89 "grammar.y"
    {(yyval.node) = new CSet();
						 (yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));}
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 94 "grammar.y"
    { (yyval.node) = new CArguments();
						 (yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
					   }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 97 "grammar.y"
    { (yyval.node) = new CArguments();
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
									}
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 105 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 110 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 114 "grammar.y"
    {(yyval.node) = new CAdd();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 118 "grammar.y"
    {(yyval.node) = new CPlusplus();
						(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
						}
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 121 "grammar.y"
    {(yyval.node) = new CMinus();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 125 "grammar.y"
    {(yyval.node) = new CDiv();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 129 "grammar.y"
    {(yyval.node) = new CMult();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 33:
/* Line 670 of lalr1.cc  */
#line 133 "grammar.y"
    { (yyval.node) = new CAnd();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 34:
/* Line 670 of lalr1.cc  */
#line 136 "grammar.y"
    { (yyval.node) = new COr();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 35:
/* Line 670 of lalr1.cc  */
#line 139 "grammar.y"
    { (yyval.node) = new CNot();
						(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
				}
    break;

  case 36:
/* Line 670 of lalr1.cc  */
#line 142 "grammar.y"
    {(yyval.node) = new CLt();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 37:
/* Line 670 of lalr1.cc  */
#line 145 "grammar.y"
    {(yyval.node) = new CGt();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 38:
/* Line 670 of lalr1.cc  */
#line 148 "grammar.y"
    {(yyval.node) = new CGte();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 39:
/* Line 670 of lalr1.cc  */
#line 151 "grammar.y"
    {(yyval.node) = new CLte();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 40:
/* Line 670 of lalr1.cc  */
#line 154 "grammar.y"
    {(yyval.node) = new CEqual();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 157 "grammar.y"
    {(yyval.node) = new CNequal();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;


/* Line 670 of lalr1.cc  */
#line 678 "grammar.tab.cpp"
      default:
        break;
      }

    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */
        if (yychar <= yyeof_)
          {
            /* Return failure if at end of input.  */
            if (yychar == yyeof_)
              YYABORT;
          }
        else
          {
            yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
            yychar = yyempty_;
          }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	  YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystate_stack_.height ())
      {
        yydestruct_ ("Cleanup: popping",
                     yystos_[yystate_stack_[0]],
                     &yysemantic_stack_[0],
                     &yylocation_stack_[0]);
        yypop_ ();
      }

    return yyresult;
    }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (yychar != yyempty_)
          {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_ (yychar);
            yydestruct_ (YY_NULL, yytoken, &yylval, &yylloc);
          }

        while (1 < yystate_stack_.height ())
          {
            yydestruct_ (YY_NULL,
                         yystos_[yystate_stack_[0]],
                         &yysemantic_stack_[0],
                         &yylocation_stack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (int, int)
  {
    return YY_("syntax error");
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char parser::yypact_ninf_ = -29;
  const short int
  parser::yypact_[] =
  {
        94,   -29,     1,   106,   -24,   -13,   -12,   106,   -29,    80,
       4,    51,   -29,   -29,   -29,   -29,    -6,   164,   106,   -29,
     179,   -29,   106,   106,   -29,   -29,   -29,    87,   -29,   -28,
     194,   -29,   -29,   -29,   106,   106,   106,   106,   106,   106,
     106,   106,   -29,   106,   106,   106,   106,   -29,   -29,   194,
     -29,   126,   145,   -29,   -29,   -29,   106,   206,   217,   228,
     228,   228,   228,   228,   228,    -9,    -9,   -29,   -29,    94,
      94,   194,    14,   -29,    94,   -29
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    23,    24,     0,     0,     0,     0,     0,     5,     0,
       0,     0,     2,    10,     6,     7,    26,     0,     0,    26,
       0,     8,     0,     0,    35,    12,    14,     0,    19,     0,
      21,     1,     3,    11,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     4,    25,    27,
       9,     0,     0,    13,    15,    20,     0,    34,    33,    41,
      40,    36,    39,    37,    38,    30,    28,    31,    32,     0,
       0,    22,    16,    18,     0,    17
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  parser::yypgoto_[] =
  {
       -29,   -29,    -8,   -29,   -29,   -29,   -29,     0,   -29,     3
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    11,    12,    13,    27,    14,    15,    19,    29,    17
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -1;
  const signed char
  parser::yytable_[] =
  {
        16,    26,    21,    32,    55,    56,    20,     1,     2,    16,
      24,    16,    18,    30,    45,    46,    22,    23,    48,    54,
      33,    49,    74,     0,     0,    51,    52,    16,     0,     7,
       0,     0,     0,     0,     0,    10,    28,    57,    58,    59,
      60,    61,    62,    63,    64,     0,    65,    66,    67,    68,
       0,    31,     0,     0,     1,     2,     3,     4,     5,    71,
       6,    72,    73,     0,     0,     0,    75,     0,     0,    16,
      16,     0,     0,     0,    16,     0,     7,     8,     9,     0,
       0,     0,    10,     1,     2,     3,     4,     5,     0,     6,
       1,     2,     3,     4,     5,     0,     6,     1,     2,     3,
       4,     5,     0,     6,     0,     7,     8,     9,    25,     1,
       2,    10,     7,     8,     9,    53,     0,     0,    10,     7,
       8,     9,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     7,     0,     0,     0,     0,     0,    10,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     0,     0,     0,     0,    69,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,    70,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,     0,
      47,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,     0,    50,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    46
  };

  /* YYCHECK.  */
  const signed char
  parser::yycheck_[] =
  {
         0,     9,    26,    11,    32,    33,     3,     3,     4,     9,
       7,    11,    11,    10,    23,    24,    29,    29,    18,    27,
      26,    18,     8,    -1,    -1,    22,    23,    27,    -1,    25,
      -1,    -1,    -1,    -1,    -1,    31,    32,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      -1,     0,    -1,    -1,     3,     4,     5,     6,     7,    56,
       9,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    69,
      70,    -1,    -1,    -1,    74,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,     3,     4,     5,     6,     7,    -1,     9,
       3,     4,     5,     6,     7,    -1,     9,     3,     4,     5,
       6,     7,    -1,     9,    -1,    25,    26,    27,    28,     3,
       4,    31,    25,    26,    27,    28,    -1,    -1,    31,    25,
      26,    27,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    30,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      26,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    26,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     9,    25,    26,    27,
      31,    35,    36,    37,    39,    40,    41,    43,    11,    41,
      43,    26,    29,    29,    43,    28,    36,    38,    32,    42,
      43,     0,    36,    26,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    26,    41,    43,
      26,    43,    43,    28,    36,    32,    33,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    30,
      30,    43,    36,    36,     8,    36
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    61,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,    59,   123,   125,    40,
      41,    91,    93,    44
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    34,    35,    35,    36,    36,    36,    36,    36,    36,
      36,    36,    37,    37,    38,    38,    39,    39,    40,    41,
      41,    42,    42,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     2,     2,     1,     1,     1,     2,     3,
       1,     2,     2,     3,     1,     2,     5,     7,     5,     2,
       3,     1,     3,     1,     1,     3,     1,     3,     3,     2,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       3,     3
  };

#if YYDEBUG
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "RETURN",
  "BREAK", "IF", "ELSE", "WHILE", "FUNCTION", "'='", "OR", "AND", "NEQUAL",
  "EQUAL", "LT", "LTE", "GT", "GTE", "PLUSPLUS", "MINUS", "PLUS", "DIV",
  "MULT", "NOT", "';'", "'{'", "'}'", "'('", "')'", "'['", "']'", "','",
  "$accept", "compileUnit", "statement", "compound_statement",
  "statements", "if_statement", "while_statement", "set", "arguments",
  "exprs", YY_NULL
  };


  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        35,     0,    -1,    36,    -1,    35,    36,    -1,    43,    26,
      -1,    26,    -1,    39,    -1,    40,    -1,     6,    26,    -1,
       5,    43,    26,    -1,    37,    -1,    41,    26,    -1,    27,
      28,    -1,    27,    38,    28,    -1,    36,    -1,    38,    36,
      -1,     7,    29,    43,    30,    36,    -1,     7,    29,    43,
      30,    36,     8,    36,    -1,     9,    29,    43,    30,    36,
      -1,    31,    32,    -1,    31,    42,    32,    -1,    43,    -1,
      42,    33,    43,    -1,     3,    -1,     4,    -1,     4,    11,
      41,    -1,    41,    -1,     4,    11,    43,    -1,    43,    22,
      43,    -1,    43,    20,    -1,    43,    21,    43,    -1,    43,
      23,    43,    -1,    43,    24,    43,    -1,    43,    13,    43,
      -1,    43,    12,    43,    -1,    25,    43,    -1,    43,    16,
      43,    -1,    43,    18,    43,    -1,    43,    19,    43,    -1,
      43,    17,    43,    -1,    43,    15,    43,    -1,    43,    14,
      43,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    11,    13,    15,    17,    20,
      24,    26,    29,    32,    36,    38,    41,    47,    55,    61,
      64,    68,    70,    74,    76,    78,    82,    84,    88,    92,
      95,    99,   103,   107,   111,   115,   118,   122,   126,   130,
     134,   138
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    33,    33,    36,    43,    46,    47,    48,    49,    50,
      51,    52,    56,    57,    62,    65,    71,    75,    82,    88,
      89,    94,    97,   103,   104,   105,   109,   110,   114,   118,
     121,   125,   129,   133,   136,   139,   142,   145,   148,   151,
     154,   157
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      29,    30,     2,     2,    33,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,    11,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    31,     2,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,    28,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 252;
  const int parser::yynnts_ = 10;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 31;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 34;

  const unsigned int parser::yyuser_token_number_max_ = 279;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1198 "grammar.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 165 "grammar.y"



namespace yy{
	void parser::error(const location_type& loc, const std::string& msg){
		std::cerr << "error at " << loc << ": " << msg << std::endl;
	}
}