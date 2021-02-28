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

  case 11:
/* Line 670 of lalr1.cc  */
#line 52 "grammar.y"
    { (yyval.node) = new CStatement();
								(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
								}
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 58 "grammar.y"
    {(yyval.node) = new CCompoundStatement();}
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 59 "grammar.y"
    {(yyval.node) = new CCompoundStatement();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));
											}
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 64 "grammar.y"
    { (yyval.node) = new CStatements();
						(yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
						}
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 67 "grammar.y"
    { (yyval.node) = new CStatements();
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
									}
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 73 "grammar.y"
    {(yyval.node) = new CIFStatement();
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node));
														}
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 77 "grammar.y"
    { (yyval.node) = new CIFStatement();
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (3)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (5)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (7)].node));
															}
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 84 "grammar.y"
    { (yyval.node) = new CWhileStatement();
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node)); 
												}
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 90 "grammar.y"
    {(yyval.node) = new CSet();}
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 91 "grammar.y"
    {(yyval.node) = new CSet();
						 (yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));}
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 96 "grammar.y"
    { (yyval.node) = new CArguments();
						 (yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
					   }
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 99 "grammar.y"
    { (yyval.node) = new CArguments();
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
									}
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 105 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 110 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 114 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 118 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 122 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 129 "grammar.y"
    {	(yyval.node) = new CUnion();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 133 "grammar.y"
    {	(yyval.node) = new CUnique();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 137 "grammar.y"
    {	(yyval.node) = new CSetxor();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 141 "grammar.y"
    {	(yyval.node) = new CSetdiff();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 32:
/* Line 670 of lalr1.cc  */
#line 145 "grammar.y"
    {(yyval.node) = new CIsmember();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));

														}
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 167 "grammar.y"
    {(yyval.node) = new CAdd();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 171 "grammar.y"
    {(yyval.node) = new CPlusplus();
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
									}
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 174 "grammar.y"
    {(yyval.node) = new CMinus();
													(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
													(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
													}
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 178 "grammar.y"
    {(yyval.node) = new CDiv();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 182 "grammar.y"
    {(yyval.node) = new CMult();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 186 "grammar.y"
    { (yyval.node) = new CAnd();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 189 "grammar.y"
    { (yyval.node) = new COr();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 192 "grammar.y"
    { (yyval.node) = new CNot();
							(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
				}
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 195 "grammar.y"
    {(yyval.node) = new CLt();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 198 "grammar.y"
    {(yyval.node) = new CGt();
										(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
										(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 201 "grammar.y"
    {(yyval.node) = new CGte();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 204 "grammar.y"
    {(yyval.node) = new CLte();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 207 "grammar.y"
    {(yyval.node) = new CEqual();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 55:
/* Line 670 of lalr1.cc  */
#line 210 "grammar.y"
    {(yyval.node) = new CNequal();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 217 "grammar.y"
    {(yyval.node) = new CAdd();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 221 "grammar.y"
    {(yyval.node) = new CPlusplus();
						(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
						}
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 224 "grammar.y"
    {(yyval.node) = new CMinus();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 228 "grammar.y"
    {(yyval.node) = new CDiv();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 61:
/* Line 670 of lalr1.cc  */
#line 232 "grammar.y"
    {(yyval.node) = new CMult();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;


/* Line 670 of lalr1.cc  */
#line 803 "grammar.tab.cpp"
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
  const signed char parser::yypact_ninf_ = -33;
  const short int
  parser::yypact_[] =
  {
       188,   -33,    -4,     7,    -6,    11,    24,    48,    31,    38,
      40,    61,    62,    64,    35,   -33,   139,   106,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -32,    36,   186,    10,     5,
      66,   204,   -33,     7,     7,    83,   -33,    54,    88,    99,
     104,   112,   120,   122,   -33,   -33,   -33,   -33,   -33,   154,
       8,    -9,   -33,   -33,   -33,    35,    35,    35,    35,    35,
      35,    35,    35,   -33,    35,    35,    35,    35,   -33,   -33,
     204,   -33,   -33,   -33,   100,   109,    84,   -33,    86,    86,
      86,    86,   145,   123,   125,   137,   138,   140,   -33,   -33,
     -33,    86,   216,   105,   227,   227,   227,   227,   227,   227,
      63,    63,   -33,   -33,   188,   188,    12,    54,    65,    65,
     -33,   -33,   -33,   174,   176,   177,   178,   179,   -33,   190,
     -33,   146,   147,   148,   158,   181,   188,   -33,   -33,   -33,
     -33,   -33,   -33
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     2,    10,
       6,     7,    37,    38,    40,    41,     0,     0,     0,     0,
       0,    39,     8,     0,     0,    35,    56,    33,     0,     0,
       0,     0,     0,     0,    35,    41,    49,    12,    14,     0,
       0,    41,     1,     3,     4,     0,     0,     0,     0,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    11,    23,
      27,    19,    21,     9,     0,     0,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,    15,
      20,     0,    48,    47,    55,    54,    50,    53,    51,    52,
      44,    42,    45,    46,     0,     0,    35,    25,    59,    57,
      60,    61,    26,     0,     0,     0,     0,     0,    22,    16,
      18,     0,     0,     0,     0,     0,     0,    28,    29,    30,
      31,    32,    17
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  parser::yypgoto_[] =
  {
       -33,   -33,   -12,   -33,   -33,   -33,   -33,   232,   -33,   -33,
     -33,     0,    33,    -2,    -7
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    17,    18,    19,    49,    20,    21,    22,    50,    23,
      24,    45,    26,    27,    37
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -37;
  const short int
  parser::yytable_[] =
  {
        25,    31,   -36,    25,    48,    53,   -36,    36,     1,    44,
       1,     2,    46,     1,    44,    28,    51,    25,     7,     8,
       9,    10,    11,    12,    13,   -36,    70,   -21,    32,    72,
     -21,    31,    31,    25,    25,    38,    30,    89,     1,    44,
      14,    71,    29,    14,    90,    29,   -24,    91,    33,    25,
     -24,     1,    35,    92,    93,    94,    95,    96,    97,    98,
      99,    34,   100,   101,   102,   103,    74,    75,    14,   107,
      54,   108,   109,   110,   111,    39,    36,    40,    36,    36,
      36,    36,    77,    78,    79,    80,    81,     1,   106,     1,
      44,   118,   119,   120,    66,    67,    80,    81,    41,    42,
      73,    43,    76,    83,    25,    25,    52,    82,    84,     1,
       2,     3,     4,     5,   132,     6,    85,     7,     8,     9,
      10,    11,    12,    13,    86,    87,    25,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,   104,    14,
      15,    16,     1,     2,     3,     4,     5,   105,     6,   112,
       7,     8,     9,    10,    11,    12,    13,     1,     2,     3,
       4,     5,   113,     6,   114,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    47,   115,   116,   121,   117,
     122,   123,   124,   125,   127,   128,   129,    14,    15,    16,
      88,     1,     2,     3,     4,     5,   130,     6,   126,     7,
       8,     9,    10,    11,    12,    13,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   131,
      68,    14,    15,    16,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   -37,
     -37,   -37,   -37,   -37,   -37,    63,    64,    65,    66,    67,
      69
  };

  /* YYCHECK.  */
  const unsigned char
  parser::yycheck_[] =
  {
         0,     3,    34,     3,    16,    17,    38,     7,     3,     4,
       3,     4,    14,     3,     4,    19,    16,    17,    11,    12,
      13,    14,    15,    16,    17,    34,    28,    36,    34,    29,
      39,    33,    34,    33,    34,     4,     3,    49,     3,     4,
      33,    36,    35,    33,    36,    35,    34,    39,    37,    49,
      38,     3,     4,    55,    56,    57,    58,    59,    60,    61,
      62,    37,    64,    65,    66,    67,    33,    34,    33,    76,
      34,    78,    79,    80,    81,    37,    76,    37,    78,    79,
      80,    81,    28,    29,    30,    31,    32,     3,     4,     3,
       4,    91,   104,   105,    31,    32,    31,    32,    37,    37,
      34,    37,    19,     4,   104,   105,     0,    19,     4,     3,
       4,     5,     6,     7,   126,     9,     4,    11,    12,    13,
      14,    15,    16,    17,     4,     3,   126,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    38,    33,
      34,    35,     3,     4,     5,     6,     7,    38,     9,     4,
      11,    12,    13,    14,    15,    16,    17,     3,     4,     5,
       6,     7,    39,     9,    39,    11,    12,    13,    14,    15,
      16,    17,    33,    34,    35,    36,    39,    39,     4,    39,
       4,     4,     4,     4,    38,    38,    38,    33,    34,    35,
      36,     3,     4,     5,     6,     7,    38,     9,     8,    11,
      12,    13,    14,    15,    16,    17,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    38,
      34,    33,    34,    35,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      28
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      14,    15,    16,    17,    33,    34,    35,    41,    42,    43,
      45,    46,    47,    49,    50,    51,    52,    53,    19,    35,
      52,    53,    34,    37,    37,     4,    51,    54,     4,    37,
      37,    37,    37,    37,     4,    51,    53,    36,    42,    44,
      48,    51,     0,    42,    34,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    34,    47,
      53,    36,    51,    34,    52,    52,    19,    28,    29,    30,
      31,    32,    19,     4,     4,     4,     4,     3,    36,    42,
      36,    39,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    38,    38,     4,    54,    54,    54,
      54,    54,     4,    39,    39,    39,    39,    39,    51,    42,
      42,     4,     4,     4,     4,     4,     8,    38,    38,    38,
      38,    38,    42
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,    59,   123,   125,    40,    41,    44
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  parser::yyr1_[] =
  {
         0,    40,    41,    41,    42,    42,    42,    42,    42,    42,
      42,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    48,    48,    49,    49,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    51,    51,    52,    52,    52,    52,
      52,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    54,    54,    54,
      54,    54
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     2,     2,     1,     1,     1,     2,     3,
       1,     2,     2,     3,     1,     2,     5,     7,     5,     2,
       3,     1,     3,     3,     4,     4,     4,     3,     6,     6,
       6,     6,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     1,     3,     2,     3,
       3,     3
  };

#if YYDEBUG
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const parser::yytname_[] =
  {
    "$end", "error", "$undefined", "NUMBER", "IDENTIFIER", "RETURN",
  "BREAK", "IF", "ELSE", "WHILE", "FUNCTION", "SET", "ID", "UNION",
  "UNIQUE", "SETXOR", "SETDIFF", "ISMEMBER", "JOIN", "'='", "OR", "AND",
  "NEQUAL", "EQUAL", "LT", "LTE", "GT", "GTE", "PLUSPLUS", "MINUS", "PLUS",
  "DIV", "MULT", "NOT", "';'", "'{'", "'}'", "'('", "')'", "','",
  "$accept", "compileUnit", "statement", "compound_statement",
  "statements", "if_statement", "while_statement", "set", "arguments",
  "assigns", "set_funcs", "last_exprs", "exprs", "epxrs_operations",
  "set_operations", YY_NULL
  };


  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const parser::rhs_number_type
  parser::yyrhs_[] =
  {
        41,     0,    -1,    42,    -1,    41,    42,    -1,    52,    34,
      -1,    34,    -1,    45,    -1,    46,    -1,     6,    34,    -1,
       5,    52,    34,    -1,    43,    -1,    53,    34,    -1,    35,
      36,    -1,    35,    44,    36,    -1,    42,    -1,    44,    42,
      -1,     7,    37,    52,    38,    42,    -1,     7,    37,    52,
      38,    42,     8,    42,    -1,     9,    37,    52,    38,    42,
      -1,    35,    36,    -1,    35,    48,    36,    -1,    51,    -1,
      48,    39,    51,    -1,     4,    19,    47,    -1,    11,     4,
      19,     4,    -1,    11,     4,    19,    54,    -1,    12,     4,
      19,     4,    -1,     4,    19,    53,    -1,    13,    37,     4,
      39,     4,    38,    -1,    14,    37,     4,    39,     4,    38,
      -1,    15,    37,     4,    39,     4,    38,    -1,    16,    37,
       4,    39,     4,    38,    -1,    17,    37,     3,    39,     4,
      38,    -1,    11,    54,    -1,     3,    -1,     4,    -1,    51,
      -1,    47,    -1,    49,    -1,    53,    -1,    50,    -1,    51,
      -1,    53,    30,    53,    -1,    53,    28,    -1,    53,    29,
      53,    -1,    53,    31,    53,    -1,    53,    32,    53,    -1,
      53,    21,    53,    -1,    53,    20,    53,    -1,    33,    53,
      -1,    53,    24,    53,    -1,    53,    26,    53,    -1,    53,
      27,    53,    -1,    53,    25,    53,    -1,    53,    23,    53,
      -1,    53,    22,    53,    -1,    51,    -1,    54,    30,    54,
      -1,    54,    28,    -1,    54,    29,    54,    -1,    54,    31,
      54,    -1,    54,    32,    54,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    11,    13,    15,    17,    20,
      24,    26,    29,    32,    36,    38,    41,    47,    55,    61,
      64,    68,    70,    74,    78,    83,    88,    93,    97,   104,
     111,   118,   125,   132,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   155,   158,   162,   166,   170,   174,   178,
     181,   185,   189,   193,   197,   201,   205,   207,   211,   214,
     218,   222
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    33,    33,    36,    43,    46,    47,    48,    49,    50,
      51,    52,    58,    59,    64,    67,    73,    77,    84,    90,
      91,    96,    99,   105,   110,   114,   118,   122,   129,   133,
     137,   141,   145,   150,   155,   156,   159,   160,   161,   162,
     163,   166,   167,   171,   174,   178,   182,   186,   189,   192,
     195,   198,   201,   204,   207,   210,   216,   217,   221,   224,
     228,   232
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
      37,    38,     2,     2,    39,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,     2,    36,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int parser::yyeof_ = 0;
  const int parser::yylast_ = 260;
  const int parser::yynnts_ = 15;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 52;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 40;

  const unsigned int parser::yyuser_token_number_max_ = 287;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1364 "grammar.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 241 "grammar.y"



namespace yy{
	void parser::error(const location_type& loc, const std::string& msg){
		std::cerr << "error at " << loc << ": " << msg << std::endl;
	}
}