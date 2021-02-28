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
#line 55 "grammar.y"
    {(yyval.node) = new CCompoundStatement();}
    break;

  case 12:
/* Line 670 of lalr1.cc  */
#line 56 "grammar.y"
    {(yyval.node) = new CCompoundStatement();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));
											}
    break;

  case 13:
/* Line 670 of lalr1.cc  */
#line 61 "grammar.y"
    { (yyval.node) = new CStatements();
						(yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
						}
    break;

  case 14:
/* Line 670 of lalr1.cc  */
#line 64 "grammar.y"
    { (yyval.node) = new CStatements();
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
									}
    break;

  case 15:
/* Line 670 of lalr1.cc  */
#line 70 "grammar.y"
    {(yyval.node) = new CIFStatement();
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node));
														}
    break;

  case 16:
/* Line 670 of lalr1.cc  */
#line 74 "grammar.y"
    { (yyval.node) = new CIFStatement();
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (3)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (5)].node));
															 (yyval.node)->AddChild((yysemantic_stack_[(7) - (7)].node));
															}
    break;

  case 17:
/* Line 670 of lalr1.cc  */
#line 81 "grammar.y"
    { (yyval.node) = new CWhileStatement();
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (3)].node));
														   (yyval.node)->AddChild((yysemantic_stack_[(5) - (5)].node)); 
												}
    break;

  case 18:
/* Line 670 of lalr1.cc  */
#line 87 "grammar.y"
    {(yyval.node) = new CSet();}
    break;

  case 19:
/* Line 670 of lalr1.cc  */
#line 88 "grammar.y"
    {(yyval.node) = new CSet();
						 (yyval.node)->AddChild((yysemantic_stack_[(3) - (2)].node));}
    break;

  case 20:
/* Line 670 of lalr1.cc  */
#line 93 "grammar.y"
    { (yyval.node) = new CArguments();
						 (yyval.node)->AddChild((yysemantic_stack_[(1) - (1)].node));
					   }
    break;

  case 21:
/* Line 670 of lalr1.cc  */
#line 96 "grammar.y"
    { (yyval.node) = new CArguments();
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
									 (yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
									}
    break;

  case 22:
/* Line 670 of lalr1.cc  */
#line 102 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 23:
/* Line 670 of lalr1.cc  */
#line 107 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 24:
/* Line 670 of lalr1.cc  */
#line 111 "grammar.y"
    {(yyval.node) = new CAssignmentForSet();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 25:
/* Line 670 of lalr1.cc  */
#line 115 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (2)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(4) - (4)].node));
							}
    break;

  case 26:
/* Line 670 of lalr1.cc  */
#line 119 "grammar.y"
    {(yyval.node) = new CAssignment();
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
							(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
							}
    break;

  case 27:
/* Line 670 of lalr1.cc  */
#line 126 "grammar.y"
    {	(yyval.node) = new CUnion();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 28:
/* Line 670 of lalr1.cc  */
#line 130 "grammar.y"
    {	(yyval.node) = new CUnique();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 29:
/* Line 670 of lalr1.cc  */
#line 134 "grammar.y"
    {	(yyval.node) = new CSetxor();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 30:
/* Line 670 of lalr1.cc  */
#line 138 "grammar.y"
    {	(yyval.node) = new CSetdiff();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));
														}
    break;

  case 31:
/* Line 670 of lalr1.cc  */
#line 142 "grammar.y"
    {(yyval.node) = new CIsmember();
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (3)].node));
															(yyval.node)->AddChild((yysemantic_stack_[(6) - (5)].node));

														}
    break;

  case 41:
/* Line 670 of lalr1.cc  */
#line 166 "grammar.y"
    {(yyval.node) = new CAdd();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 42:
/* Line 670 of lalr1.cc  */
#line 170 "grammar.y"
    {(yyval.node) = new CPlusplus();
									(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
									}
    break;

  case 43:
/* Line 670 of lalr1.cc  */
#line 173 "grammar.y"
    {(yyval.node) = new CMinus();
													(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
													(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
													}
    break;

  case 44:
/* Line 670 of lalr1.cc  */
#line 177 "grammar.y"
    {(yyval.node) = new CDiv();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 45:
/* Line 670 of lalr1.cc  */
#line 181 "grammar.y"
    {(yyval.node) = new CMult();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
												}
    break;

  case 46:
/* Line 670 of lalr1.cc  */
#line 185 "grammar.y"
    { (yyval.node) = new CAnd();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 47:
/* Line 670 of lalr1.cc  */
#line 188 "grammar.y"
    { (yyval.node) = new COr();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 48:
/* Line 670 of lalr1.cc  */
#line 191 "grammar.y"
    { (yyval.node) = new CNot();
							(yyval.node)->AddChild((yysemantic_stack_[(2) - (2)].node));
				}
    break;

  case 49:
/* Line 670 of lalr1.cc  */
#line 194 "grammar.y"
    {(yyval.node) = new CLt();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 50:
/* Line 670 of lalr1.cc  */
#line 197 "grammar.y"
    {(yyval.node) = new CGt();
										(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
										(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 51:
/* Line 670 of lalr1.cc  */
#line 200 "grammar.y"
    {(yyval.node) = new CGte();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 52:
/* Line 670 of lalr1.cc  */
#line 203 "grammar.y"
    {(yyval.node) = new CLte();
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
											(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 53:
/* Line 670 of lalr1.cc  */
#line 206 "grammar.y"
    {(yyval.node) = new CEqual();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 54:
/* Line 670 of lalr1.cc  */
#line 209 "grammar.y"
    {(yyval.node) = new CNequal();
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
												(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));}
    break;

  case 56:
/* Line 670 of lalr1.cc  */
#line 216 "grammar.y"
    {(yyval.node) = new CAdd();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 57:
/* Line 670 of lalr1.cc  */
#line 220 "grammar.y"
    {(yyval.node) = new CPlusplus();
						(yyval.node)->AddChild((yysemantic_stack_[(2) - (1)].node));
						}
    break;

  case 58:
/* Line 670 of lalr1.cc  */
#line 223 "grammar.y"
    {(yyval.node) = new CMinus();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 59:
/* Line 670 of lalr1.cc  */
#line 227 "grammar.y"
    {(yyval.node) = new CDiv();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;

  case 60:
/* Line 670 of lalr1.cc  */
#line 231 "grammar.y"
    {(yyval.node) = new CMult();
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (1)].node));
						(yyval.node)->AddChild((yysemantic_stack_[(3) - (3)].node));
						}
    break;


/* Line 670 of lalr1.cc  */
#line 795 "grammar.tab.cpp"
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
  const signed char parser::yypact_ninf_ = -59;
  const short int
  parser::yypact_[] =
  {
       194,   -59,    -2,   219,   -24,    20,    26,    37,    25,    31,
      33,    38,    46,    51,     0,   -59,   145,   130,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -33,    42,   255,    11,     9,
      53,   -59,     0,     0,    13,   -59,    50,    15,   219,   219,
     219,   219,    86,   -59,   -59,   -59,   -59,   -59,   179,   -14,
      28,   -59,   -59,   -59,     0,     0,     0,     0,     0,     0,
       0,     0,   -59,     0,     0,     0,     0,   -59,   255,   -59,
     -59,   -59,   217,   236,    39,   -59,    44,    44,    44,    44,
      88,    74,    77,    92,    93,    99,   -59,   -59,   -59,    44,
     267,    75,   144,   144,   144,   144,   144,   144,    34,    34,
     -59,   -59,   194,   194,    -8,    50,    54,    54,   -59,   -59,
     -59,   219,   219,   219,   219,   219,   -59,    82,   -59,    76,
      87,   102,   115,   117,   194,   -59,   -59,   -59,   -59,   -59,
     -59
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  parser::yydefact_[] =
  {
         0,    32,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     2,    10,
       6,     7,    35,    36,    38,    40,     0,    37,     0,     0,
       0,     8,     0,     0,    33,    55,    39,     0,     0,     0,
       0,     0,     0,    33,    40,    48,    11,    13,     0,     0,
      40,     1,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,     0,     0,    22,    26,    18,
      20,     9,     0,     0,     0,    57,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    14,    19,     0,
      47,    46,    54,    53,    49,    52,    50,    51,    43,    41,
      44,    45,     0,     0,    33,    24,    58,    56,    59,    60,
      25,     0,     0,     0,     0,     0,    21,    15,    17,     0,
       0,     0,     0,     0,     0,    27,    28,    29,    30,    31,
      16
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  parser::yypgoto_[] =
  {
       -59,   -59,    -9,   -59,   -59,   -59,   -59,   149,   -59,   -59,
     -59,    -5,    -3,    63,   -58
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  parser::yydefgoto_[] =
  {
        -1,    17,    18,    19,    48,    20,    21,    22,    49,    23,
      24,    25,    26,    27,    36
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char parser::yytable_ninf_ = -35;
  const short int
  parser::yytable_[] =
  {
        30,   -34,    35,     1,    43,   -34,   -34,    47,    52,    44,
      31,    50,     1,    43,     1,    43,   105,    28,   106,   107,
     108,   109,    88,    44,    70,    89,   -23,    44,    44,    37,
     -23,   -23,    74,    14,    80,    81,    82,    83,    84,    87,
       1,    34,     1,   104,    14,    69,    29,     1,    43,    44,
      44,    44,    44,    44,    44,    44,    44,    32,    44,    44,
      44,    44,   -34,    33,   -20,    65,    66,   -20,    38,    35,
      39,    35,    35,    35,    35,    40,    53,    45,    75,    76,
      77,    78,    79,    41,   116,    78,    79,    71,    42,    85,
     124,    68,   110,   117,   118,    72,    73,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   119,   120,
     121,   122,   123,   111,   125,   130,   112,    90,    91,    92,
      93,    94,    95,    96,    97,   126,    98,    99,   100,   101,
      51,   113,   114,     1,     2,     3,     4,     5,   115,     6,
     127,     7,     8,     9,    10,    11,    12,    13,     1,     2,
       3,     4,     5,   128,     6,   129,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   -35,   -35,   -35,   -35,
     -35,   -35,    62,    63,    64,    65,    66,    67,    14,    15,
      16,    46,     1,     2,     3,     4,     5,     0,     6,     0,
       7,     8,     9,    10,    11,    12,    13,     1,     2,     3,
       4,     5,     0,     6,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    86,     0,     0,     0,     0,
       0,     0,     1,     2,     0,     0,     0,    14,    15,    16,
       7,     8,     9,    10,    11,    12,    13,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
       0,     0,    14,     0,    29,   102,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,   103,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66
  };

  /* YYCHECK.  */
  const signed char
  parser::yycheck_[] =
  {
         3,    34,     7,     3,     4,    38,    39,    16,    17,    14,
      34,    16,     3,     4,     3,     4,    74,    19,    76,    77,
      78,    79,    36,    28,    29,    39,    34,    32,    33,     4,
      38,    39,    19,    33,    19,    38,    39,    40,    41,    48,
       3,     4,     3,     4,    33,    36,    35,     3,     4,    54,
      55,    56,    57,    58,    59,    60,    61,    37,    63,    64,
      65,    66,    34,    37,    36,    31,    32,    39,    37,    74,
      37,    76,    77,    78,    79,    37,    34,    14,    28,    29,
      30,    31,    32,    37,    89,    31,    32,    34,    37,     3,
       8,    28,     4,   102,   103,    32,    33,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,   111,   112,
     113,   114,   115,    39,    38,   124,    39,    54,    55,    56,
      57,    58,    59,    60,    61,    38,    63,    64,    65,    66,
       0,    39,    39,     3,     4,     5,     6,     7,    39,     9,
      38,    11,    12,    13,    14,    15,    16,    17,     3,     4,
       5,     6,     7,    38,     9,    38,    11,    12,    13,    14,
      15,    16,    17,    33,    34,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    28,    33,    34,
      35,    36,     3,     4,     5,     6,     7,    -1,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,     3,     4,     5,
       6,     7,    -1,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,    33,    34,    35,
      11,    12,    13,    14,    15,    16,    17,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    33,    -1,    35,    38,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    -1,    -1,    -1,    38,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  parser::yystos_[] =
  {
         0,     3,     4,     5,     6,     7,     9,    11,    12,    13,
      14,    15,    16,    17,    33,    34,    35,    41,    42,    43,
      45,    46,    47,    49,    50,    51,    52,    53,    19,    35,
      52,    34,    37,    37,     4,    51,    54,     4,    37,    37,
      37,    37,    37,     4,    51,    53,    36,    42,    44,    48,
      51,     0,    42,    34,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    47,    53,    36,
      51,    34,    53,    53,    19,    28,    29,    30,    31,    32,
      19,    52,    52,    52,    52,     3,    36,    42,    36,    39,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    38,    38,     4,    54,    54,    54,    54,    54,
       4,    39,    39,    39,    39,    39,    51,    42,    42,    52,
      52,    52,    52,    52,     8,    38,    38,    38,    38,    38,
      42
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
      42,    43,    43,    44,    44,    45,    45,    46,    47,    47,
      48,    48,    49,    49,    49,    49,    49,    50,    50,    50,
      50,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    54,    54,    54,    54,    54,
      54
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  parser::yyr2_[] =
  {
         0,     2,     1,     2,     2,     1,     1,     1,     2,     3,
       1,     2,     3,     1,     2,     5,     7,     5,     2,     3,
       1,     3,     3,     4,     4,     4,     3,     6,     6,     6,
       6,     6,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     3,     2,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     1,     3,     2,     3,     3,
       3
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
       5,    52,    34,    -1,    43,    -1,    35,    36,    -1,    35,
      44,    36,    -1,    42,    -1,    44,    42,    -1,     7,    37,
      53,    38,    42,    -1,     7,    37,    53,    38,    42,     8,
      42,    -1,     9,    37,    53,    38,    42,    -1,    35,    36,
      -1,    35,    48,    36,    -1,    51,    -1,    48,    39,    51,
      -1,     4,    19,    47,    -1,    11,     4,    19,     4,    -1,
      11,     4,    19,    54,    -1,    12,     4,    19,     4,    -1,
       4,    19,    53,    -1,    13,    37,    52,    39,    52,    38,
      -1,    14,    37,    52,    39,    52,    38,    -1,    15,    37,
      52,    39,    52,    38,    -1,    16,    37,    52,    39,    52,
      38,    -1,    17,    37,     3,    39,    52,    38,    -1,     3,
      -1,     4,    -1,    51,    -1,    47,    -1,    49,    -1,    53,
      -1,    50,    -1,    11,    54,    -1,    51,    -1,    53,    30,
      53,    -1,    53,    28,    -1,    53,    29,    53,    -1,    53,
      31,    53,    -1,    53,    32,    53,    -1,    53,    21,    53,
      -1,    53,    20,    53,    -1,    33,    53,    -1,    53,    24,
      53,    -1,    53,    26,    53,    -1,    53,    27,    53,    -1,
      53,    25,    53,    -1,    53,    23,    53,    -1,    53,    22,
      53,    -1,    51,    -1,    54,    30,    54,    -1,    54,    28,
      -1,    54,    29,    54,    -1,    54,    31,    54,    -1,    54,
      32,    54,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  parser::yyprhs_[] =
  {
         0,     0,     3,     5,     8,    11,    13,    15,    17,    20,
      24,    26,    29,    33,    35,    38,    44,    52,    58,    61,
      65,    67,    71,    75,    80,    85,    90,    94,   101,   108,
     115,   122,   129,   131,   133,   135,   137,   139,   141,   143,
     146,   148,   152,   155,   159,   163,   167,   171,   175,   178,
     182,   186,   190,   194,   198,   202,   204,   208,   211,   215,
     219
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  parser::yyrline_[] =
  {
         0,    33,    33,    36,    43,    46,    47,    48,    49,    50,
      51,    55,    56,    61,    64,    70,    74,    81,    87,    88,
      93,    96,   102,   107,   111,   115,   119,   126,   130,   134,
     138,   142,   153,   154,   157,   158,   159,   160,   161,   162,
     165,   166,   170,   173,   177,   181,   185,   188,   191,   194,
     197,   200,   203,   206,   209,   215,   216,   220,   223,   227,
     231
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
  const int parser::yylast_ = 299;
  const int parser::yynnts_ = 15;
  const int parser::yyempty_ = -2;
  const int parser::yyfinal_ = 51;
  const int parser::yyterror_ = 1;
  const int parser::yyerrcode_ = 256;
  const int parser::yyntokens_ = 40;

  const unsigned int parser::yyuser_token_number_max_ = 287;
  const parser::token_number_type parser::yyundef_token_ = 2;


} // yy
/* Line 1141 of lalr1.cc  */
#line 1362 "grammar.tab.cpp"
/* Line 1142 of lalr1.cc  */
#line 240 "grammar.y"



namespace yy{
	void parser::error(const location_type& loc, const std::string& msg){
		std::cerr << "error at " << loc << ": " << msg << std::endl;
	}
}