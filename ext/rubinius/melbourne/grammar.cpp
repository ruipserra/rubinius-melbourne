/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     keyword_class = 258,
     keyword_module = 259,
     keyword_def = 260,
     keyword_undef = 261,
     keyword_begin = 262,
     keyword_rescue = 263,
     keyword_ensure = 264,
     keyword_end = 265,
     keyword_if = 266,
     keyword_unless = 267,
     keyword_then = 268,
     keyword_elsif = 269,
     keyword_else = 270,
     keyword_case = 271,
     keyword_when = 272,
     keyword_while = 273,
     keyword_until = 274,
     keyword_for = 275,
     keyword_break = 276,
     keyword_next = 277,
     keyword_redo = 278,
     keyword_retry = 279,
     keyword_in = 280,
     keyword_do = 281,
     keyword_do_cond = 282,
     keyword_do_block = 283,
     keyword_do_LAMBDA = 284,
     keyword_return = 285,
     keyword_yield = 286,
     keyword_super = 287,
     keyword_self = 288,
     keyword_nil = 289,
     keyword_true = 290,
     keyword_false = 291,
     keyword_and = 292,
     keyword_or = 293,
     keyword_not = 294,
     modifier_if = 295,
     modifier_unless = 296,
     modifier_while = 297,
     modifier_until = 298,
     modifier_rescue = 299,
     keyword_alias = 300,
     keyword_defined = 301,
     keyword_BEGIN = 302,
     keyword_END = 303,
     keyword__LINE__ = 304,
     keyword__FILE__ = 305,
     keyword__ENCODING__ = 306,
     tIDENTIFIER = 307,
     tFID = 308,
     tGVAR = 309,
     tIVAR = 310,
     tCONSTANT = 311,
     tCVAR = 312,
     tLABEL = 313,
     tINTEGER = 314,
     tFLOAT = 315,
     tSTRING_CONTENT = 316,
     tCHAR = 317,
     tNTH_REF = 318,
     tBACK_REF = 319,
     tREGEXP_END = 320,
     tUPLUS = 321,
     tUMINUS = 322,
     tPOW = 323,
     tCMP = 324,
     tEQ = 325,
     tEQQ = 326,
     tNEQ = 327,
     tGEQ = 328,
     tLEQ = 329,
     tANDOP = 330,
     tOROP = 331,
     tMATCH = 332,
     tNMATCH = 333,
     tDOT2 = 334,
     tDOT3 = 335,
     tAREF = 336,
     tASET = 337,
     tLSHFT = 338,
     tRSHFT = 339,
     tCOLON2 = 340,
     tCOLON3 = 341,
     tOP_ASGN = 342,
     tASSOC = 343,
     tLPAREN = 344,
     tLPAREN_ARG = 345,
     tRPAREN = 346,
     tLBRACK = 347,
     tLBRACE = 348,
     tLBRACE_ARG = 349,
     tSTAR = 350,
     tDSTAR = 351,
     tAMPER = 352,
     tLAMBDA = 353,
     tSYMBEG = 354,
     tSTRING_BEG = 355,
     tXSTRING_BEG = 356,
     tREGEXP_BEG = 357,
     tWORDS_BEG = 358,
     tQWORDS_BEG = 359,
     tSYMBOLS_BEG = 360,
     tQSYMBOLS_BEG = 361,
     tSTRING_DBEG = 362,
     tSTRING_DVAR = 363,
     tSTRING_END = 364,
     tLAMBEG = 365,
     tLOWEST = 366,
     tUMINUS_NUM = 367,
     tLAST_TOKEN = 368
   };
#endif
/* Tokens.  */
#define keyword_class 258
#define keyword_module 259
#define keyword_def 260
#define keyword_undef 261
#define keyword_begin 262
#define keyword_rescue 263
#define keyword_ensure 264
#define keyword_end 265
#define keyword_if 266
#define keyword_unless 267
#define keyword_then 268
#define keyword_elsif 269
#define keyword_else 270
#define keyword_case 271
#define keyword_when 272
#define keyword_while 273
#define keyword_until 274
#define keyword_for 275
#define keyword_break 276
#define keyword_next 277
#define keyword_redo 278
#define keyword_retry 279
#define keyword_in 280
#define keyword_do 281
#define keyword_do_cond 282
#define keyword_do_block 283
#define keyword_do_LAMBDA 284
#define keyword_return 285
#define keyword_yield 286
#define keyword_super 287
#define keyword_self 288
#define keyword_nil 289
#define keyword_true 290
#define keyword_false 291
#define keyword_and 292
#define keyword_or 293
#define keyword_not 294
#define modifier_if 295
#define modifier_unless 296
#define modifier_while 297
#define modifier_until 298
#define modifier_rescue 299
#define keyword_alias 300
#define keyword_defined 301
#define keyword_BEGIN 302
#define keyword_END 303
#define keyword__LINE__ 304
#define keyword__FILE__ 305
#define keyword__ENCODING__ 306
#define tIDENTIFIER 307
#define tFID 308
#define tGVAR 309
#define tIVAR 310
#define tCONSTANT 311
#define tCVAR 312
#define tLABEL 313
#define tINTEGER 314
#define tFLOAT 315
#define tSTRING_CONTENT 316
#define tCHAR 317
#define tNTH_REF 318
#define tBACK_REF 319
#define tREGEXP_END 320
#define tUPLUS 321
#define tUMINUS 322
#define tPOW 323
#define tCMP 324
#define tEQ 325
#define tEQQ 326
#define tNEQ 327
#define tGEQ 328
#define tLEQ 329
#define tANDOP 330
#define tOROP 331
#define tMATCH 332
#define tNMATCH 333
#define tDOT2 334
#define tDOT3 335
#define tAREF 336
#define tASET 337
#define tLSHFT 338
#define tRSHFT 339
#define tCOLON2 340
#define tCOLON3 341
#define tOP_ASGN 342
#define tASSOC 343
#define tLPAREN 344
#define tLPAREN_ARG 345
#define tRPAREN 346
#define tLBRACK 347
#define tLBRACE 348
#define tLBRACE_ARG 349
#define tSTAR 350
#define tDSTAR 351
#define tAMPER 352
#define tLAMBDA 353
#define tSYMBEG 354
#define tSTRING_BEG 355
#define tXSTRING_BEG 356
#define tREGEXP_BEG 357
#define tWORDS_BEG 358
#define tQWORDS_BEG 359
#define tSYMBOLS_BEG 360
#define tQSYMBOLS_BEG 361
#define tSTRING_DBEG 362
#define tSTRING_DVAR 363
#define tSTRING_END 364
#define tLAMBEG 365
#define tLOWEST 366
#define tUMINUS_NUM 367
#define tLAST_TOKEN 368




/* Copy the first part of user declarations.  */
#line 13 "grammar.y"


#define YYDEBUG 1
#define YYERROR_VERBOSE 1

#include "namespace.h"
#include "melbourne.hpp"
#include "grammar.hpp"
#include "parser_state.hpp"
#include "visitor.hpp"
#include "symbols.hpp"

namespace MELBOURNE {

#undef TRUE
#undef FALSE

#define TRUE  true
#define FALSE false

#define numberof(array) (int)(sizeof(array) / sizeof((array)[0]))

static void parser_prepare(rb_parser_state*);
static int parser_yyerror(rb_parser_state*, const char *);
#define yy_error(msg)   parser_yyerror(parser_state, msg)
#define yyerror         parser_yyerror


#define is_notop_id(id) ((id)>tLAST_TOKEN)
#define is_local_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_LOCAL)
#define is_global_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_GLOBAL)
#define is_instance_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_INSTANCE)
#define is_attrset_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_ATTRSET)
#define is_const_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CONST)
#define is_class_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_CLASS)
#define is_junk_id(id) (is_notop_id(id)&&((id)&ID_SCOPE_MASK)==ID_JUNK)

#define is_asgn_or_id(id) ((is_notop_id(id)) && \
        (((id)&ID_SCOPE_MASK) == ID_GLOBAL || \
         ((id)&ID_SCOPE_MASK) == ID_INSTANCE || \
         ((id)&ID_SCOPE_MASK) == ID_CLASS))

static int yylex(void*, void *);

#define BITSTACK_PUSH(stack, n) (stack = (stack<<1)|((n)&1))
#define BITSTACK_POP(stack)     (stack >>= 1)
#define BITSTACK_LEXPOP(stack)  (stack = (stack >> 1) | (stack & 1))
#define BITSTACK_SET_P(stack)   (stack&1)

#define COND_PUSH(n)    BITSTACK_PUSH(cond_stack, n)
#define COND_POP()      BITSTACK_POP(cond_stack)
#define COND_LEXPOP()   BITSTACK_LEXPOP(cond_stack)
#define COND_P()        BITSTACK_SET_P(cond_stack)

#define CMDARG_PUSH(n)  BITSTACK_PUSH(cmdarg_stack, n)
#define CMDARG_POP()    BITSTACK_POP(cmdarg_stack)
#define CMDARG_LEXPOP() BITSTACK_LEXPOP(cmdarg_stack)
#define CMDARG_P()      BITSTACK_SET_P(cmdarg_stack)

static void parser_token_info_push(rb_parser_state*, const char *);
static void parser_token_info_pop(rb_parser_state*, const char *);
#define token_info_push(token)  (RTEST(ruby_verbose) \
                                 ? parser_token_info_push(parser_state, token) \
                                 : (void)0)
#define token_info_pop(token)   (RTEST(ruby_verbose) \
                                 ? parser_token_info_pop(parser_state, token) \
                                 : (void)0)

static NODE *parser_cond(rb_parser_state*, NODE*);
static NODE *parser_logop(rb_parser_state*, enum node_type, NODE*, NODE*);

static NODE *parser_newline_node(rb_parser_state*,NODE*);
static void fixpos(NODE*,NODE*);

static int parser_value_expr(rb_parser_state*, NODE*);
static void parser_void_expr0(rb_parser_state*, NODE*);
static NODE* remove_begin(NODE*);
static void parser_void_stmts(rb_parser_state*, NODE*);

static void parser_block_dup_check(rb_parser_state*, NODE*, NODE*);
static NODE *parser_block_append(rb_parser_state*, NODE*, NODE*);
static NODE *parser_list_append(rb_parser_state*, NODE*, NODE*);
static NODE *list_concat(NODE*,NODE*);
static NODE *parser_arg_append(rb_parser_state*, NODE*, NODE*);
static NODE *parser_arg_concat(rb_parser_state*, NODE*, NODE*);
static NODE *parser_literal_concat(rb_parser_state*, NODE*, NODE*);
static int parser_literal_concat0(rb_parser_state*, VALUE, VALUE);
static NODE *parser_new_evstr(rb_parser_state*, NODE*);
static NODE *parser_evstr2dstr(rb_parser_state*, NODE*);
static NODE *parser_call_bin_op(rb_parser_state*, NODE*, ID, NODE*);
static NODE *parser_call_uni_op(rb_parser_state*, NODE*, ID);
static NODE *parser_new_args(rb_parser_state*, NODE*, NODE*, ID, NODE*, NODE*);
static NODE *parser_new_args_tail(rb_parser_state*, NODE*, ID, ID);
static NODE *splat_array(NODE*);

static NODE *parser_negate_lit(rb_parser_state*, NODE*);
static NODE *parser_ret_args(rb_parser_state*, NODE*);
static NODE *arg_blk_pass(NODE*,NODE*);
static NODE *parser_new_yield(rb_parser_state*, NODE*);

static NODE *parser_gettable(rb_parser_state*,ID);
#define gettable(i) parser_gettable((rb_parser_state*)parser_state, i)
static NODE *parser_assignable(rb_parser_state*, ID, NODE*);
static ID parser_formal_argument(rb_parser_state*, ID);
static ID parser_shadowing_lvar(rb_parser_state*, ID);
static bool parser_lvar_defined(rb_parser_state*, ID);
static void parser_new_bv(rb_parser_state*, ID);
static const struct vtable* parser_bv_push(rb_parser_state*);
static void parser_bv_pop(rb_parser_state*, const struct vtable*);
static bool parser_in_block(rb_parser_state*);
static bool parser_bv_defined(rb_parser_state*, ID);
static int parser_bv_var(rb_parser_state*, ID);
static NODE *parser_aryset(rb_parser_state*, NODE*, NODE*);
static NODE *parser_attrset(rb_parser_state*, NODE*, ID);
static void rb_parser_backref_error(rb_parser_state*, NODE*);
static NODE *parser_node_assign(rb_parser_state*, NODE*, NODE*);

static NODE *parser_match_op(rb_parser_state*, NODE*, NODE*);
static int parser_arg_var(rb_parser_state*, ID);
static int parser_local_var(rb_parser_state*, ID);
static ID parser_internal_id(rb_parser_state*);

static void parser_local_push(rb_parser_state*, int cnt);
static void parser_local_pop(rb_parser_state*);
static bool parser_local_id(rb_parser_state*, ID);
static ID* parser_local_tbl(rb_parser_state*);
static ID convert_op(ID id);

rb_parser_state *parser_alloc_state() {
  rb_parser_state *parser_state = (rb_parser_state*)calloc(1, sizeof(rb_parser_state));

  lex_pbeg = 0;
  lex_p = 0;
  lex_pend = 0;
  parse_error = false;

  lex_io_buf = 0;
  lex_io_index = 0;
  lex_io_total = 0;
  lex_io_count = 0;

  eofp = false;
  command_start = true;
  class_nest = 0;
  in_single = 0;
  in_def = 0;
  compile_for_eval = 0;
  cur_mid = 0;
  tokenbuf = NULL;
  tokidx = 0;
  toksiz = 0;
  locals_table = 0;
  memory_cur = NULL;
  memory_last_addr = NULL;
  current_pool = 0;
  pool_size = 0;
  memory_size = 204800;
  memory_pools = NULL;
  emit_warnings = 0;
  verbose = RTEST(ruby_verbose);
  start_lines = new std::list<StartPosition>;

  processor = 0;
  references = rb_ary_new();

  parser_state->enc = parser_utf8_encoding();

  return parser_state;
}

void *pt_allocate(rb_parser_state *parser_state, int size) {
  void *cur;

  if(!memory_cur || ((memory_cur + size) >= memory_last_addr)) {
    if(memory_cur) current_pool++;

    if(current_pool == pool_size) {
      pool_size += 10;
      if(memory_pools) {
        memory_pools = (void**)realloc(memory_pools, sizeof(void*) * pool_size);
      } else {
        memory_pools = (void**)malloc(sizeof(void*) * pool_size);
      }
    }
    memory_pools[current_pool] = malloc(memory_size);
    memory_cur = (char*)memory_pools[current_pool];
    memory_last_addr = memory_cur + memory_size - 1;
  }

  cur = (void*)memory_cur;
  memory_cur = memory_cur + size;

  return cur;
}

void pt_free(rb_parser_state *parser_state) {
  int i;

  free(tokenbuf);
  local_vars_free(locals_table);

  delete start_lines;

  if(lex_io_buf) free(lex_io_buf);

  if(!memory_pools) return;

  for(i = 0; i <= current_pool; i++) {
    free(memory_pools[i]);
  }
  free(memory_pools);
}

#define SHOW_PARSER_WARNS 0

static void rb_compile_warn(const char *file, int line, const char *fmt, ...);
static void rb_compile_warning(const char *file, int line, const char *fmt, ...);

static int rb_compile_error(rb_parser_state* parser_state, const char *fmt, ...) {
  va_list ar;
  char msg[256];
  int count;

  va_start(ar, fmt);
  count = vsnprintf(msg, 256, fmt, ar);
  va_end(ar);

  yy_error(msg);

  return count;
}

static int _debug_print(const char *fmt, ...) {
#if SHOW_PARSER_WARNS
  va_list ar;
  int i;

  va_start(ar, fmt);
  i = vprintf(fmt, ar);
  va_end(ar);
  return i;
#else
  return 0;
#endif
}

#define rb_warn _debug_print
#define rb_warning _debug_print

void push_start_line(rb_parser_state* parser_state, int line, const char* which) {
  start_lines->push_back(StartPosition(line, which));
}

#define PUSH_LINE(which) push_start_line((rb_parser_state*)parser_state, sourceline, which)

void pop_start_line(rb_parser_state* parser_state) {
  start_lines->pop_back();
}

#define POP_LINE() pop_start_line((rb_parser_state*)parser_state)

static ID rb_id_attrset(ID);

static int scan_oct(const char *start, size_t len, size_t *retlen);
static int scan_hex(const char *start, size_t len, size_t *retlen);

#define logop(t, a, b)            parser_logop(parser_state, t, a, b)
#define cond(n)                   parser_cond(parser_state, n)
#define newline_node(n)           parser_newline_node(parser_state, n)
#define void_stmts(n)             parser_void_stmts(parser_state, n)
#define block_dup_check(a, b)     parser_block_dup_check(parser_state, a, b)
#define block_append(a, b)        parser_block_append(parser_state, a, b)
#define arg_append(a, b)          parser_arg_append(parser_state, a, b)
#define arg_concat(a, b)          parser_arg_concat(parser_state, a, b)
#define list_append(l, i)         parser_list_append(parser_state, l, i)
#define node_assign(a, b)         parser_node_assign(parser_state, a, b)
#define call_bin_op(a, s, b)      parser_call_bin_op(parser_state, a, s, b)
#define call_uni_op(n, s)         parser_call_uni_op(parser_state, n, s)
#define new_args(f,o,r,p,t)       parser_new_args(parser_state, f, o, r, p, t)
#define new_args_tail(k,kr,b)     parser_new_args_tail(parser_state, k, kr, b)
#define negate_lit(n)             parser_negate_lit(parser_state, n)
#define ret_args(n)               parser_ret_args(parser_state, n)
#define assignable(a, b)          parser_assignable(parser_state, a, b)
#define formal_argument(n)        parser_formal_argument(parser_state, n)
#define lvar_defined(n)           parser_lvar_defined(parser_state, n)
#define shadowing_lvar(n)         parser_shadowing_lvar(parser_state, n)
#define new_bv(n)                 parser_new_bv(parser_state, n)
#define bv_push()                 parser_bv_push(parser_state)
#define bv_pop(l)                 parser_bv_pop(parser_state, l)
#define in_block()                parser_in_block(parser_state)
#define bv_defined(n)             parser_bv_defined(parser_state, n)
#define bv_var(n)                 parser_bv_var(parser_state, n)
#define aryset(a, b)              parser_aryset(parser_state, a, b)
#define attrset(a, b)             parser_attrset(parser_state, a, b)
#define match_op(a, b)            parser_match_op(parser_state, a, b)
#define new_yield(n)              parser_new_yield(parser_state, n)
#define evstr2dstr(n)             parser_evstr2dstr(parser_state, n)
#define literal_concat(a, b)      parser_literal_concat(parser_state, a, b)
#define literal_concat0(a, b)     parser_literal_concat0(parser_state, a, b)
#define new_evstr(n)              parser_new_evstr(parser_state, n)

#define value_expr(n)             parser_value_expr(parser_state, n)
#define void_expr0(n)             parser_void_expr0(parser_state, n)
#define void_expr(n)              void_expr0(((n) = remove_begin(n)))

#define local_tbl()               parser_local_tbl(parser_state)
#define arg_var(a)                parser_arg_var(parser_state, a)
#define local_var(a)              parser_local_var(parser_state, a)
#define internal_id()             parser_internal_id(parser_state)

#define compile_error(s)          rb_compile_error(parser_state, s)
#define rb_backref_error(s)       rb_parser_backref_error(parser_state, s)

#define get_id(id)                (id)
#define get_value(value)          (value)

#define local_push(cnt)           parser_local_push(parser_state, cnt)
#define local_pop()               parser_local_pop(parser_state)
#define local_id(i)               parser_local_id(parser_state, i)

#define rb_warn0(fmt)             rb_compile_warn(sourcefile, sourceline, fmt)
#define rb_warnI(fmt,a)           rb_compile_warn(sourcefile, sourceline, fmt, a)
#define rb_warnS(fmt,a)           rb_compile_warn(sourcefile, sourceline, fmt, a)
#define rb_warning0(fmt)          rb_compile_warning(sourcefile, sourceline, fmt)
#define rb_warningS(fmt,a)        rb_compile_warning(sourcefile, sourceline, fmt, a)


#ifndef RE_OPTION_IGNORECASE
#define RE_OPTION_IGNORECASE         (1)
#endif

#ifndef RE_OPTION_EXTENDED
#define RE_OPTION_EXTENDED           (2)
#endif

#ifndef RE_OPTION_MULTILINE
#define RE_OPTION_MULTILINE          (4)
#endif

/* Must match up with options/kcode definitions in regexp.rb and regexp.cpp */
#define RE_OPTION_DONT_CAPTURE_GROUP (128)
#define RE_OPTION_CAPTURE_GROUP      (256)
#define RE_KCODE_NONE                (1 << 9)
#define RE_KCODE_EUC                 (2 << 9)
#define RE_KCODE_SJIS                (3 << 9)
#define RE_KCODE_UTF8                (4 << 9)
#define RE_OPTION_ONCE               (8192)

#define NODE_STRTERM NODE_ZARRAY        /* nothing to gc */
#define NODE_HEREDOC NODE_ARRAY         /* 1, 3 to gc */
#define SIGN_EXTEND(x,n) (((1<<((n)-1))^((x)&~(~0<<(n))))-(1<<((n)-1)))
#define nd_func u1.id
#if SIZEOF_SHORT != 2
#define nd_term(node) SIGN_EXTEND((node)->u2.id, (CHAR_BIT*2))
#else
#define nd_term(node) ((signed short)(node)->u2.id)
#endif
#define nd_paren(node) (char)((node)->u2.id >> (CHAR_BIT*2))
#define nd_nest u3.cnt

#define UTF8_ENC()            (parser_state->utf8 ? parser_state->utf8 : \
                                (parser_state->utf8 = parser_utf8_encoding()))
#define STR_NEW(p,n)          parser_enc_str_new((p), (n), parser_state->enc)
#define STR_NEW0()            parser_enc_str_new(0, 0, parser_state->enc)
#define STR_NEW2(p)           parser_enc_str_new((p), strlen(p), parser_state->enc)
#define STR_NEW3(p,n,e,func)  parser_str_new(parser_state, (p), (n), (e), \
                                            (func), parser_state->enc)
#define ENC_SINGLE(cr)        ((cr)==ENC_CODERANGE_7BIT)
#define TOK_INTERN(mb)        parser_intern3(tok(), toklen(), parser_state->enc)

#define NEW_BLOCK_VAR(b, v)   NEW_NODE(NODE_BLOCK_PASS, 0, b, v)
#define NEW_REQ_KW            NEW_LIT(ID2SYM(parser_intern("*")))

/* Older versions of Yacc set YYMAXDEPTH to a very low value by default (150,
   for instance).  This is too low for Ruby to parse some files, such as
   date/format.rb, therefore bump the value up to at least Bison's default. */
#ifdef OLD_YACC
#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif
#endif



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 401 "grammar.y"
{
    VALUE val;
    NODE *node;
    ID id;
    int num;
    const struct vtable* vars;
}
/* Line 193 of yacc.c.  */
#line 714 "grammar.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 727 "grammar.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10790

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  189
/* YYNRULES -- Number of rules.  */
#define YYNRULES  608
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1037

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   368

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     140,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,   139,   126,     2,     2,     2,   124,   119,     2,
     135,   136,   122,   120,   133,   121,   132,   123,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   114,   138,
     116,   112,   115,   113,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   131,     2,   137,   118,     2,   134,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   129,   117,   130,   127,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   125,   128
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    10,    12,    14,    18,    21,
      23,    24,    30,    35,    38,    40,    42,    46,    49,    50,
      55,    59,    63,    67,    70,    74,    78,    82,    86,    90,
      95,    97,   101,   105,   112,   118,   124,   130,   136,   140,
     144,   148,   152,   154,   158,   162,   164,   168,   172,   176,
     179,   181,   183,   185,   187,   189,   194,   199,   200,   206,
     209,   213,   218,   224,   229,   235,   238,   241,   244,   247,
     250,   252,   256,   258,   262,   264,   267,   271,   277,   280,
     285,   288,   293,   295,   299,   301,   305,   308,   312,   314,
     318,   320,   322,   327,   331,   335,   339,   343,   346,   348,
     350,   352,   357,   361,   365,   369,   373,   376,   378,   380,
     382,   385,   387,   391,   393,   395,   397,   399,   401,   403,
     405,   407,   409,   411,   412,   417,   419,   421,   423,   425,
     427,   429,   431,   433,   435,   437,   439,   441,   443,   445,
     447,   449,   451,   453,   455,   457,   459,   461,   463,   465,
     467,   469,   471,   473,   475,   477,   479,   481,   483,   485,
     487,   489,   491,   493,   495,   497,   499,   501,   503,   505,
     507,   509,   511,   513,   515,   517,   519,   521,   523,   525,
     527,   529,   531,   533,   535,   537,   539,   541,   543,   545,
     547,   549,   551,   553,   555,   557,   559,   563,   569,   573,
     579,   586,   592,   598,   604,   610,   615,   619,   623,   627,
     631,   635,   639,   643,   647,   651,   656,   661,   664,   667,
     671,   675,   679,   683,   687,   691,   695,   699,   703,   707,
     711,   715,   719,   722,   725,   729,   733,   737,   741,   742,
     747,   754,   756,   758,   760,   763,   768,   771,   775,   777,
     779,   781,   783,   785,   788,   791,   796,   798,   799,   802,
     805,   808,   810,   812,   814,   817,   821,   826,   830,   835,
     838,   840,   842,   844,   846,   848,   850,   852,   854,   856,
     858,   860,   861,   866,   867,   872,   876,   880,   883,   887,
     891,   893,   898,   902,   904,   905,   912,   917,   921,   924,
     926,   929,   932,   939,   946,   947,   948,   956,   957,   958,
     966,   972,   977,   978,   979,   989,   990,   997,   998,   999,
    1008,  1009,  1015,  1016,  1023,  1024,  1025,  1035,  1037,  1039,
    1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1074,  1076,  1078,  1080,
    1086,  1088,  1091,  1093,  1095,  1097,  1101,  1103,  1107,  1109,
    1114,  1121,  1125,  1131,  1134,  1139,  1141,  1145,  1150,  1153,
    1156,  1158,  1161,  1162,  1169,  1178,  1183,  1190,  1195,  1198,
    1205,  1208,  1213,  1220,  1223,  1228,  1231,  1236,  1238,  1240,
    1242,  1246,  1248,  1253,  1255,  1258,  1260,  1264,  1266,  1268,
    1269,  1270,  1275,  1280,  1282,  1286,  1290,  1291,  1297,  1300,
    1305,  1310,  1313,  1318,  1323,  1327,  1331,  1335,  1338,  1340,
    1345,  1346,  1352,  1353,  1359,  1365,  1367,  1369,  1376,  1378,
    1380,  1382,  1384,  1387,  1389,  1392,  1394,  1396,  1398,  1400,
    1402,  1404,  1406,  1409,  1413,  1417,  1421,  1425,  1429,  1430,
    1434,  1436,  1439,  1443,  1447,  1448,  1452,  1456,  1460,  1464,
    1468,  1469,  1473,  1474,  1478,  1479,  1482,  1483,  1486,  1487,
    1490,  1492,  1493,  1497,  1498,  1499,  1505,  1507,  1509,  1511,
    1513,  1516,  1518,  1520,  1522,  1524,  1528,  1530,  1532,  1535,
    1538,  1540,  1542,  1544,  1546,  1548,  1550,  1552,  1554,  1556,
    1558,  1560,  1562,  1564,  1566,  1568,  1570,  1572,  1574,  1576,
    1577,  1582,  1585,  1589,  1592,  1597,  1600,  1603,  1605,  1608,
    1609,  1616,  1625,  1630,  1637,  1642,  1649,  1652,  1657,  1664,
    1667,  1672,  1675,  1680,  1682,  1683,  1685,  1687,  1689,  1691,
    1693,  1695,  1697,  1701,  1703,  1707,  1709,  1712,  1714,  1717,
    1719,  1721,  1725,  1727,  1731,  1733,  1735,  1738,  1740,  1744,
    1748,  1750,  1754,  1756,  1760,  1762,  1764,  1767,  1769,  1771,
    1773,  1776,  1779,  1781,  1783,  1784,  1789,  1791,  1794,  1796,
    1800,  1804,  1807,  1810,  1812,  1814,  1816,  1818,  1820,  1822,
    1824,  1826,  1828,  1830,  1832,  1834,  1835,  1837,  1838,  1840,
    1843,  1846,  1847,  1849,  1851,  1853,  1855,  1857,  1860
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,    -1,   143,   144,    -1,   145,   322,    -1,
     329,    -1,   146,    -1,   145,   328,   146,    -1,     1,   146,
      -1,   151,    -1,    -1,    47,   147,   129,   144,   130,    -1,
     149,   251,   224,   254,    -1,   150,   322,    -1,   329,    -1,
     151,    -1,   150,   328,   151,    -1,     1,   151,    -1,    -1,
      45,   173,   152,   173,    -1,    45,    54,    54,    -1,    45,
      54,    64,    -1,    45,    54,    63,    -1,     6,   174,    -1,
     151,    40,   155,    -1,   151,    41,   155,    -1,   151,    42,
     155,    -1,   151,    43,   155,    -1,   151,    44,   151,    -1,
      48,   129,   149,   130,    -1,   153,    -1,   161,   112,   156,
      -1,   285,    87,   156,    -1,   209,   131,   184,   325,    87,
     156,    -1,   209,   132,    52,    87,   156,    -1,   209,   132,
      56,    87,   156,    -1,   209,    85,    56,    87,   156,    -1,
     209,    85,    52,    87,   156,    -1,   286,    87,   156,    -1,
     168,   112,   191,    -1,   161,   112,   180,    -1,   161,   112,
     191,    -1,   154,    -1,   168,   112,   156,    -1,   168,   112,
     153,    -1,   156,    -1,   154,    37,   154,    -1,   154,    38,
     154,    -1,    39,   323,   154,    -1,   126,   156,    -1,   178,
      -1,   154,    -1,   160,    -1,   157,    -1,   244,    -1,   244,
     132,   319,   186,    -1,   244,    85,   319,   186,    -1,    -1,
      94,   159,   232,   149,   130,    -1,   318,   186,    -1,   318,
     186,   158,    -1,   209,   132,   319,   186,    -1,   209,   132,
     319,   186,   158,    -1,   209,    85,   319,   186,    -1,   209,
      85,   319,   186,   158,    -1,    32,   186,    -1,    31,   186,
      -1,    30,   185,    -1,    21,   185,    -1,    22,   185,    -1,
     163,    -1,    89,   162,   324,    -1,   163,    -1,    89,   162,
     324,    -1,   165,    -1,   165,   164,    -1,   165,    95,   167,
      -1,   165,    95,   167,   133,   166,    -1,   165,    95,    -1,
     165,    95,   133,   166,    -1,    95,   167,    -1,    95,   167,
     133,   166,    -1,    95,    -1,    95,   133,   166,    -1,   167,
      -1,    89,   162,   324,    -1,   164,   133,    -1,   165,   164,
     133,    -1,   164,    -1,   166,   133,   164,    -1,   282,    -1,
     283,    -1,   209,   131,   184,   325,    -1,   209,   132,    52,
      -1,   209,    85,    52,    -1,   209,   132,    56,    -1,   209,
      85,    56,    -1,    86,    56,    -1,   286,    -1,   282,    -1,
     283,    -1,   209,   131,   184,   325,    -1,   209,   132,    52,
      -1,   209,    85,    52,    -1,   209,   132,    56,    -1,   209,
      85,    56,    -1,    86,    56,    -1,   286,    -1,    52,    -1,
      56,    -1,    86,   169,    -1,   169,    -1,   209,    85,   169,
      -1,    52,    -1,    56,    -1,    53,    -1,   176,    -1,   177,
      -1,   171,    -1,   278,    -1,   172,    -1,   280,    -1,   173,
      -1,    -1,   174,   133,   175,   173,    -1,   117,    -1,   118,
      -1,   119,    -1,    69,    -1,    70,    -1,    71,    -1,    77,
      -1,    78,    -1,   115,    -1,    73,    -1,   116,    -1,    74,
      -1,    72,    -1,    83,    -1,    84,    -1,   120,    -1,   121,
      -1,   122,    -1,    95,    -1,   123,    -1,   124,    -1,    68,
      -1,    96,    -1,   126,    -1,   127,    -1,    66,    -1,    67,
      -1,    81,    -1,    82,    -1,   134,    -1,    49,    -1,    50,
      -1,    51,    -1,    47,    -1,    48,    -1,    45,    -1,    37,
      -1,     7,    -1,    21,    -1,    16,    -1,     3,    -1,     5,
      -1,    46,    -1,    26,    -1,    15,    -1,    14,    -1,    10,
      -1,     9,    -1,    36,    -1,    20,    -1,    25,    -1,     4,
      -1,    22,    -1,    34,    -1,    39,    -1,    38,    -1,    23,
      -1,     8,    -1,    24,    -1,    30,    -1,    33,    -1,    32,
      -1,    13,    -1,    35,    -1,     6,    -1,    17,    -1,    31,
      -1,    11,    -1,    12,    -1,    18,    -1,    19,    -1,   168,
     112,   178,    -1,   168,   112,   178,    44,   178,    -1,   285,
      87,   178,    -1,   285,    87,   178,    44,   178,    -1,   209,
     131,   184,   325,    87,   178,    -1,   209,   132,    52,    87,
     178,    -1,   209,   132,    56,    87,   178,    -1,   209,    85,
      52,    87,   178,    -1,   209,    85,    56,    87,   178,    -1,
      86,    56,    87,   178,    -1,   286,    87,   178,    -1,   178,
      79,   178,    -1,   178,    80,   178,    -1,   178,   120,   178,
      -1,   178,   121,   178,    -1,   178,   122,   178,    -1,   178,
     123,   178,    -1,   178,   124,   178,    -1,   178,    68,   178,
      -1,   125,    59,    68,   178,    -1,   125,    60,    68,   178,
      -1,    66,   178,    -1,    67,   178,    -1,   178,   117,   178,
      -1,   178,   118,   178,    -1,   178,   119,   178,    -1,   178,
      69,   178,    -1,   178,   115,   178,    -1,   178,    73,   178,
      -1,   178,   116,   178,    -1,   178,    74,   178,    -1,   178,
      70,   178,    -1,   178,    71,   178,    -1,   178,    72,   178,
      -1,   178,    77,   178,    -1,   178,    78,   178,    -1,   126,
     178,    -1,   127,   178,    -1,   178,    83,   178,    -1,   178,
      84,   178,    -1,   178,    75,   178,    -1,   178,    76,   178,
      -1,    -1,    46,   323,   179,   178,    -1,   178,   113,   178,
     323,   114,   178,    -1,   192,    -1,   178,    -1,   329,    -1,
     190,   326,    -1,   190,   133,   316,   326,    -1,   316,   326,
      -1,   135,   184,   324,    -1,   329,    -1,   182,    -1,   329,
      -1,   185,    -1,   160,    -1,   190,   189,    -1,   316,   189,
      -1,   190,   133,   316,   189,    -1,   188,    -1,    -1,   187,
     185,    -1,    97,   180,    -1,   133,   188,    -1,   133,    -1,
     329,    -1,   180,    -1,    95,   180,    -1,   190,   133,   180,
      -1,   190,   133,    95,   180,    -1,   190,   133,   180,    -1,
     190,   133,    95,   180,    -1,    95,   180,    -1,   255,    -1,
     256,    -1,   259,    -1,   260,    -1,   261,    -1,   266,    -1,
     264,    -1,   267,    -1,   284,    -1,   286,    -1,    53,    -1,
      -1,   210,   193,   148,   220,    -1,    -1,    90,   154,   194,
     324,    -1,    89,   149,   136,    -1,   209,    85,    56,    -1,
      86,    56,    -1,    92,   181,   137,    -1,    93,   315,   130,
      -1,    30,    -1,    31,   135,   185,   324,    -1,    31,   135,
     324,    -1,    31,    -1,    -1,    46,   323,   135,   195,   154,
     324,    -1,    39,   135,   154,   324,    -1,    39,   135,   324,
      -1,   318,   246,    -1,   245,    -1,   245,   246,    -1,    98,
     237,    -1,   211,   155,   221,   149,   223,   220,    -1,   212,
     155,   221,   149,   224,   220,    -1,    -1,    -1,   213,   196,
     155,   222,   197,   149,   220,    -1,    -1,    -1,   214,   198,
     155,   222,   199,   149,   220,    -1,   215,   155,   322,   249,
     220,    -1,   215,   322,   249,   220,    -1,    -1,    -1,   216,
     225,    25,   200,   155,   222,   201,   149,   220,    -1,    -1,
     217,   170,   287,   202,   148,   220,    -1,    -1,    -1,   217,
      83,   154,   203,   327,   204,   148,   220,    -1,    -1,   218,
     170,   205,   148,   220,    -1,    -1,   219,   171,   206,   289,
     148,   220,    -1,    -1,    -1,   219,   313,   321,   207,   171,
     208,   289,   148,   220,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,   192,    -1,     7,    -1,    11,    -1,    12,
      -1,    18,    -1,    19,    -1,    16,    -1,    20,    -1,     3,
      -1,     4,    -1,     5,    -1,    10,    -1,   327,    -1,    13,
      -1,   327,    13,    -1,   327,    -1,    27,    -1,   224,    -1,
      14,   155,   221,   149,   223,    -1,   329,    -1,    15,   149,
      -1,   168,    -1,   161,    -1,   294,    -1,    89,   228,   324,
      -1,   226,    -1,   227,   133,   226,    -1,   227,    -1,   227,
     133,    95,   294,    -1,   227,   133,    95,   294,   133,   227,
      -1,   227,   133,    95,    -1,   227,   133,    95,   133,   227,
      -1,    95,   294,    -1,    95,   294,   133,   227,    -1,    95,
      -1,    95,   133,   227,    -1,   300,   133,   303,   312,    -1,
     300,   312,    -1,   303,   312,    -1,   311,    -1,   133,   229,
      -1,    -1,   296,   133,   306,   133,   309,   230,    -1,   296,
     133,   306,   133,   309,   133,   296,   230,    -1,   296,   133,
     306,   230,    -1,   296,   133,   306,   133,   296,   230,    -1,
     296,   133,   309,   230,    -1,   296,   133,    -1,   296,   133,
     309,   133,   296,   230,    -1,   296,   230,    -1,   306,   133,
     309,   230,    -1,   306,   133,   309,   133,   296,   230,    -1,
     306,   230,    -1,   306,   133,   296,   230,    -1,   309,   230,
      -1,   309,   133,   296,   230,    -1,   229,    -1,   329,    -1,
     233,    -1,   117,   234,   117,    -1,    76,    -1,   117,   231,
     234,   117,    -1,   329,    -1,   138,   235,    -1,   236,    -1,
     235,   133,   236,    -1,    52,    -1,   293,    -1,    -1,    -1,
     238,   239,   240,   241,    -1,   135,   292,   234,   324,    -1,
     292,    -1,   110,   149,   130,    -1,    29,   149,    10,    -1,
      -1,    28,   243,   232,   149,    10,    -1,   160,   242,    -1,
     244,   132,   319,   183,    -1,   244,    85,   319,   183,    -1,
     318,   182,    -1,   209,   132,   319,   183,    -1,   209,    85,
     319,   182,    -1,   209,    85,   320,    -1,   209,   132,   182,
      -1,   209,    85,   182,    -1,    32,   182,    -1,    32,    -1,
     209,   131,   184,   325,    -1,    -1,   129,   247,   232,   149,
     130,    -1,    -1,    26,   248,   232,   149,    10,    -1,    17,
     190,   221,   149,   250,    -1,   224,    -1,   249,    -1,     8,
     252,   253,   221,   149,   251,    -1,   329,    -1,   180,    -1,
     191,    -1,   329,    -1,    88,   168,    -1,   329,    -1,     9,
     149,    -1,   329,    -1,   281,    -1,   278,    -1,   280,    -1,
     257,    -1,    62,    -1,   258,    -1,   257,   258,    -1,   100,
     270,   109,    -1,   101,   271,   109,    -1,   102,   272,    65,
      -1,   103,   139,   109,    -1,   103,   262,   109,    -1,    -1,
     262,   263,   139,    -1,   273,    -1,   263,   273,    -1,   105,
     139,   109,    -1,   105,   265,   109,    -1,    -1,   265,   263,
     139,    -1,   104,   139,   109,    -1,   104,   268,   109,    -1,
     106,   139,   109,    -1,   106,   269,   109,    -1,    -1,   268,
      61,   139,    -1,    -1,   269,    61,   139,    -1,    -1,   270,
     273,    -1,    -1,   271,   273,    -1,    -1,   272,   273,    -1,
      61,    -1,    -1,   108,   274,   277,    -1,    -1,    -1,   107,
     275,   276,   149,   130,    -1,    54,    -1,    55,    -1,    57,
      -1,   286,    -1,    99,   279,    -1,   171,    -1,    55,    -1,
      54,    -1,    57,    -1,    99,   271,   109,    -1,    59,    -1,
      60,    -1,   125,    59,    -1,   125,    60,    -1,    52,    -1,
      55,    -1,    54,    -1,    56,    -1,    57,    -1,    34,    -1,
      33,    -1,    35,    -1,    36,    -1,    50,    -1,    49,    -1,
      51,    -1,   282,    -1,   283,    -1,   282,    -1,   283,    -1,
      63,    -1,    64,    -1,   327,    -1,    -1,   116,   288,   155,
     327,    -1,     1,   327,    -1,   135,   292,   324,    -1,   292,
     327,    -1,   301,   133,   303,   312,    -1,   301,   312,    -1,
     303,   312,    -1,   311,    -1,   133,   290,    -1,    -1,   296,
     133,   307,   133,   309,   291,    -1,   296,   133,   307,   133,
     309,   133,   296,   291,    -1,   296,   133,   307,   291,    -1,
     296,   133,   307,   133,   296,   291,    -1,   296,   133,   309,
     291,    -1,   296,   133,   309,   133,   296,   291,    -1,   296,
     291,    -1,   307,   133,   309,   291,    -1,   307,   133,   309,
     133,   296,   291,    -1,   307,   291,    -1,   307,   133,   296,
     291,    -1,   309,   291,    -1,   309,   133,   296,   291,    -1,
     290,    -1,    -1,    56,    -1,    55,    -1,    54,    -1,    57,
      -1,   293,    -1,    52,    -1,   294,    -1,    89,   228,   324,
      -1,   295,    -1,   296,   133,   295,    -1,    58,    -1,   297,
     180,    -1,   297,    -1,   297,   209,    -1,   297,    -1,   299,
      -1,   300,   133,   299,    -1,   298,    -1,   301,   133,   298,
      -1,    68,    -1,    96,    -1,   302,    52,    -1,   302,    -1,
      52,   112,   180,    -1,    52,   112,   209,    -1,   305,    -1,
     306,   133,   305,    -1,   304,    -1,   307,   133,   304,    -1,
     122,    -1,    95,    -1,   308,    52,    -1,   308,    -1,   119,
      -1,    97,    -1,   310,    52,    -1,   133,   311,    -1,   329,
      -1,   284,    -1,    -1,   135,   314,   154,   324,    -1,   329,
      -1,   316,   326,    -1,   317,    -1,   316,   133,   317,    -1,
     180,    88,   180,    -1,    58,   180,    -1,    96,   180,    -1,
      52,    -1,    56,    -1,    53,    -1,    52,    -1,    56,    -1,
      53,    -1,   176,    -1,    52,    -1,    53,    -1,   176,    -1,
     132,    -1,    85,    -1,    -1,   328,    -1,    -1,   140,    -1,
     323,   136,    -1,   323,   137,    -1,    -1,   140,    -1,   133,
      -1,   138,    -1,   140,    -1,   327,    -1,   328,   138,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   552,   552,   552,   577,   584,   588,   592,   596,   602,
     604,   603,   615,   638,   645,   649,   653,   657,   663,   663,
     667,   671,   678,   683,   687,   692,   697,   705,   713,   718,
     727,   728,   734,   756,   773,   786,   799,   804,   817,   822,
     827,   832,   837,   839,   844,   850,   851,   855,   859,   863,
     867,   870,   878,   879,   882,   883,   887,   894,   893,   908,
     913,   920,   925,   932,   937,   944,   949,   954,   958,   962,
     968,   969,   975,   976,   982,   986,   990,   994,   998,  1002,
    1006,  1010,  1014,  1018,  1024,  1025,  1031,  1035,  1041,  1045,
    1051,  1055,  1059,  1063,  1067,  1071,  1075,  1081,  1087,  1094,
    1099,  1104,  1108,  1112,  1116,  1120,  1126,  1132,  1139,  1143,
    1146,  1150,  1154,  1160,  1161,  1162,  1163,  1168,  1175,  1176,
    1179,  1183,  1186,  1190,  1190,  1196,  1197,  1198,  1199,  1200,
    1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1211,  1212,  1213,  1214,  1215,  1216,  1217,  1218,  1219,  1220,
    1221,  1222,  1223,  1224,  1225,  1228,  1228,  1228,  1229,  1229,
    1230,  1230,  1230,  1231,  1231,  1231,  1231,  1232,  1232,  1232,
    1232,  1233,  1233,  1233,  1234,  1234,  1234,  1234,  1235,  1235,
    1235,  1235,  1236,  1236,  1236,  1236,  1237,  1237,  1237,  1237,
    1238,  1238,  1238,  1238,  1239,  1239,  1242,  1247,  1253,  1275,
    1298,  1319,  1332,  1345,  1358,  1363,  1368,  1373,  1379,  1385,
    1389,  1393,  1397,  1401,  1405,  1409,  1413,  1417,  1421,  1425,
    1429,  1433,  1437,  1441,  1445,  1449,  1453,  1457,  1461,  1465,
    1469,  1479,  1483,  1487,  1491,  1495,  1499,  1503,  1507,  1507,
    1512,  1518,  1524,  1532,  1533,  1537,  1541,  1547,  1553,  1554,
    1557,  1558,  1561,  1566,  1570,  1575,  1580,  1583,  1583,  1595,
    1601,  1605,  1609,  1615,  1619,  1623,  1632,  1643,  1652,  1661,
    1667,  1668,  1669,  1670,  1671,  1672,  1673,  1674,  1675,  1676,
    1677,  1682,  1681,  1698,  1698,  1703,  1707,  1711,  1715,  1723,
    1727,  1731,  1735,  1739,  1743,  1743,  1748,  1752,  1756,  1762,
    1763,  1770,  1774,  1782,  1790,  1790,  1790,  1797,  1797,  1797,
    1804,  1811,  1816,  1818,  1815,  1835,  1834,  1851,  1856,  1850,
    1873,  1872,  1889,  1888,  1906,  1907,  1906,  1922,  1926,  1930,
    1934,  1940,  1948,  1954,  1960,  1966,  1972,  1978,  1984,  1990,
    1996,  2002,  2009,  2015,  2016,  2017,  2020,  2021,  2024,  2025,
    2034,  2035,  2041,  2042,  2045,  2049,  2055,  2059,  2065,  2069,
    2074,  2079,  2083,  2087,  2092,  2097,  2101,  2107,  2111,  2115,
    2119,  2125,  2130,  2135,  2139,  2143,  2147,  2151,  2155,  2159,
    2163,  2167,  2171,  2175,  2179,  2183,  2187,  2191,  2197,  2198,
    2204,  2208,  2212,  2222,  2226,  2232,  2236,  2242,  2247,  2253,
    2256,  2253,  2270,  2274,  2280,  2284,  2291,  2290,  2305,  2316,
    2320,  2326,  2331,  2336,  2341,  2345,  2350,  2355,  2359,  2363,
    2375,  2374,  2387,  2386,  2400,  2408,  2409,  2412,  2424,  2427,
    2431,  2435,  2438,  2442,  2445,  2449,  2452,  2453,  2457,  2460,
    2472,  2473,  2474,  2480,  2486,  2508,  2568,  2572,  2579,  2582,
    2588,  2589,  2595,  2599,  2606,  2609,  2617,  2621,  2627,  2631,
    2638,  2641,  2648,  2651,  2662,  2665,  2672,  2675,  2682,  2685,
    2708,  2710,  2709,  2721,  2727,  2720,  2743,  2744,  2745,  2746,
    2749,  2756,  2757,  2758,  2759,  2762,  2787,  2788,  2789,  2793,
    2799,  2800,  2801,  2802,  2803,  2806,  2807,  2808,  2809,  2810,
    2811,  2812,  2815,  2821,  2829,  2833,  2839,  2840,  2843,  2848,
    2847,  2855,  2862,  2868,  2876,  2880,  2884,  2888,  2894,  2899,
    2904,  2908,  2912,  2916,  2920,  2924,  2928,  2932,  2936,  2940,
    2944,  2948,  2952,  2956,  2961,  2967,  2972,  2977,  2982,  2989,
    2990,  2997,  3002,  3012,  3013,  3021,  3028,  3033,  3040,  3045,
    3052,  3056,  3067,  3071,  3082,  3083,  3086,  3091,  3097,  3105,
    3113,  3117,  3128,  3132,  3143,  3144,  3147,  3155,  3162,  3163,
    3166,  3177,  3181,  3187,  3193,  3193,  3217,  3218,  3224,  3225,
    3231,  3235,  3239,  3245,  3246,  3247,  3250,  3251,  3252,  3253,
    3256,  3257,  3258,  3261,  3262,  3265,  3266,  3269,  3270,  3273,
    3276,  3279,  3280,  3281,  3284,  3285,  3288,  3289,  3292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "keyword_class", "keyword_module",
  "keyword_def", "keyword_undef", "keyword_begin", "keyword_rescue",
  "keyword_ensure", "keyword_end", "keyword_if", "keyword_unless",
  "keyword_then", "keyword_elsif", "keyword_else", "keyword_case",
  "keyword_when", "keyword_while", "keyword_until", "keyword_for",
  "keyword_break", "keyword_next", "keyword_redo", "keyword_retry",
  "keyword_in", "keyword_do", "keyword_do_cond", "keyword_do_block",
  "keyword_do_LAMBDA", "keyword_return", "keyword_yield", "keyword_super",
  "keyword_self", "keyword_nil", "keyword_true", "keyword_false",
  "keyword_and", "keyword_or", "keyword_not", "modifier_if",
  "modifier_unless", "modifier_while", "modifier_until", "modifier_rescue",
  "keyword_alias", "keyword_defined", "keyword_BEGIN", "keyword_END",
  "keyword__LINE__", "keyword__FILE__", "keyword__ENCODING__",
  "tIDENTIFIER", "tFID", "tGVAR", "tIVAR", "tCONSTANT", "tCVAR", "tLABEL",
  "tINTEGER", "tFLOAT", "tSTRING_CONTENT", "tCHAR", "tNTH_REF",
  "tBACK_REF", "tREGEXP_END", "tUPLUS", "tUMINUS", "tPOW", "tCMP", "tEQ",
  "tEQQ", "tNEQ", "tGEQ", "tLEQ", "tANDOP", "tOROP", "tMATCH", "tNMATCH",
  "tDOT2", "tDOT3", "tAREF", "tASET", "tLSHFT", "tRSHFT", "tCOLON2",
  "tCOLON3", "tOP_ASGN", "tASSOC", "tLPAREN", "tLPAREN_ARG", "tRPAREN",
  "tLBRACK", "tLBRACE", "tLBRACE_ARG", "tSTAR", "tDSTAR", "tAMPER",
  "tLAMBDA", "tSYMBEG", "tSTRING_BEG", "tXSTRING_BEG", "tREGEXP_BEG",
  "tWORDS_BEG", "tQWORDS_BEG", "tSYMBOLS_BEG", "tQSYMBOLS_BEG",
  "tSTRING_DBEG", "tSTRING_DVAR", "tSTRING_END", "tLAMBEG", "tLOWEST",
  "'='", "'?'", "':'", "'>'", "'<'", "'|'", "'^'", "'&'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "tUMINUS_NUM", "'!'", "'~'", "tLAST_TOKEN", "'{'",
  "'}'", "'['", "'.'", "','", "'`'", "'('", "')'", "']'", "';'", "' '",
  "'\\n'", "$accept", "program", "@1", "top_compstmt", "top_stmts",
  "top_stmt", "@2", "bodystmt", "compstmt", "stmts", "stmt", "@3",
  "command_asgn", "expr", "expr_value", "command_call", "block_command",
  "cmd_brace_block", "@4", "command", "mlhs", "mlhs_inner", "mlhs_basic",
  "mlhs_item", "mlhs_head", "mlhs_post", "mlhs_node", "lhs", "cname",
  "cpath", "fname", "fsym", "fitem", "undef_list", "@5", "op", "reswords",
  "arg", "@6", "arg_value", "aref_args", "paren_args", "opt_paren_args",
  "opt_call_args", "call_args", "command_args", "@7", "block_arg",
  "opt_block_arg", "args", "mrhs", "primary", "@8", "@9", "@10", "@11",
  "@12", "@13", "@14", "@15", "@16", "@17", "@18", "@19", "@20", "@21",
  "@22", "@23", "primary_value", "k_begin", "k_if", "k_unless", "k_while",
  "k_until", "k_case", "k_for", "k_class", "k_module", "k_def", "k_end",
  "then", "do", "if_tail", "opt_else", "for_var", "f_marg", "f_marg_list",
  "f_margs", "block_args_tail", "opt_block_args_tail", "block_param",
  "opt_block_param", "block_param_def", "opt_bv_decl", "bv_decls", "bvar",
  "lambda", "@24", "@25", "f_larglist", "lambda_body", "do_block", "@26",
  "block_call", "method_call", "brace_block", "@27", "@28", "case_body",
  "cases", "opt_rescue", "exc_list", "exc_var", "opt_ensure", "literal",
  "strings", "string", "string1", "xstring", "regexp", "words",
  "word_list", "word", "symbols", "symbol_list", "qwords", "qsymbols",
  "qword_list", "qsym_list", "string_contents", "xstring_contents",
  "regexp_contents", "string_content", "@29", "@30", "@31", "string_dvar",
  "symbol", "sym", "dsym", "numeric", "user_variable", "keyword_variable",
  "var_ref", "var_lhs", "backref", "superclass", "@32", "f_arglist",
  "args_tail", "opt_args_tail", "f_args", "f_bad_arg", "f_norm_arg",
  "f_arg_item", "f_arg", "f_label", "f_kw", "f_block_kw", "f_block_kwarg",
  "f_kwarg", "kwrest_mark", "f_kwrest", "f_opt", "f_block_opt",
  "f_block_optarg", "f_optarg", "restarg_mark", "f_rest_arg",
  "blkarg_mark", "f_block_arg", "opt_f_block_arg", "singleton", "@33",
  "assoc_list", "assocs", "assoc", "operation", "operation2", "operation3",
  "dot_or_colon", "opt_terms", "opt_nl", "rparen", "rbracket", "trailer",
  "term", "terms", "none", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,    61,    63,    58,    62,    60,   124,    94,    38,
      43,    45,    42,    47,    37,   367,    33,   126,   368,   123,
     125,    91,    46,    44,    96,    40,    41,    93,    59,    32,
      10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   141,   143,   142,   144,   145,   145,   145,   145,   146,
     147,   146,   148,   149,   150,   150,   150,   150,   152,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   153,   153,   154,   154,   154,   154,   154,
     154,   155,   156,   156,   157,   157,   157,   159,   158,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   170,   171,   171,   171,   171,   171,   172,   172,
     173,   173,   174,   175,   174,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   179,   178,
     178,   178,   180,   181,   181,   181,   181,   182,   183,   183,
     184,   184,   185,   185,   185,   185,   185,   187,   186,   188,
     189,   189,   189,   190,   190,   190,   190,   191,   191,   191,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   193,   192,   194,   192,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   195,   192,   192,   192,   192,   192,
     192,   192,   192,   192,   196,   197,   192,   198,   199,   192,
     192,   192,   200,   201,   192,   202,   192,   203,   204,   192,
     205,   192,   206,   192,   207,   208,   192,   192,   192,   192,
     192,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   227,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   229,
     229,   230,   230,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   232,   232,
     233,   233,   233,   234,   234,   235,   235,   236,   236,   238,
     239,   237,   240,   240,   241,   241,   243,   242,   244,   244,
     244,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     247,   246,   248,   246,   249,   250,   250,   251,   251,   252,
     252,   252,   253,   253,   254,   254,   255,   255,   255,   256,
     257,   257,   257,   258,   259,   260,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   266,   266,   267,   267,
     268,   268,   269,   269,   270,   270,   271,   271,   272,   272,
     273,   274,   273,   275,   276,   273,   277,   277,   277,   277,
     278,   279,   279,   279,   279,   280,   281,   281,   281,   281,
     282,   282,   282,   282,   282,   283,   283,   283,   283,   283,
     283,   283,   284,   284,   285,   285,   286,   286,   287,   288,
     287,   287,   289,   289,   290,   290,   290,   290,   291,   291,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   293,   293,   293,   293,   294,
     294,   295,   295,   296,   296,   297,   298,   298,   299,   299,
     300,   300,   301,   301,   302,   302,   303,   303,   304,   305,
     306,   306,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   312,   312,   313,   314,   313,   315,   315,   316,   316,
     317,   317,   317,   318,   318,   318,   319,   319,   319,   319,
     320,   320,   320,   321,   321,   322,   322,   323,   323,   324,
     325,   326,   326,   326,   327,   327,   328,   328,   329
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     3,     2,     1,
       0,     5,     4,     2,     1,     1,     3,     2,     0,     4,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     4,
       1,     3,     3,     6,     5,     5,     5,     5,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     2,
       1,     1,     1,     1,     1,     4,     4,     0,     5,     2,
       3,     4,     5,     4,     5,     2,     2,     2,     2,     2,
       1,     3,     1,     3,     1,     2,     3,     5,     2,     4,
       2,     4,     1,     3,     1,     3,     2,     3,     1,     3,
       1,     1,     4,     3,     3,     3,     3,     2,     1,     1,
       1,     4,     3,     3,     3,     3,     2,     1,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     5,     3,     5,
       6,     5,     5,     5,     5,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     4,     4,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     0,     4,
       6,     1,     1,     1,     2,     4,     2,     3,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     0,     2,     2,
       2,     1,     1,     1,     2,     3,     4,     3,     4,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     0,     4,     3,     3,     2,     3,     3,
       1,     4,     3,     1,     0,     6,     4,     3,     2,     1,
       2,     2,     6,     6,     0,     0,     7,     0,     0,     7,
       5,     4,     0,     0,     9,     0,     6,     0,     0,     8,
       0,     5,     0,     6,     0,     0,     9,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     5,
       1,     2,     1,     1,     1,     3,     1,     3,     1,     4,
       6,     3,     5,     2,     4,     1,     3,     4,     2,     2,
       1,     2,     0,     6,     8,     4,     6,     4,     2,     6,
       2,     4,     6,     2,     4,     2,     4,     1,     1,     1,
       3,     1,     4,     1,     2,     1,     3,     1,     1,     0,
       0,     4,     4,     1,     3,     3,     0,     5,     2,     4,
       4,     2,     4,     4,     3,     3,     3,     2,     1,     4,
       0,     5,     0,     5,     5,     1,     1,     6,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     3,     3,     3,     0,     3,
       1,     2,     3,     3,     0,     3,     3,     3,     3,     3,
       0,     3,     0,     3,     0,     2,     0,     2,     0,     2,
       1,     0,     3,     0,     0,     5,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     3,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       4,     2,     3,     2,     4,     2,     2,     1,     2,     0,
       6,     8,     4,     6,     4,     6,     2,     4,     6,     2,
       4,     2,     4,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     2,     1,     2,     1,
       1,     3,     1,     3,     1,     1,     2,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     2,     1,     1,     1,
       2,     2,     1,     1,     0,     4,     1,     2,     1,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     2,
       2,     0,     1,     1,     1,     1,     1,     2,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     0,     1,     0,   339,   340,   341,     0,   332,
     333,   334,   337,   335,   336,   338,   327,   328,   329,   330,
     290,   257,   257,   496,   495,   497,   498,   597,     0,   597,
      10,     0,   500,   499,   501,   583,   585,   492,   491,   584,
     494,   486,   487,   440,   506,   507,     0,     0,     0,     0,
       0,   608,   608,    82,   399,   466,   464,   466,   468,   448,
     460,   454,   462,     0,     0,     0,     3,   595,     6,     9,
      30,    42,    45,    53,    52,     0,    70,     0,    74,    84,
       0,    50,   241,     0,   281,     0,     0,   304,   307,   595,
       0,     0,     0,     0,    54,   299,   270,   271,   439,   441,
     272,   273,   274,   276,   275,   277,   437,   438,   436,   502,
     503,   278,     0,   279,   257,     5,     8,   165,   176,   166,
     189,   162,   182,   172,   171,   192,   193,   187,   170,   169,
     164,   190,   194,   195,   174,   163,   177,   181,   183,   175,
     168,   184,   191,   186,   185,   178,   188,   173,   161,   180,
     179,   160,   167,   158,   159,   155,   156,   157,   113,   115,
     114,   150,   151,   146,   128,   129,   130,   137,   134,   136,
     131,   132,   152,   153,   138,   139,   143,   147,   133,   135,
     125,   126,   127,   140,   141,   142,   144,   145,   148,   149,
     154,   118,   120,   122,    23,   116,   117,   119,   121,     0,
       0,     0,     0,     0,     0,     0,     0,   252,     0,   242,
     263,    68,   256,   608,     0,   502,   503,     0,   279,   608,
     578,    69,    67,   597,    66,     0,   608,   417,    65,   597,
     598,     0,     0,    18,   238,     0,     0,   327,   328,   290,
     293,   418,   217,     0,     0,   218,   287,     0,     0,     0,
     595,    15,   597,    72,    14,   283,     0,   601,   601,   243,
       0,     0,   601,   576,   597,     0,     0,     0,    80,   331,
       0,    90,    91,    98,   301,   400,   483,   482,   484,   481,
       0,   480,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   488,   489,    49,   232,   233,   604,   605,
       4,   606,   596,     0,     0,     0,     0,     0,     0,     0,
     406,   408,     0,    86,     0,    78,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   608,     0,     0,    51,     0,
       0,     0,     0,   595,     0,   596,     0,   353,   352,     0,
       0,   502,   503,   279,   108,   109,     0,     0,   111,     0,
       0,   502,   503,   279,   320,   185,   178,   188,   173,   155,
     156,   157,   113,   114,   574,   322,   573,     0,     0,     0,
     422,   420,   300,   442,     0,     0,   411,    59,   298,   123,
     581,   287,   264,   582,   259,     0,     0,   261,   253,   262,
       0,   608,     0,     0,     0,   261,   254,   597,     0,   292,
     258,   597,   251,   250,   597,   297,    48,    20,    22,    21,
       0,   294,     0,     0,     0,     0,     0,     0,    17,   597,
     285,    13,   596,    71,   597,   288,   603,   602,   244,   603,
     246,   289,   577,     0,    97,   488,   489,    88,    83,     0,
       0,   608,     0,   534,   470,   473,   471,   485,   467,   443,
     465,   444,   445,   469,   446,   447,     0,   450,   456,     0,
     457,   452,   453,     0,   458,     0,   459,     0,     0,   607,
       7,    24,    25,    26,    27,    28,    46,    47,   608,     0,
      31,    40,     0,    41,   597,     0,    76,    87,    44,    43,
       0,   196,   263,    39,   214,   222,   227,   228,   229,   224,
     226,   236,   237,   230,   231,   207,   208,   234,   235,   597,
     223,   225,   219,   220,   221,   209,   210,   211,   212,   213,
     586,   588,   587,   589,   416,   257,   414,   597,   586,   588,
     587,   589,   415,   257,     0,   608,   344,     0,   343,     0,
       0,     0,     0,     0,     0,   287,     0,   608,     0,   312,
     317,   108,   109,   110,     0,   509,   315,   508,     0,   608,
       0,     0,     0,   534,   594,   593,   324,   586,   587,   257,
     257,   608,   608,    32,   198,    38,   206,    57,    60,     0,
     196,   580,     0,   265,   260,   608,   586,   587,   597,   586,
     587,   579,   291,   599,   247,   296,    19,     0,   239,     0,
      29,     0,   608,   205,    73,    16,   284,   601,     0,    81,
      94,    96,   597,   586,   587,   540,   537,   536,   535,   538,
     545,   554,     0,   565,   555,   569,   568,   564,   534,     0,
     533,   403,   539,   541,   543,   519,   547,   552,   608,   557,
     608,   562,   519,   567,   519,     0,   517,   474,     0,   449,
     451,   461,   455,   463,   215,   216,   391,   608,     0,   389,
     388,   269,     0,    85,    79,     0,     0,     0,     0,     0,
       0,   413,    63,     0,   419,     0,     0,   249,   412,    61,
     248,   342,   282,   608,   608,   428,   608,   345,   608,   347,
     305,   346,   308,     0,     0,   311,   590,   286,   597,   586,
     587,     0,     0,   511,     0,     0,   108,   109,   112,   597,
       0,   597,   534,     0,     0,     0,   410,    56,   409,    55,
       0,     0,     0,   608,   124,   266,   255,     0,     0,   419,
       0,     0,   597,    11,   245,    89,    92,     0,   540,     0,
     365,   356,   358,   597,   354,   608,     0,     0,   401,     0,
     526,   546,     0,   515,   572,   556,     0,   516,     0,   529,
     566,     0,   531,   570,     0,   476,   477,   478,   472,   479,
     540,     0,   387,   608,     0,   372,   549,   550,   608,   608,
     560,   372,   372,   370,   393,     0,     0,   267,    77,   197,
       0,    37,   203,    36,   204,    64,   600,     0,    34,   201,
      35,   202,    62,   429,   430,   608,   431,     0,   608,   350,
       0,     0,   348,     0,     0,     0,   310,     0,     0,   419,
       0,   318,     0,     0,   419,   321,   575,   597,     0,   513,
     325,     0,     0,   199,     0,     0,   295,   558,   597,     0,
     363,     0,   542,   597,     0,     0,   518,   544,   519,   519,
     553,   608,   571,   519,   563,   519,   519,     0,     0,   397,
     394,   395,   398,     0,   390,   378,   380,     0,   548,     0,
     368,   369,     0,   383,     0,   385,   407,   268,   240,    33,
     200,     0,     0,   433,   351,     0,    12,   435,     0,   302,
     303,     0,     0,   265,   608,   313,     0,   510,   316,   512,
     323,   534,   423,   421,     0,   355,   366,     0,   361,   357,
     402,   405,   404,     0,   522,     0,   524,   514,     0,   530,
       0,   527,   532,   475,   559,     0,   392,   371,   372,   372,
     287,     0,   551,   608,   372,   561,   372,   372,     0,   432,
       0,    99,   100,   107,     0,   434,     0,   306,   309,   425,
     426,   424,     0,     0,     0,    58,     0,   364,     0,   359,
     519,   519,   519,   519,   396,     0,   375,     0,   377,   590,
     286,   367,     0,   384,     0,   381,   386,   106,     0,   608,
       0,   608,   608,     0,   319,     0,   362,     0,   523,     0,
     520,   525,   528,   372,   372,   372,   372,   590,   105,   597,
     586,   587,   427,   349,   314,   326,   360,   519,   376,     0,
     373,   379,   382,   419,   521,   372,   374
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    66,    67,    68,   235,   554,   555,   250,
     251,   430,    70,    71,   349,    72,    73,   598,   743,    74,
      75,   252,    76,    77,    78,   458,    79,   208,   368,   369,
     191,   192,   193,   194,   599,   551,   196,    81,   432,   210,
     256,   544,   698,   421,   422,   224,   225,   212,   408,   213,
     503,    82,   347,   444,   617,   351,   834,   352,   835,   721,
     972,   725,   722,   916,   581,   583,   735,   921,   243,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   702,
     557,   710,   831,   832,   360,   761,   762,   763,   947,   886,
     793,   678,   679,   794,   880,   881,   274,   275,   463,   649,
     768,   311,   498,    94,    95,   398,   592,   591,   564,   971,
     704,   825,   902,   906,    96,    97,    98,    99,   100,   101,
     102,   286,   476,   103,   290,   104,   105,   288,   292,   282,
     280,   284,   468,   668,   667,   784,   788,   106,   281,   107,
     108,   215,   216,   111,   217,   218,   576,   724,   733,   866,
     770,   734,   652,   653,   654,   655,   656,   657,   797,   798,
     658,   659,   660,   661,   800,   801,   662,   663,   664,   665,
     666,   773,   387,   582,   261,   219,   220,   244,   621,   546,
     586,   300,   418,   419,   694,   448,   558,   355,   254
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -834
static const yytype_int16 yypact[] =
{
    -834,   107,  2684,  -834,  7133,  -834,  -834,  -834,  6660,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  7245,  7245,  -834,  -834,
    7245,  3997,  3595,  -834,  -834,  -834,  -834,   -14,  6528,   -36,
    -834,    -6,  -834,  -834,  -834,  2925,  3729,  -834,  -834,  3059,
    -834,  -834,  -834,  -834,  -834,  -834,  8589,  8589,    64,  5153,
    8701,  7581,  7917,  6917,  -834,  6396,  -834,  -834,  -834,    14,
      25,    67,   186,   206,  8813,  8589,  -834,   220,  -834,   991,
    -834,   456,  -834,  -834,   147,   131,  -834,   195,  8925,  -834,
     227,  3039,   386,   424,  -834,  8701,  8701,  -834,  -834,  5791,
    9033,  9141,  9249,  6263,   120,   111,  -834,  -834,   248,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,   249,
     355,  -834,   279,   391,    60,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,   241,  -834,  -834,  -834,  -834,   265,
    8589,   347,  5291,  8589,  8589,  8589,  8589,  -834,   302,  3039,
     342,  -834,  -834,   333,   454,    -4,    -3,   385,    90,   348,
    -834,  -834,  -834,  5679,  -834,  7245,  7245,  -834,  -834,  5903,
    -834,  8701,   622,  -834,   376,   393,  5429,  -834,  -834,  -834,
     400,   414,  -834,   529,    60,   458,   521,  7357,  5153,   418,
     220,   991,   -36,   445,  -834,   456,   461,   390,   438,  -834,
     342,   433,   438,  -834,   -36,   555,   328,  9357,   467,  -834,
     614,   679,   696,   699,  -834,  -834,  -834,  -834,  -834,  -834,
     459,  -834,   466,   544,   714,   506,   557,   508,    29,   514,
     629,   520,    69,   567,   579,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  6015,  8701,  8701,  8701,  8701,  7357,  8701,  8701,
    -834,  -834,  8029,  -834,  5153,  7025,   534,  8029,  8589,  8589,
    8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,
    8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,  8589,
    8589,  8589,  8589,  8589,  9633,  7245,  9709,  4403,   456,    56,
      56,  8701,  8701,   220,   683,   582,   652,  -834,  -834,   702,
     700,    76,    88,   102,   351,   360,  8701,   370,  -834,   116,
     718,  -834,  -834,  -834,  -834,   159,   198,   218,   252,   266,
     296,   300,   308,   330,  -834,  -834,  -834,   353, 10621, 10621,
    -834,  -834,  -834,  -834,  8813,  8813,  -834,   630,  -834,  -834,
    -834,   244,  -834,  -834,  -834,  8589,  8589,  7469,  -834,  -834,
    9785,  7245,  9861,  8589,  8589,  7693,  -834,   -36,   585,  -834,
    -834,   -36,  -834,  -834,    59,  -834,  -834,  -834,  -834,  -834,
    6660,  -834,  8589,  4791,   609,  9785,  9861,  8589,   991,   -36,
    -834,  -834,  6127,   611,   -36,  -834,  7805,  -834,  -834,  7917,
    -834,  -834,  -834,   376,   720,  -834,  -834,  -834,   616,  9357,
    9937,  7245, 10013,  1466,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,   271,  -834,  -834,   608,
    -834,  -834,  -834,   312,  -834,   620,  -834,  8589,  8589,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,    26,  8589,
    -834,   633,   640,  -834,   -36,  9357,   644,  -834,  -834,  -834,
     668,  2203,  -834,  -834,   458,  2533,  2533,  2533,  2533,   821,
     821,  3307,  2003,  2533,  2533,  3173,  3173,   773,   773, 10650,
     821,   821,   610,   610,   724,    47,    47,   458,   458,   458,
    4131,  3193,  4265,  3327,  -834,   414,  -834,   -36,   556,  -834,
     628,  -834,  -834,  3863,   772,   777,  -834,  4541,   770,  4929,
      72,    72,   683,  8141,   772,   104, 10089,  7245, 10165,  -834,
     456,  -834,   720,  -834,   220,  -834,  -834,  -834, 10241,  7245,
   10317,  4403,  8701,  1513,  -834,  -834,  -834,  -834,  -834,  1777,
    1777,    26,    26,  -834,  2771,  -834,  3039,  -834,  -834,  6660,
    2905,  -834,  8589,   342,  -834,   348,  2791,  3461,   -36,   337,
     426,  -834,  -834,  -834,  -834,  -834,  -834,  8701,  3039,   658,
    -834,   414,   414,  3039,   185,   991,  -834,   438,  9357,   616,
     587,    10,   -36,   259,   396,   677,  -834,  -834,  -834,  -834,
    -834,  -834,   872,  -834,  -834,  -834,  -834,  -834,  1598,    49,
    -834,  -834,  -834,  -834,  -834,   657,  8589,  -834,   661,   749,
     669,  -834,   676,   760,   682,   765,  -834,  -834,   918,  -834,
    -834,  -834,  -834,  -834,   458,   458,  -834,  1294,  5567,  -834,
    -834,   685,  8253,  -834,   616,  9357,  8813,  8589,   710,  8813,
    8813,  -834,   630,   698,   775,  8813,  8813,  -834,  -834,   630,
    -834,  -834,  -834,  8365,   839,  -834,   627,  -834,   839,  -834,
    -834,  -834,  -834,   772,    50,  -834,    32,    46,   -36,   106,
     114,  8701,   220,  -834,  8701,  4403,   587,    10,  -834,   -36,
     772,    59,  1598,  4403,   220,  6792,  -834,  -834,  -834,  -834,
    5567,  5429,  8589,    26,  -834,  -834,  -834,  8589,  8589,   429,
    8589,  8589,    59,  -834,  -834,  -834,   578,  8589,  -834,   872,
     488,  -834,   722,   -36,  -834,   719,  5567,  5429,  -834,  1598,
    -834,  -834,   350,  -834,  -834,  -834,    66,  -834,  1598,  -834,
    -834,  1184,  -834,  -834,  5429,  -834,  -834,  -834,  -834,  -834,
     748,   965,  -834,   719,   746,   734,  9465,  -834,   735,   669,
    -834,   741,   742,  -834,  -834,   863,  8589,   744,   616,  3039,
    8589,  -834,  3039,  -834,  3039,  -834,  -834,  8813,  -834,  3039,
    -834,  3039,  -834,   633,  -834,   791,  -834,  5041,   874,  -834,
    8701,   772,  -834,   772,  5567,  5567,  -834,  8477,  4679,   141,
      72,  -834,   220,   772,  -834,  -834,  -834,   -36,   772,  -834,
    -834,   875,   756,  3039,  5429,  8589,  -834,  -834,   -36,   401,
     755,   901,  -834,   -36,   881,   771,  -834,  -834,   769,   778,
    -834,   669,  -834,   780,  -834,   781,   780,   776,  9465,  -834,
     782,  -834,  -834,   793,  -834,  1779,  -834,   866,   740,   350,
    -834,  -834,  1779,  -834,  1184,  -834,  -834,   786,  3039,  -834,
    3039,  9573,    56,  -834,  -834,  5567,  -834,  -834,    56,  -834,
    -834,   772,   772,  -834,   565,  -834,  4403,  -834,  -834,  -834,
    -834,  1513,  -834,  -834,   800,  -834,   790,   401,   570,  -834,
    -834,  -834,  -834,  1598,  -834,  1184,  -834,  -834,  1184,  -834,
    1184,  -834,  -834,  -834,   740,   965,  -834,  -834,   798,   801,
    -834, 10393,  -834,   669,   802,  -834,   804,   802,   891,  -834,
     768,   679,   696,   699,  4403,  -834,  4541,  -834,  -834,  -834,
    -834,  -834,  5567,   772,  4403,  -834,   401,   790,   401,   815,
     780,   816,   780,   780,  -834,  1779,  -834,  1184,  -834,   819,
     825,  -834,  1184,  -834,  1184,  -834,  -834,   720, 10469,  7245,
   10545,   777,   627,   772,  -834,   772,   790,   401,  -834,  1184,
    -834,  -834,  -834,   802,   817,   802,   802,   137,    10,   -36,
     115,   138,  -834,  -834,  -834,  -834,   790,   780,  -834,  1184,
    -834,  -834,  -834,   161,  -834,   802,  -834
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -834,  -834,  -834,   530,  -834,    21,  -834,  -557,    98,  -834,
      73,  -834,  -284,   196,   -10,   -50,  -834,  -100,  -834,    -7,
     879,  -159,   -12,   -76,  -834,  -405,     0,  1793,  -327,   873,
     -54,  -834,   -23,  -834,  -834,    13,  -834,   993,  -834,   894,
    -834,    48,    93,  -337,    65,     5,  -834,  -293,  -189,   -44,
    -297,    20,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,     2,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -199,
    -338,  -519,   -32,  -644,  -834,  -789,  -792,   212,   301,  -756,
    -834,  -530,  -834,  -545,  -834,    35,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,   882,  -834,  -834,  -559,  -834,
     -17,  -834,  -834,  -834,  -834,  -834,  -834,   887,  -834,  -834,
    -834,  -834,   701,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
     932,  -834,  -150,  -834,  -834,  -834,  -834,     3,  -834,     7,
    -834,  1201,  1461,   900,  1703,  1623,  -834,  -834,    74,  -434,
    -506,  -419,  -748,  -537,  -731,   181,   239,   222,   109,  -834,
    -834,  -834,   215,  -730,  -833,   117,   235,  -834,  -621,  -834,
      94,  -626,  -834,  -834,  -834,   -35,  -269,   448,  -228,  -834,
    -834,   -24,    -1,   632,  -585,  -226,    36,    -9,    -2
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -609
static const yytype_int16 yytable[] =
{
     115,   279,   316,   713,    83,   233,    83,   257,   547,   207,
     207,   197,   559,   207,   295,   198,   258,   262,   214,   214,
     513,   195,   214,   749,   730,   116,   231,   228,   234,   650,
     416,   197,   450,   508,   777,   198,   452,   253,   867,   385,
     573,   195,   712,   882,   651,   893,   895,   756,   874,   259,
     263,    83,   214,   268,   629,   270,   802,  -103,   302,   955,
     828,   740,   741,   556,   833,   354,   214,   926,   195,   556,
     227,  -105,   929,   269,   608,    69,   350,    69,   766,   353,
     270,   211,   221,  -504,  -505,   222,   390,   214,   214,   439,
     479,   214,   359,   370,   370,  -286,   308,   309,   269,   709,
     684,   -99,   676,   301,   230,   764,   195,     3,   -99,  -100,
     269,   269,   269,  -100,   604,   318,   545,   574,   553,   397,
     246,   229,   604,   236,   632,   301,   230,  -107,  -102,  -106,
     485,  -102,   470,   839,   473,   977,   477,   390,   480,  -104,
     477,  -286,  -286,   677,   844,  -587,   611,   249,   869,   650,
    -103,  -104,   955,   285,   867,   504,   779,   875,   782,   767,
     589,   590,   396,   645,   287,   -94,  -101,  -586,   843,   341,
     342,   343,   890,   891,  -101,   310,   848,   414,   486,   -96,
     611,  -587,   545,   837,   553,   646,  1006,   929,   298,   391,
     299,   457,   986,   988,   298,   226,   299,   882,   993,   230,
     995,   996,  -107,   874,    83,   388,   289,   867,   622,   -90,
     298,   409,   299,   854,   650,  1026,   207,   409,   207,   207,
     863,   -91,   764,   860,   423,   214,   441,   214,   214,   765,
     718,   214,   575,   214,   622,   -98,   253,   -97,    83,   -93,
     391,   442,   729,   312,  -496,   937,   255,   -95,   883,    83,
      83,   728,   389,  -102,   298,  -102,   299,  1028,  1030,  1031,
    1032,   867,   500,   453,   949,   293,   294,   509,   502,   270,
     969,   956,  -586,   502,   -92,  -103,  -104,  -103,  -104,  1036,
     808,   348,   348,  -495,   -93,   348,   301,   269,   417,   227,
     420,  -496,   396,   491,   492,   493,   494,   -71,   650,  -101,
     249,  -101,   253,  -497,    83,   214,   214,   214,   214,    83,
     214,   214,   981,   847,   214,   506,    83,   270,   -85,   214,
     438,   915,   764,   490,   764,   291,   670,   991,   313,   562,
    -495,   437,   464,   670,   434,   269,  -504,  -498,   207,   317,
     622,   560,   561,   423,   593,   595,   249,   214,    56,    83,
    -497,  -500,   622,   214,   214,   970,  -106,   543,   298,   973,
     299,   -99,   934,   936,  1014,   715,   394,   939,   214,   941,
     942,   -93,   605,   464,   399,    69,   838,  -583,   465,   466,
     495,  -499,   -90,   457,  -498,  -501,  -584,   455,   456,   301,
     764,   979,   -93,  -490,   552,   -93,   214,   214,  -500,   -93,
     229,   754,   508,   401,   207,   577,   824,   616,   640,   423,
     669,   627,   249,   214,   405,  -493,   746,  1005,   641,   465,
     466,   -95,   571,   543,   750,   424,   572,   426,  -499,   457,
     406,   115,  -501,   197,  1033,    83,  -490,   198,   584,   764,
    -490,   764,  -505,   195,    83,  -493,   644,   645,   543,  -102,
     114,   672,   114,   758,   207,   636,   637,   638,   639,   423,
     552,   270,  -493,   214,   114,   114,   407,  -100,   114,   646,
     764,  -331,   413,   543,  1008,  1010,  1011,  1012,   395,   269,
    -583,   415,  -490,  -490,   552,   585,  -583,   650,   -91,  -584,
     759,  -493,  -493,   308,   309,  -584,   680,   114,   114,   348,
     348,   348,   348,  -107,   496,   497,    69,   270,   -95,   344,
     552,   431,   114,   751,   836,   625,   855,  -331,  -331,   714,
     464,  1034,   433,   446,   -98,   269,   318,   464,   688,   -95,
     447,   845,   -95,   114,   114,   223,   -95,   114,  -104,   410,
     758,  -101,   636,   637,   638,   639,   693,   348,   348,   226,
     692,   700,   755,   705,   440,   345,   346,   -70,   699,    83,
     207,    83,   570,   451,   964,   423,   465,   466,   467,   214,
     966,   449,   207,   465,   466,   469,   744,   423,   447,   543,
     827,   214,   563,    83,   214,   411,   412,   700,   700,   680,
     680,   543,   815,   691,   737,   739,   711,   711,   445,   822,
     459,   697,   197,   409,  -419,   464,   198,   693,   437,   457,
     723,   454,   195,  -590,   435,   474,   552,   478,   464,   214,
     700,   859,   758,   481,   636,   637,   638,   639,   552,   484,
     270,   693,   909,  -106,   910,   487,   509,   697,   697,   811,
     813,   830,   827,   695,   918,   818,   820,   488,   269,   920,
     114,   465,   466,   471,   -97,   706,   774,   708,   774,   502,
     411,   436,  1019,  -419,   465,   466,   475,   507,  -102,   691,
     697,   114,  -590,   114,   114,   804,   427,   114,   318,   114,
      83,   850,   736,   738,   114,   428,   429,   270,   214,   -93,
     464,   214,   214,   331,   332,   114,   114,   214,   214,   460,
     563,   826,   829,   978,   829,   269,   829,  -419,   565,  -419,
    -419,   840,   967,   968,   842,   696,  -590,   693,  -590,  -590,
     489,   613,  -586,   214,   597,   569,   214,    83,   693,   338,
     339,   340,   341,   342,   343,    83,   465,   466,   482,   620,
    -104,   680,    83,    83,   -85,   461,   462,   671,   195,   628,
     114,   114,   114,   114,   114,   114,   114,   114,   841,   673,
     114,   -95,   114,   804,  -502,   114,  -263,   899,    83,    83,
     849,   803,   622,   682,  1004,   464,   805,   685,   731,   472,
     686,  -503,   701,   707,  -279,   703,    83,   566,   753,   757,
     769,   804,   318,   114,   772,   114,   774,   774,   888,   114,
     114,   775,   776,   578,  1024,  -287,  1025,   331,   332,   778,
    -502,  -502,   780,   752,   114,   781,   269,   783,  -264,   214,
     908,   465,   466,   903,   810,   951,   907,  -503,  -503,    83,
    -279,  -279,   214,   567,   568,   816,    83,    83,   851,   852,
      83,   318,   114,   114,   339,   340,   341,   342,   343,   579,
     580,  -287,  -287,   998,   827,   861,    83,   791,   795,   114,
     878,   425,   817,   884,   864,   865,   872,   885,   889,   774,
     872,   579,   580,   896,   892,   894,   711,  -265,   917,   901,
     944,   114,   877,   905,   443,   922,   923,  -101,   927,   318,
     114,   931,   799,   339,   340,   341,   342,   343,   269,   999,
    1000,   932,   933,   960,   331,   332,   943,    83,   -92,   114,
     946,   935,   829,   938,   940,   945,   796,   348,    83,  -266,
     348,   269,   950,   976,   758,   904,   636,   637,   638,   639,
     975,   985,   911,   912,   987,   992,   914,   994,   336,   337,
     338,   339,   340,   341,   342,   343,   260,   997,  1007,  1009,
    1029,   774,   924,   758,  -586,   636,   637,   638,   639,   873,
    -587,   759,   876,   619,   543,   374,    83,   760,    83,   357,
    1023,   858,   785,   786,    83,   787,    83,   392,   792,   803,
     984,    44,    45,   872,  1022,   393,   803,   871,   803,   283,
     759,   483,   207,   386,   870,   974,   928,   423,   952,   705,
     829,   214,   948,   965,   868,   114,     0,   114,     0,   209,
     209,   543,     0,   209,     0,   114,     0,   879,   693,   636,
     637,   638,   639,     0,     0,     0,   348,   114,     0,   114,
     114,   303,   304,   305,   306,   307,     0,     0,     0,   242,
     245,     0,     0,     0,   209,   209,     0,     0,   552,   612,
       0,     0,     0,   614,     0,     0,   615,   296,   297,     0,
       0,     0,  1001,     0,  1002,   114,     0,     0,     0,     0,
    1003,   624,     0,   954,     0,   957,   626,     0,     0,   803,
       0,   803,     0,     0,     0,     0,   803,     0,   803,     0,
       0,     0,     0,     0,   400,     0,     0,   402,   403,   404,
     799,     0,     0,     0,   953,     0,     0,   799,     0,   799,
       0,     0,     0,     0,   980,     0,   982,     0,     0,     0,
       0,   983,     0,   803,   796,     0,   114,     0,   796,     0,
       0,   796,     0,   796,   114,     0,   683,   114,   114,     0,
       0,     0,     0,   114,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1013,     0,  1015,   114,
       0,     0,   114,   114,     0,  1016,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,     0,   114,   114,
    1027,     0,     0,   209,     0,     0,   209,   209,   209,   296,
     799,     0,   799,   109,     0,   109,   501,   799,     0,   799,
    1035,   512,     0,     0,   114,   114,   209,     0,   209,   209,
       0,     0,     0,     0,   796,     0,   796,     0,     0,     0,
       0,   796,   114,   796,     0,     0,   758,     0,   636,   637,
     638,   639,   640,     0,   799,     0,     0,     0,     0,     0,
     109,     0,   641,     0,   271,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   114,     0,     0,   796,     0,
       0,     0,     0,   642,     0,   114,     0,     0,   114,   271,
     644,   645,   114,   114,     0,     0,   114,     0,     0,     0,
       0,   361,   371,   371,   371,     0,     0,     0,     0,     0,
     601,   603,   114,   646,     0,   209,     0,     0,     0,   260,
     511,   514,   515,   516,   517,   518,   519,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   532,
     533,   534,   535,   536,   537,   538,   539,     0,   209,     0,
     603,     0,     0,   260,     0,     0,   790,     0,   636,   637,
     638,   639,   640,   114,     0,     0,     0,     0,     0,     0,
       0,     0,   641,   846,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   642,   856,     0,     0,   594,   596,   643,
     644,   645,     0,   681,     0,   862,     0,     0,   600,   209,
     209,     0,     0,   109,   209,     0,   594,   596,   209,     0,
       0,     0,   114,   646,   114,     0,   647,     0,     0,     0,
     114,     0,   114,     0,     0,   618,     0,     0,     0,     0,
     623,     0,   791,     0,     0,     0,     0,   109,     0,   209,
       0,     0,   209,     0,     0,     0,     0,   114,   109,   109,
       0,     0,     0,     0,   209,     0,     0,   512,     0,     0,
       0,     0,     0,   110,     0,   110,     0,     0,   271,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   919,
     674,   675,     0,     0,     0,     0,     0,     0,     0,     0,
     925,     0,   209,     0,     0,   930,   745,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,   109,     0,
     110,     0,     0,     0,   272,   109,   271,     0,   635,     0,
     636,   637,   638,   639,   640,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   641,     0,     0,     0,     0,   272,
       0,     0,     0,     0,     0,     0,     0,     0,   109,     0,
     771,   362,   372,   372,   372,   642,   209,     0,     0,     0,
     209,   643,   644,   645,     0,   635,     0,   636,   637,   638,
     639,   640,   209,     0,     0,     0,   807,     0,     0,     0,
       0,   641,     0,     0,     0,   646,     0,     0,   647,     0,
       0,     0,     0,     0,     0,   209,     0,   823,     0,     0,
       0,   648,   642,     0,     0,     0,     0,     0,   643,   644,
     645,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,   113,     0,     0,
       0,     0,   646,     0,   109,   647,     0,     0,     0,     0,
       0,     0,     0,   109,     0,     0,     0,     0,   732,   209,
     635,   857,   636,   637,   638,   639,   640,     0,     0,     0,
     271,     0,     0,   110,     0,     0,   641,     0,     0,     0,
       0,     0,   113,     0,     0,   209,   273,     0,     0,   600,
     809,     0,   812,   814,     0,     0,     0,   642,   819,   821,
       0,     0,     0,   643,   644,   645,   209,   110,     0,     0,
     897,   273,     0,     0,     0,   112,   271,   112,   110,   110,
       0,     0,     0,   363,   373,   373,     0,   646,     0,     0,
     647,     0,     0,     0,     0,     0,     0,     0,   272,     0,
       0,   913,     0,     0,     0,   853,     0,     0,     0,     0,
     812,   814,     0,   819,   821,     0,     0,     0,     0,     0,
     209,     0,   112,     0,     0,     0,     0,     0,   109,     0,
     109,     0,     0,   110,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,   110,   272,  -608,     0,     0,
       0,     0,   109,     0,     0,  -608,  -608,  -608,     0,     0,
    -608,  -608,  -608,     0,  -608,    80,     0,    80,     0,   209,
       0,     0,     0,   898,  -608,     0,     0,     0,   110,     0,
     900,     0,     0,     0,  -608,  -608,     0,  -608,  -608,  -608,
    -608,  -608,     0,     0,     0,   113,     0,     0,     0,   271,
     209,   790,     0,   636,   637,   638,   639,   640,     0,     0,
       0,     0,    80,     0,     0,     0,     0,   641,   900,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,  -608,     0,     0,     0,     0,     0,   642,     0,
     113,   113,     0,     0,   643,   644,   645,     0,     0,   109,
       0,     0,     0,   358,     0,     0,   271,     0,     0,     0,
     273,     0,     0,     0,   110,     0,     0,     0,   646,     0,
       0,   647,     0,   110,     0,   112,     0,  -608,     0,  -608,
       0,     0,   226,  -608,     0,  -608,     0,  -608,     0,     0,
     272,     0,     0,     0,     0,   113,   109,     0,     0,     0,
     113,     0,     0,     0,   109,     0,     0,   113,   273,   112,
       0,   109,   109,     0,     0,     0,     0,     0,     0,     0,
     112,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,   109,   109,     0,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,   209,     0,     0,    80,     0,   371,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,   112,   110,     0,
     110,     0,     0,     0,     0,     0,     0,     0,   109,    80,
       0,     0,     0,     0,     0,   109,   109,     0,     0,   109,
      80,    80,   110,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,     0,     0,   109,   113,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,   318,   319,   320,   321,   322,   323,   324,   325,   371,
     327,   328,   273,     0,     0,     0,   331,   332,     0,   272,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
      80,     0,   961,     0,     0,     0,   109,    80,     0,     0,
     510,     0,     0,     0,     0,     0,     0,   109,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   273,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,   110,
      80,     0,     0,     0,     0,   112,   272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,   109,     0,     0,
       0,     0,     0,   109,     0,   109,     0,     0,     0,     0,
     113,     0,   113,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,   110,   110,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,   110,   110,     0,
       0,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   110,     0,   687,     0,     0,
       0,   273,     0,     0,     0,     0,     0,   372,     0,     0,
     112,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   112,     0,   331,   332,   110,     0,
       0,   789,     0,     0,     0,   110,   110,     0,     0,   110,
       0,   113,     0,     0,     0,     0,     0,     0,   273,     0,
       0,     0,     0,     0,     0,   110,   333,     0,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,     0,     0,
       0,     0,     0,     0,     0,     0,  -242,     0,     0,   372,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
      80,     0,    80,     0,     0,     0,   113,     0,     0,     0,
       0,     0,   962,   113,   113,     0,   110,     0,     0,     0,
       0,     0,     0,     0,    80,     0,     0,   110,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,   113,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   373,
       0,     0,     0,     0,     0,   110,     0,   110,   112,     0,
       0,     0,     0,   110,     0,   110,   112,     0,     0,     0,
       0,     0,     0,   112,   112,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,     0,   113,   113,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,   112,
     112,    80,     0,     0,     0,     0,     0,   113,     0,   510,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   373,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
       0,     0,     0,     0,   963,     0,    80,     0,   113,     0,
     112,     0,     0,    80,    80,     0,     0,   112,   112,   113,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,    80,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,   113,
       0,     0,     0,     0,     0,   113,     0,   113,     0,     0,
       0,   318,  -609,  -609,  -609,  -609,   323,   324,   112,     0,
    -609,  -609,     0,     0,     0,     0,   331,   332,     0,   112,
      80,     0,     0,     0,     0,     0,     0,    80,    80,     0,
       0,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,   112,
       0,     0,     0,     0,     0,   112,     0,   112,     0,     0,
       0,     0,     0,     0,  -608,     4,     0,     5,     6,     7,
       8,     9,     0,     0,   959,    10,    11,     0,    80,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    80,
       0,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,     0,    27,     0,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     0,    41,    42,     0,    43,    44,    45,     0,
      46,    47,     0,     0,     0,     0,     0,    80,     0,    80,
       0,     0,     0,     0,     0,    80,     0,    80,     0,     0,
      48,     0,     0,    49,    50,     0,    51,    52,     0,    53,
       0,     0,    54,    55,    56,    57,    58,    59,    60,    61,
      62,  -590,     0,     0,     0,     0,     0,     0,     0,  -590,
    -590,  -590,     0,     0,  -590,  -590,  -590,     0,  -590,    63,
      64,    65,     0,     0,     0,   742,     0,  -590,  -590,  -590,
    -590,     0,  -608,     0,  -608,     0,     0,     0,  -590,  -590,
       0,  -590,  -590,  -590,  -590,  -590,     0,     0,     0,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,     0,     0,   331,   332,     0,     0,     0,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,     0,     0,  -590,  -590,  -590,     0,   747,  -590,
       0,     0,     0,     0,   333,  -590,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,     0,     0,     0,     0,
       0,  -590,     0,  -103,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,     0,     0,     0,     0,
    -590,  -590,  -590,  -590,  -590,  -490,     0,  -590,  -590,  -590,
       0,  -590,     0,  -490,  -490,  -490,     0,     0,  -490,  -490,
    -490,     0,  -490,     0,     0,     0,     0,     0,     0,   687,
    -490,     0,  -490,  -490,  -490,     0,     0,     0,     0,     0,
       0,     0,  -490,  -490,     0,  -490,  -490,  -490,  -490,  -490,
       0,     0,     0,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,     0,     0,   331,   332,
       0,     0,     0,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,     0,     0,  -490,  -490,
    -490,     0,  -490,  -490,     0,     0,     0,     0,   333,  -490,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
       0,     0,     0,     0,     0,  -490,     0,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
       0,     0,     0,     0,     0,  -490,  -490,  -490,  -490,  -493,
       0,  -490,  -490,  -490,     0,  -490,     0,  -493,  -493,  -493,
       0,     0,  -493,  -493,  -493,     0,  -493,     0,     0,     0,
       0,     0,     0,     0,  -493,     0,  -493,  -493,  -493,     0,
       0,     0,     0,     0,     0,     0,  -493,  -493,     0,  -493,
    -493,  -493,  -493,  -493,     0,     0,     0,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
       0,     0,   331,   332,     0,     0,     0,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
       0,     0,  -493,  -493,  -493,     0,  -493,  -493,     0,     0,
       0,     0,   333,  -493,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,     0,     0,     0,     0,     0,  -493,
       0,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,  -493,
    -493,  -493,  -493,  -493,     0,     0,     0,     0,     0,  -493,
    -493,  -493,  -493,  -591,     0,  -493,  -493,  -493,     0,  -493,
       0,  -591,  -591,  -591,     0,     0,  -591,  -591,  -591,     0,
    -591,     0,     0,     0,     0,     0,     0,     0,     0,  -591,
    -591,  -591,  -591,     0,     0,     0,     0,     0,     0,     0,
    -591,  -591,     0,  -591,  -591,  -591,  -591,  -591,     0,     0,
       0,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,  -609,  -609,     0,     0,   331,   332,     0,     0,
       0,  -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,
    -591,  -591,  -591,  -591,     0,     0,  -591,  -591,  -591,     0,
       0,  -591,     0,     0,     0,     0,     0,  -591,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,     0,     0,
       0,     0,     0,  -591,     0,     0,  -591,  -591,  -591,  -591,
    -591,  -591,  -591,  -591,  -591,  -591,  -591,  -591,     0,     0,
       0,     0,  -591,  -591,  -591,  -591,  -591,  -592,     0,  -591,
    -591,  -591,     0,  -591,     0,  -592,  -592,  -592,     0,     0,
    -592,  -592,  -592,     0,  -592,     0,     0,     0,     0,     0,
       0,     0,     0,  -592,  -592,  -592,  -592,     0,     0,     0,
       0,     0,     0,     0,  -592,  -592,     0,  -592,  -592,  -592,
    -592,  -592,     0,     0,     0,   318,   319,   320,   321,   322,
     323,   324,     0,     0,   327,   328,     0,     0,     0,     0,
     331,   332,     0,     0,     0,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,     0,     0,
    -592,  -592,  -592,     0,     0,  -592,     0,     0,     0,     0,
       0,  -592,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,     0,     0,     0,     0,     0,  -592,     0,     0,
    -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,  -592,
    -592,  -592,     0,     0,     0,     0,  -592,  -592,  -592,  -592,
    -592,  -286,     0,  -592,  -592,  -592,     0,  -592,     0,  -286,
    -286,  -286,     0,     0,  -286,  -286,  -286,     0,  -286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -286,  -286,
    -286,     0,     0,     0,     0,     0,     0,     0,  -286,  -286,
       0,  -286,  -286,  -286,  -286,  -286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,     0,     0,  -286,  -286,  -286,     0,   748,  -286,
       0,     0,     0,     0,     0,  -286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -286,     0,  -105,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,     0,     0,     0,     0,
       0,  -286,  -286,  -286,  -286,  -418,     0,  -286,  -286,  -286,
       0,  -286,     0,  -418,  -418,  -418,     0,     0,  -418,  -418,
    -418,     0,  -418,     0,     0,     0,     0,     0,     0,     0,
       0,  -418,  -418,  -418,     0,     0,     0,     0,     0,     0,
       0,     0,  -418,  -418,     0,  -418,  -418,  -418,  -418,  -418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,     0,     0,  -418,  -418,
    -418,     0,     0,  -418,     0,     0,     0,     0,     0,  -418,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -418,     0,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
       0,     0,     0,     0,  -418,  -418,  -418,  -418,  -418,  -280,
     226,  -418,  -418,  -418,     0,  -418,     0,  -280,  -280,  -280,
       0,     0,  -280,  -280,  -280,     0,  -280,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -280,  -280,  -280,     0,
       0,     0,     0,     0,     0,     0,  -280,  -280,     0,  -280,
    -280,  -280,  -280,  -280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
       0,     0,  -280,  -280,  -280,     0,     0,  -280,     0,     0,
       0,     0,     0,  -280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -280,
       0,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
    -280,  -280,  -280,  -280,     0,     0,     0,     0,     0,  -280,
    -280,  -280,  -280,  -608,     0,  -280,  -280,  -280,     0,  -280,
       0,  -608,  -608,  -608,     0,     0,  -608,  -608,  -608,     0,
    -608,     0,     0,     0,     0,     0,     0,     0,     0,  -608,
    -608,  -608,     0,     0,     0,     0,     0,     0,     0,     0,
    -608,  -608,     0,  -608,  -608,  -608,  -608,  -608,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,
    -608,  -608,  -608,  -608,     0,     0,  -608,  -608,  -608,     0,
       0,  -608,     0,     0,     0,     0,     0,  -608,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -608,     0,  -608,  -608,
    -608,  -608,  -608,  -608,  -608,  -608,  -608,  -608,     0,     0,
       0,     0,  -608,  -608,  -608,  -608,  -608,  -293,   226,  -608,
    -608,  -608,     0,  -608,     0,  -293,  -293,  -293,     0,     0,
    -293,  -293,  -293,     0,  -293,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -293,  -293,     0,     0,     0,     0,
       0,     0,     0,     0,  -293,  -293,     0,  -293,  -293,  -293,
    -293,  -293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,     0,     0,
    -293,  -293,  -293,     0,     0,  -293,     0,     0,     0,     0,
       0,  -293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -293,     0,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,     0,     0,     0,     0,     0,  -293,  -293,  -293,
    -293,  -590,   223,  -293,  -293,  -293,     0,  -293,     0,  -590,
    -590,  -590,     0,     0,     0,  -590,  -590,     0,  -590,     0,
       0,     0,     0,     0,     0,     0,     0,  -590,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -590,  -590,
       0,  -590,  -590,  -590,  -590,  -590,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,  -590,
    -590,  -590,     0,     0,  -590,  -590,  -590,     0,   689,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -103,  -590,     0,  -590,  -590,  -590,  -590,
    -590,  -590,  -590,  -590,  -590,  -590,     0,     0,     0,     0,
    -590,  -590,  -590,  -590,   -94,  -286,     0,  -590,     0,  -590,
       0,  -590,     0,  -286,  -286,  -286,     0,     0,     0,  -286,
    -286,     0,  -286,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -286,  -286,     0,  -286,  -286,  -286,  -286,  -286,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,     0,     0,  -286,  -286,
    -286,     0,   690,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -105,  -286,     0,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
       0,     0,     0,     0,     0,  -286,  -286,  -286,   -96,     0,
       0,  -286,     0,  -286,   247,  -286,     5,     6,     7,     8,
       9,  -608,  -608,  -608,    10,    11,     0,     0,  -608,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    49,    50,     0,    51,    52,     0,    53,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -608,   247,  -608,     5,     6,     7,     8,     9,     0,
       0,  -608,    10,    11,     0,  -608,  -608,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
      49,    50,     0,    51,    52,     0,    53,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -608,
     247,  -608,     5,     6,     7,     8,     9,     0,     0,  -608,
      10,    11,     0,     0,  -608,    12,  -608,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
       0,    51,    52,     0,    53,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     4,     0,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,    63,    64,    65,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,  -608,     0,  -608,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
      49,    50,     0,    51,    52,     0,    53,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,     0,
       0,  -608,     0,     0,     0,     0,     0,     0,     0,  -608,
     247,  -608,     5,     6,     7,     8,     9,     0,     0,  -608,
      10,    11,     0,     0,  -608,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
       0,    51,    52,     0,    53,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,   247,     0,     5,     6,     7,     8,     9,     0,
    -608,  -608,    10,    11,    63,    64,    65,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,  -608,     0,  -608,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
      49,    50,     0,    51,    52,     0,    53,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,   247,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,    63,    64,    65,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,  -608,
       0,  -608,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,   248,    50,     0,    51,    52,     0,    53,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,  -608,
       0,  -608,   247,  -608,     5,     6,     7,     8,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,    28,    29,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     0,     0,
      49,    50,     0,    51,    52,     0,    53,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,  -608,     0,  -608,
     247,  -608,     5,     6,     7,     8,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,    28,    29,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
       0,    51,    52,     0,    53,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    64,    65,     0,     0,  -608,
       0,     0,     0,     0,     0,     0,     0,  -608,   247,  -608,
       5,     6,     7,     8,     9,     0,     0,  -608,    10,    11,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,    64,    65,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,  -608,     0,  -608,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,   199,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   200,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   202,    50,
       0,    51,    52,     0,   203,   204,   205,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   206,    65,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,   230,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     202,    50,     0,    51,    52,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,    64,    65,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,   298,
       0,   299,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,   202,    50,     0,    51,    52,     0,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,     0,    10,    11,    63,    64,
      65,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,   230,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    48,     0,     0,    49,    50,     0,    51,    52,     0,
      53,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    10,    11,
      63,    64,    65,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,   489,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   489,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
       0,     0,     0,   141,   142,   143,   375,   376,   377,   378,
     148,   149,   150,     0,     0,     0,     0,     0,   151,   152,
     153,   154,   379,   380,   381,   382,   159,    37,    38,   383,
      40,     0,     0,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
     170,   171,     0,     0,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,     0,     0,     0,     0,     0,     0,   190,   384,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     0,     0,     0,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,     0,     0,     0,     0,
       0,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     276,   277,   160,   278,     0,     0,     0,     0,     0,     0,
       0,     0,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,     0,   170,   171,     0,     0,   172,   173,   174,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,     0,   188,   189,     0,     0,     0,     0,     0,     0,
     190,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     0,     0,     0,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,     0,
       0,     0,     0,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   232,     0,   160,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,     0,   170,   171,     0,     0,   172,
     173,   174,   175,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,   177,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,     0,   188,   189,     0,     0,     0,     0,
       0,     0,   190,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     0,     0,     0,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
       0,     0,     0,     0,     0,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,   160,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,     0,   170,   171,     0,
       0,   172,   173,   174,   175,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   176,   177,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,     0,   188,   189,     0,     0,
       0,     0,     0,     0,   190,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,     0,
       0,     0,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,     0,     0,     0,     0,     0,   151,   152,   153,
     154,   155,   156,   157,   158,   159,     0,     0,   160,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,     0,   170,
     171,     0,     0,   172,   173,   174,   175,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,     0,   188,   189,
       5,     6,     7,     0,     9,     0,   190,     0,    10,    11,
       0,     0,     0,    12,     0,    13,    14,    15,   237,   238,
      18,    19,     0,     0,     0,     0,     0,   239,   240,   241,
      23,    24,    25,    26,     0,     0,   199,     0,     0,     0,
       0,     0,     0,   264,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,   202,    50,     0,    51,
      52,     0,     0,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,   266,    13,    14,    15,   237,   238,    18,    19,
     267,     0,     0,     0,     0,   239,   240,   241,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,   264,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   265,     0,     0,   202,    50,     0,    51,    52,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     5,     6,     7,     8,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
     266,    13,    14,    15,    16,    17,    18,    19,   505,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    49,    50,     0,    51,    52,     0,    53,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,    64,
      65,    12,     0,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   200,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,   202,    50,     0,    51,    52,     0,
     203,   204,   205,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,     0,    10,    11,
      63,   206,    65,    12,     0,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,     0,    28,    29,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    48,     0,     0,    49,    50,     0,    51,
      52,     0,    53,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,    64,    65,    12,     0,    13,    14,    15,
     237,   238,    18,    19,     0,     0,     0,     0,     0,   239,
     240,   241,    23,    24,    25,    26,     0,     0,   199,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,   200,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   202,    50,
       0,    51,    52,     0,   602,   204,   205,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   206,    65,    12,     0,    13,
      14,    15,   237,   238,    18,    19,     0,     0,     0,     0,
       0,   239,   240,   241,    23,    24,    25,    26,     0,     0,
     199,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,   200,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     202,    50,     0,    51,    52,     0,   203,   204,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,   206,    65,    12,
       0,    13,    14,    15,   237,   238,    18,    19,     0,     0,
       0,     0,     0,   239,   240,   241,    23,    24,    25,    26,
       0,     0,   199,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,   200,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,   202,    50,     0,    51,    52,     0,     0,   204,
     205,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,   206,
      65,    12,     0,    13,    14,    15,   237,   238,    18,    19,
       0,     0,     0,     0,     0,   239,   240,   241,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   200,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,   202,    50,     0,    51,    52,     0,
     602,   204,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      63,   206,    65,    12,     0,    13,    14,    15,   237,   238,
      18,    19,     0,     0,     0,     0,     0,   239,   240,   241,
      23,    24,    25,    26,     0,     0,   199,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   200,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,   202,    50,     0,    51,
      52,     0,     0,   204,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,   206,    65,    12,     0,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,    20,
      21,    22,    23,    24,    25,    26,     0,     0,   199,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   202,    50,
       0,    51,    52,     0,   499,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   206,    65,    12,     0,    13,
      14,    15,   237,   238,    18,    19,     0,     0,     0,     0,
       0,   239,   240,   241,    23,    24,    25,    26,     0,     0,
     199,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     202,    50,     0,    51,    52,     0,   203,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,   206,    65,    12,
       0,    13,    14,    15,   237,   238,    18,    19,     0,     0,
       0,     0,     0,   239,   240,   241,    23,    24,    25,    26,
       0,     0,   199,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,   202,    50,     0,    51,    52,     0,   806,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,   206,
      65,    12,     0,    13,    14,    15,   237,   238,    18,    19,
       0,     0,     0,     0,     0,   239,   240,   241,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,    29,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,    46,    47,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,     0,   202,    50,     0,    51,    52,     0,
     499,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
      63,   206,    65,    12,     0,    13,    14,    15,   237,   238,
      18,    19,     0,     0,     0,     0,     0,   239,   240,   241,
      23,    24,    25,    26,     0,     0,   199,     0,     0,     0,
       0,     0,     0,    29,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   201,     0,     0,   202,    50,     0,    51,
      52,     0,   602,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,    63,   206,    65,    12,     0,    13,    14,    15,
     237,   238,    18,    19,     0,     0,     0,     0,     0,   239,
     240,   241,    23,    24,    25,    26,     0,     0,   199,     0,
       0,     0,     0,     0,     0,    29,     0,     0,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,    41,    42,
       0,    43,    44,    45,     0,    46,    47,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,     0,     0,   202,    50,
       0,    51,    52,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,    63,   206,    65,    12,     0,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    29,     0,     0,
      32,    33,    34,    35,    36,    37,    38,    39,    40,     0,
      41,    42,     0,    43,    44,    45,     0,    46,    47,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     202,    50,     0,    51,    52,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,    63,    64,    65,    12,
       0,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,    20,    21,    22,    23,    24,    25,    26,
       0,     0,   199,     0,     0,     0,     0,     0,     0,    29,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
       0,     0,   202,    50,     0,    51,    52,     0,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,    63,   206,
      65,    12,     0,    13,    14,    15,   237,   238,    18,    19,
       0,     0,     0,     0,     0,   239,   240,   241,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,   264,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   265,     0,     0,   314,    50,     0,    51,    52,     0,
     315,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
     266,    13,    14,    15,   237,   238,    18,    19,     0,     0,
       0,     0,     0,   239,   240,   241,    23,    24,    25,    26,
       0,     0,   199,     0,     0,     0,     0,     0,     0,   264,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   356,
       0,     0,    49,    50,     0,    51,    52,     0,    53,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     5,     6,     7,     0,     9,     0,
       0,     0,    10,    11,     0,     0,     0,    12,   266,    13,
      14,    15,   237,   238,    18,    19,     0,     0,     0,     0,
       0,   239,   240,   241,    23,    24,    25,    26,     0,     0,
     199,     0,     0,     0,     0,     0,     0,   264,     0,     0,
      32,    33,    34,   364,    36,    37,    38,   365,    40,     0,
      41,    42,     0,    43,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   366,     0,     0,   367,     0,     0,
     202,    50,     0,    51,    52,     0,     0,     0,     0,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     5,     6,     7,     0,     9,     0,     0,     0,
      10,    11,     0,     0,     0,    12,   266,    13,    14,    15,
     237,   238,    18,    19,     0,     0,     0,     0,     0,   239,
     240,   241,    23,    24,    25,    26,     0,     0,   199,     0,
       0,     0,     0,     0,     0,   264,     0,     0,    32,    33,
      34,   364,    36,    37,    38,   365,    40,     0,    41,    42,
       0,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   367,     0,     0,   202,    50,
       0,    51,    52,     0,     0,     0,     0,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       5,     6,     7,     0,     9,     0,     0,     0,    10,    11,
       0,     0,     0,    12,   266,    13,    14,    15,   237,   238,
      18,    19,     0,     0,     0,     0,     0,   239,   240,   241,
      23,    24,    25,    26,     0,     0,   199,     0,     0,     0,
       0,     0,     0,   264,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     0,    41,    42,     0,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   265,     0,     0,   314,    50,     0,    51,
      52,     0,     0,     0,     0,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     5,     6,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
       0,    12,   266,    13,    14,    15,   237,   238,    18,    19,
       0,     0,     0,     0,     0,   239,   240,   241,    23,    24,
      25,    26,     0,     0,   199,     0,     0,     0,     0,     0,
       0,   264,     0,     0,    32,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,     0,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   887,     0,     0,   202,    50,     0,    51,    52,     0,
       0,     0,     0,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     5,     6,     7,     0,
       9,     0,     0,     0,    10,    11,     0,     0,     0,    12,
     266,    13,    14,    15,   237,   238,    18,    19,     0,     0,
       0,     0,     0,   239,   240,   241,    23,    24,    25,    26,
       0,     0,   199,     0,     0,     0,     0,     0,     0,   264,
       0,     0,    32,    33,    34,    35,    36,    37,    38,    39,
      40,     0,    41,    42,     0,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   958,
       0,     0,   202,    50,     0,    51,    52,     0,     0,     0,
       0,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,   540,   541,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
     170,   171,     0,     0,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   548,   549,     0,     0,   550,     0,   190,   226,     0,
       0,     0,     0,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,     0,   170,   171,     0,     0,
     172,   173,   174,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   606,   541,     0,
       0,   607,     0,   190,   226,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,     0,   170,   171,     0,     0,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   609,   549,     0,     0,   610,     0,   190,
     226,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,     0,   170,   171,
       0,     0,   172,   173,   174,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   630,
     541,     0,     0,   631,     0,   190,   226,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,     0,   170,   171,     0,     0,   172,   173,
     174,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   633,   549,     0,     0,   634,
       0,   190,   226,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
     170,   171,     0,     0,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   716,   541,     0,     0,   717,     0,   190,   226,     0,
       0,     0,     0,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,     0,   170,   171,     0,     0,
     172,   173,   174,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   719,   549,     0,
       0,   720,     0,   190,   226,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,     0,   170,   171,     0,     0,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   726,   541,     0,     0,   727,     0,   190,
     226,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,     0,   170,   171,
       0,     0,   172,   173,   174,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   587,
     549,     0,     0,   588,     0,   190,   226,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,   166,   167,
     168,   169,     0,     0,   170,   171,     0,     0,   172,   173,
     174,   175,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   989,   541,     0,     0,   990,
       0,   190,   226,     0,     0,     0,     0,     0,     0,   161,
     162,   163,   164,   165,   166,   167,   168,   169,     0,     0,
     170,   171,     0,     0,   172,   173,   174,   175,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,     0,   188,
     189,  1017,   541,     0,     0,  1018,     0,   190,   226,     0,
       0,     0,     0,     0,     0,   161,   162,   163,   164,   165,
     166,   167,   168,   169,     0,     0,   170,   171,     0,     0,
     172,   173,   174,   175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,     0,   188,   189,  1020,   549,     0,
       0,  1021,     0,   190,   226,     0,     0,     0,     0,     0,
       0,   161,   162,   163,   164,   165,   166,   167,   168,   169,
       0,     0,   170,   171,     0,     0,   172,   173,   174,   175,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   587,   549,     0,     0,   588,     0,   190,
     226,     0,     0,     0,     0,     0,     0,   161,   162,   163,
     164,   165,   166,   167,   168,   169,     0,     0,   170,   171,
       0,     0,   172,   173,   174,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,   177,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,     0,   331,   332,     0,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,     0,   188,   189,     0,
       0,     0,     0,     0,     0,   190,     0,     0,     0,     0,
       0,     0,     0,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     230
};

static const yytype_int16 yycheck[] =
{
       2,    55,    78,   562,     2,    28,     4,    51,   345,    16,
      17,     8,   350,    20,    64,     8,    51,    52,    16,    17,
     317,     8,    20,   608,   581,     4,    27,    22,    29,   463,
     219,    28,   258,   317,   660,    28,   262,    49,   769,    93,
     367,    28,   561,   791,   463,   801,   802,   632,   778,    51,
      52,    49,    50,    53,   459,    53,   677,    25,    67,   892,
     704,   591,   592,    13,   708,    89,    64,   859,    55,    13,
      22,    25,   861,    53,   411,     2,    86,     4,    29,    89,
      78,    16,    17,    87,    87,    20,    26,    85,    86,   248,
      61,    89,    90,    91,    92,    85,    37,    38,    78,    27,
     505,    25,    76,    67,   140,   642,    93,     0,   112,   112,
      90,    91,    92,    25,   407,    68,   344,     1,   346,   114,
      56,   135,   415,   129,   461,    89,   140,    25,    13,    25,
      61,    25,   282,   718,   284,   927,   286,    26,   109,    25,
     290,   131,   132,   117,   729,   135,   415,    49,   769,   583,
      13,    13,   985,   139,   885,   314,   662,   778,   664,   110,
     388,   389,   114,    97,   139,   133,    25,   135,   725,   122,
     123,   124,   798,   799,    13,    28,   733,    87,   109,   133,
     449,   135,   410,   133,   412,   119,   978,   976,   138,   129,
     140,   267,   948,   949,   138,   135,   140,   945,   954,   140,
     956,   957,   112,   933,   202,    85,   139,   938,   436,   133,
     138,   213,   140,   743,   648,  1007,   223,   219,   225,   226,
     765,   133,   759,   760,   226,   223,   250,   225,   226,   648,
     567,   229,   116,   231,   462,   133,   248,   133,   236,   133,
     129,   250,   579,   112,    85,   871,    50,   133,   793,   247,
     248,   578,   132,   138,   138,   140,   140,  1013,  1014,  1015,
    1016,   992,   312,   264,   885,    59,    60,   317,   312,   267,
     914,   892,   135,   317,   133,   138,   138,   140,   140,  1035,
     685,    85,    86,    85,    25,    89,   250,   267,   223,   241,
     225,   132,   244,   303,   304,   305,   306,   112,   732,   138,
     202,   140,   314,    85,   302,   303,   304,   305,   306,   307,
     308,   309,   933,   732,   312,   315,   314,   315,   133,   317,
     247,   840,   859,   302,   861,   139,   476,   953,   133,   353,
     132,    87,    61,   483,   236,   315,    87,    85,   345,   112,
     568,   351,   352,   345,   394,   395,   248,   345,   100,   347,
     132,    85,   580,   351,   352,   914,   112,   344,   138,   916,
     140,   112,   868,   869,   985,   564,    87,   873,   366,   875,
     876,   112,   407,    61,   133,   302,   714,    26,   107,   108,
     307,    85,   133,   459,   132,    85,    26,    59,    60,   353,
     927,   928,   133,    85,   346,   136,   394,   395,   132,   140,
     135,   627,   686,    56,   411,   369,   703,   430,    58,   411,
     139,   446,   314,   411,   112,    85,   605,   974,    68,   107,
     108,    25,    52,   410,    87,   229,    56,   231,   132,   505,
      88,   433,   132,   430,  1019,   433,    85,   430,    85,   976,
     132,   978,    87,   430,   442,    85,    96,    97,   435,   112,
       2,   139,     4,    52,   461,    54,    55,    56,    57,   461,
     412,   459,   132,   461,    16,    17,   133,   112,    20,   119,
    1007,    85,    87,   460,   980,   981,   982,   983,    87,   459,
     129,   133,   131,   132,   436,   132,   135,   921,   133,   129,
      89,   131,   132,    37,    38,   135,   498,    49,    50,   303,
     304,   305,   306,   112,   308,   309,   433,   505,   112,    85,
     462,   135,    64,    87,   713,   442,    87,   131,   132,   563,
      61,  1027,   129,   133,   133,   505,    68,    61,   529,   133,
     140,   730,   136,    85,    86,   135,   140,    89,   112,    85,
      52,   112,    54,    55,    56,    57,   547,   351,   352,   135,
     545,   553,   628,   555,   136,   131,   132,   112,   553,   557,
     567,   559,   366,   130,   902,   567,   107,   108,   109,   567,
     908,   133,   579,   107,   108,   109,   599,   579,   140,   566,
      15,   579,    17,   581,   582,   131,   132,   589,   590,   591,
     592,   578,   692,   545,   589,   590,   560,   561,   137,   699,
     133,   553,   599,   605,    26,    61,   599,   608,    87,   685,
     574,    56,   599,    26,    85,   109,   568,   109,    61,   617,
     622,   133,    52,   109,    54,    55,    56,    57,   580,   109,
     628,   632,   831,   112,   833,    68,   686,   589,   590,   689,
     690,    14,    15,    87,   843,   695,   696,    68,   628,   848,
     202,   107,   108,   109,   133,   557,   658,   559,   660,   703,
     131,   132,   999,    85,   107,   108,   109,   133,   112,   621,
     622,   223,    85,   225,   226,   677,    54,   229,    68,   231,
     678,   735,   589,   590,   236,    63,    64,   685,   686,   133,
      61,   689,   690,    83,    84,   247,   248,   695,   696,    85,
      17,   703,   704,   133,   706,   685,   708,   129,    56,   131,
     132,   721,   911,   912,   724,    87,   129,   718,   131,   132,
     138,   136,   135,   721,    94,    25,   724,   725,   729,   119,
     120,   121,   122,   123,   124,   733,   107,   108,   109,   130,
     112,   743,   740,   741,   133,   131,   132,   139,   735,   133,
     302,   303,   304,   305,   306,   307,   308,   309,   722,   139,
     312,   133,   314,   765,    85,   317,   133,   817,   766,   767,
     734,   677,  1000,   133,   973,    61,   678,   133,   582,    65,
     112,    85,    10,    13,    85,     8,   784,    85,   130,   112,
     133,   793,    68,   345,   133,   347,   798,   799,   796,   351,
     352,    52,   133,    85,  1003,    85,  1005,    83,    84,   133,
     131,   132,    52,   617,   366,   133,   796,    52,   133,   817,
     830,   107,   108,   825,   114,    85,   828,   131,   132,   827,
     131,   132,   830,   131,   132,   137,   834,   835,   740,   741,
     838,    68,   394,   395,   120,   121,   122,   123,   124,   131,
     132,   131,   132,    85,    15,   133,   854,   138,   677,   411,
     112,   229,    87,   117,   766,   767,   772,   133,   133,   871,
     776,   131,   132,    10,   133,   133,   840,   133,   842,    88,
     878,   433,   784,     9,   252,    10,   130,   112,   133,    68,
     442,    10,   677,   120,   121,   122,   123,   124,   878,   131,
     132,   130,   133,   901,    83,    84,   130,   905,   133,   461,
     117,   133,   914,   133,   133,   133,   677,   721,   916,   133,
     724,   901,    56,   133,    52,   827,    54,    55,    56,    57,
     130,   133,   834,   835,   133,   133,   838,   133,   117,   118,
     119,   120,   121,   122,   123,   124,    52,    56,   133,   133,
     133,   953,   854,    52,   135,    54,    55,    56,    57,   778,
     135,    89,   781,   433,   951,    92,   964,    95,   966,    90,
    1002,   759,    54,    55,   972,    57,   974,    95,   677,   885,
     945,    63,    64,   889,  1001,    98,   892,   772,   894,    57,
      89,   290,   999,    93,   772,   921,    95,   999,   889,  1001,
    1002,   999,   885,   905,   769,   557,    -1,   559,    -1,    16,
      17,   998,    -1,    20,    -1,   567,    -1,    52,  1019,    54,
      55,    56,    57,    -1,    -1,    -1,   830,   579,    -1,   581,
     582,    40,    41,    42,    43,    44,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    51,    52,    -1,    -1,  1000,   417,
      -1,    -1,    -1,   421,    -1,    -1,   424,    64,    65,    -1,
      -1,    -1,   964,    -1,   966,   617,    -1,    -1,    -1,    -1,
     972,   439,    -1,   892,    -1,   894,   444,    -1,    -1,   985,
      -1,   987,    -1,    -1,    -1,    -1,   992,    -1,   994,    -1,
      -1,    -1,    -1,    -1,   200,    -1,    -1,   203,   204,   205,
     885,    -1,    -1,    -1,   889,    -1,    -1,   892,    -1,   894,
      -1,    -1,    -1,    -1,   933,    -1,   935,    -1,    -1,    -1,
      -1,   940,    -1,  1029,   885,    -1,   678,    -1,   889,    -1,
      -1,   892,    -1,   894,   686,    -1,   504,   689,   690,    -1,
      -1,    -1,    -1,   695,   696,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   985,    -1,   987,   721,
      -1,    -1,   724,   725,    -1,   994,    -1,    -1,    -1,    -1,
      -1,   733,    -1,    -1,    -1,    -1,    -1,    -1,   740,   741,
    1009,    -1,    -1,   200,    -1,    -1,   203,   204,   205,   206,
     985,    -1,   987,     2,    -1,     4,   312,   992,    -1,   994,
    1029,   317,    -1,    -1,   766,   767,   223,    -1,   225,   226,
      -1,    -1,    -1,    -1,   985,    -1,   987,    -1,    -1,    -1,
      -1,   992,   784,   994,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,    -1,  1029,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    68,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   817,    -1,    -1,  1029,    -1,
      -1,    -1,    -1,    89,    -1,   827,    -1,    -1,   830,    78,
      96,    97,   834,   835,    -1,    -1,   838,    -1,    -1,    -1,
      -1,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,
     406,   407,   854,   119,    -1,   312,    -1,    -1,    -1,   415,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,    -1,   345,    -1,
     446,    -1,    -1,   449,    -1,    -1,    52,    -1,    54,    55,
      56,    57,    58,   905,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,   731,   916,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,   752,    -1,    -1,   394,   395,    95,
      96,    97,    -1,   499,    -1,   763,    -1,    -1,   405,   406,
     407,    -1,    -1,   202,   411,    -1,   413,   414,   415,    -1,
      -1,    -1,   964,   119,   966,    -1,   122,    -1,    -1,    -1,
     972,    -1,   974,    -1,    -1,   432,    -1,    -1,    -1,    -1,
     437,    -1,   138,    -1,    -1,    -1,    -1,   236,    -1,   446,
      -1,    -1,   449,    -1,    -1,    -1,    -1,   999,   247,   248,
      -1,    -1,    -1,    -1,   461,    -1,    -1,   563,    -1,    -1,
      -1,    -1,    -1,     2,    -1,     4,    -1,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   847,
     487,   488,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     858,    -1,   499,    -1,    -1,   863,   602,    -1,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,   307,    -1,
      49,    -1,    -1,    -1,    53,   314,   315,    -1,    52,    -1,
      54,    55,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,    -1,
     656,    90,    91,    92,    93,    89,   563,    -1,    -1,    -1,
     567,    95,    96,    97,    -1,    52,    -1,    54,    55,    56,
      57,    58,   579,    -1,    -1,    -1,   682,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,   602,    -1,   703,    -1,    -1,
      -1,   135,    89,    -1,    -1,    -1,    -1,    -1,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     2,    -1,     4,    -1,    -1,
      -1,    -1,   119,    -1,   433,   122,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   442,    -1,    -1,    -1,    -1,   135,   656,
      52,   757,    54,    55,    56,    57,    58,    -1,    -1,    -1,
     459,    -1,    -1,   202,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,   682,    53,    -1,    -1,   686,
     687,    -1,   689,   690,    -1,    -1,    -1,    89,   695,   696,
      -1,    -1,    -1,    95,    96,    97,   703,   236,    -1,    -1,
     806,    78,    -1,    -1,    -1,     2,   505,     4,   247,   248,
      -1,    -1,    -1,    90,    91,    92,    -1,   119,    -1,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,   837,    -1,    -1,    -1,   742,    -1,    -1,    -1,    -1,
     747,   748,    -1,   750,   751,    -1,    -1,    -1,    -1,    -1,
     757,    -1,    49,    -1,    -1,    -1,    -1,    -1,   557,    -1,
     559,    -1,    -1,   302,    -1,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,    -1,    -1,   314,   315,     0,    -1,    -1,
      -1,    -1,   581,    -1,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    17,     2,    -1,     4,    -1,   806,
      -1,    -1,    -1,   810,    27,    -1,    -1,    -1,   347,    -1,
     817,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,   202,    -1,    -1,    -1,   628,
     837,    52,    -1,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    68,   855,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    89,    -1,
     247,   248,    -1,    -1,    95,    96,    97,    -1,    -1,   678,
      -1,    -1,    -1,    90,    -1,    -1,   685,    -1,    -1,    -1,
     267,    -1,    -1,    -1,   433,    -1,    -1,    -1,   119,    -1,
      -1,   122,    -1,   442,    -1,   202,    -1,   130,    -1,   132,
      -1,    -1,   135,   136,    -1,   138,    -1,   140,    -1,    -1,
     459,    -1,    -1,    -1,    -1,   302,   725,    -1,    -1,    -1,
     307,    -1,    -1,    -1,   733,    -1,    -1,   314,   315,   236,
      -1,   740,   741,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     247,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   505,   766,   767,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,    -1,    -1,
      -1,    -1,   999,    -1,    -1,   202,    -1,   796,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,
     307,    -1,    -1,    -1,    -1,    -1,    -1,   314,   557,    -1,
     559,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   827,   236,
      -1,    -1,    -1,    -1,    -1,   834,   835,    -1,    -1,   838,
     247,   248,   581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,   854,   433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,   878,
      77,    78,   459,    -1,    -1,    -1,    83,    84,    -1,   628,
      -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,
     307,    -1,   901,    -1,    -1,    -1,   905,   314,    -1,    -1,
     317,    -1,    -1,    -1,    -1,    -1,    -1,   916,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   505,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,   678,
     347,    -1,    -1,    -1,    -1,   442,   685,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   964,    -1,   966,    -1,    -1,
      -1,    -1,    -1,   972,    -1,   974,    -1,    -1,    -1,    -1,
     557,    -1,   559,    -1,    -1,    -1,   725,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   733,    -1,    -1,    -1,    -1,    -1,
      -1,   740,   741,    -1,   581,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   433,   766,   767,    -1,
      -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   784,    -1,    44,    -1,    -1,
      -1,   628,    -1,    -1,    -1,    -1,    -1,   796,    -1,    -1,
     557,    -1,   559,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   581,    -1,    83,    84,   827,    -1,
      -1,   668,    -1,    -1,    -1,   834,   835,    -1,    -1,   838,
      -1,   678,    -1,    -1,    -1,    -1,    -1,    -1,   685,    -1,
      -1,    -1,    -1,    -1,    -1,   854,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,   878,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   725,    -1,
     557,    -1,   559,    -1,    -1,    -1,   733,    -1,    -1,    -1,
      -1,    -1,   901,   740,   741,    -1,   905,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   581,    -1,    -1,   916,    -1,    -1,
      -1,   678,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   766,
     767,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   796,
      -1,    -1,    -1,    -1,    -1,   964,    -1,   966,   725,    -1,
      -1,    -1,    -1,   972,    -1,   974,   733,    -1,    -1,    -1,
      -1,    -1,    -1,   740,   741,    -1,    -1,    -1,    -1,    -1,
     827,    -1,    -1,    -1,    -1,    -1,    -1,   834,   835,    -1,
      -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   766,
     767,   678,    -1,    -1,    -1,    -1,    -1,   854,    -1,   686,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   878,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   725,    -1,
      -1,    -1,    -1,    -1,   901,    -1,   733,    -1,   905,    -1,
     827,    -1,    -1,   740,   741,    -1,    -1,   834,   835,   916,
      -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,    -1,   766,
     767,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   964,    -1,   966,
      -1,    -1,    -1,    -1,    -1,   972,    -1,   974,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,   905,    -1,
      77,    78,    -1,    -1,    -1,    -1,    83,    84,    -1,   916,
     827,    -1,    -1,    -1,    -1,    -1,    -1,   834,   835,    -1,
      -1,   838,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   854,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   964,    -1,   966,
      -1,    -1,    -1,    -1,    -1,   972,    -1,   974,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,   901,    11,    12,    -1,   905,    -1,
      16,    -1,    18,    19,    20,    21,    22,    23,    24,   916,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    -1,
      66,    67,    -1,    -1,    -1,    -1,    -1,   964,    -1,   966,
      -1,    -1,    -1,    -1,    -1,   972,    -1,   974,    -1,    -1,
      86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,
      -1,    -1,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,   125,
     126,   127,    -1,    -1,    -1,    44,    -1,    26,    27,    28,
      29,    -1,   138,    -1,   140,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    85,    -1,    87,    88,
      -1,    -1,    -1,    -1,   113,    94,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,     0,    -1,   136,   137,   138,
      -1,   140,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      25,    -1,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      85,    -1,    87,    88,    -1,    -1,    -1,    -1,   113,    94,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,     0,
      -1,   136,   137,   138,    -1,   140,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    85,    -1,    87,    88,    -1,    -1,
      -1,    -1,   113,    94,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,   110,
      -1,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,     0,    -1,   136,   137,   138,    -1,   140,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,     0,    -1,   136,
     137,   138,    -1,   140,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,   129,   130,   131,   132,
     133,     0,    -1,   136,   137,   138,    -1,   140,    -1,     8,
       9,    10,    -1,    -1,    13,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    85,    -1,    87,    88,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,   130,   131,   132,   133,     0,    -1,   136,   137,   138,
      -1,   140,    -1,     8,     9,    10,    -1,    -1,    13,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      85,    -1,    -1,    88,    -1,    -1,    -1,    -1,    -1,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,     0,
     135,   136,   137,   138,    -1,   140,    -1,     8,     9,    10,
      -1,    -1,    13,    14,    15,    -1,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      -1,    -1,    83,    84,    85,    -1,    -1,    88,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,
      -1,    -1,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,   130,
     131,   132,   133,     0,    -1,   136,   137,   138,    -1,   140,
      -1,     8,     9,    10,    -1,    -1,    13,    14,    15,    -1,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    -1,    -1,    83,    84,    85,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,   133,     0,   135,   136,
     137,   138,    -1,   140,    -1,     8,     9,    10,    -1,    -1,
      13,    14,    15,    -1,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,    -1,    -1,    -1,    -1,   130,   131,   132,
     133,     0,   135,   136,   137,   138,    -1,   140,    -1,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    -1,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    85,    -1,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   112,   113,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,     0,    -1,   136,    -1,   138,
      -1,   140,    -1,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    -1,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    -1,    -1,    83,    84,
      85,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   112,   113,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,    -1,    -1,    -1,    -1,   130,   131,   132,   133,    -1,
      -1,   136,    -1,   138,     1,   140,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,     1,   140,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
       1,   140,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,   138,    -1,   140,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
       1,   140,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,   138,    -1,   140,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,   138,
      -1,   140,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,   138,     1,   140,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
       1,   140,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,   126,   127,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,     1,   140,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,   138,    -1,   140,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,   140,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,   138,
      -1,   140,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,   140,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,   138,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,   126,   127,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    -1,    -1,    -1,    -1,    -1,    -1,   134,   135,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    -1,   126,   127,    -1,    -1,    -1,    -1,    -1,    -1,
     134,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,    -1,    -1,    -1,    -1,
      -1,    -1,   134,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    77,    78,    -1,
      -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,   126,   127,    -1,    -1,
      -1,    -1,    -1,    -1,   134,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    -1,    77,
      78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,    -1,   126,   127,
       3,     4,     5,    -1,     7,    -1,   134,    -1,    11,    12,
      -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,   125,    18,    19,    20,    21,    22,    23,    24,
     133,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
     125,    18,    19,    20,    21,    22,    23,    24,   133,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    96,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    96,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    -1,    96,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    95,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    95,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
     125,   126,   127,    16,    -1,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    66,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    95,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,   125,   126,   127,    16,    -1,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    66,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,   125,   126,   127,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    66,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,   125,   126,   127,    16,
      -1,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    66,
      67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,   125,   126,
     127,    16,    -1,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      95,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
     125,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    95,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,    -1,
      -1,    -1,    11,    12,    -1,    -1,    -1,    16,   125,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    -1,    -1,    -1,    -1,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    16,   125,    18,    19,    20,
      21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    89,    90,
      -1,    92,    93,    -1,    -1,    -1,    -1,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    16,   125,    18,    19,    20,    21,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    89,    90,    -1,    92,
      93,    -1,    -1,    -1,    -1,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    16,   125,    18,    19,    20,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    89,    90,    -1,    92,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    16,
     125,    18,    19,    20,    21,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    90,    -1,    92,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    52,    53,    -1,    -1,    56,    -1,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,    52,    53,    -1,
      -1,    56,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,    52,    53,    -1,    -1,    56,    -1,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    52,
      53,    -1,    -1,    56,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,    52,    53,    -1,    -1,    56,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    52,    53,    -1,    -1,    56,    -1,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,    52,    53,    -1,
      -1,    56,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,    52,    53,    -1,    -1,    56,    -1,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    52,
      53,    -1,    -1,    56,    -1,   134,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    77,    78,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,    52,    53,    -1,    -1,    56,
      -1,   134,   135,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      77,    78,    -1,    -1,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,    52,    53,    -1,    -1,    56,    -1,   134,   135,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    77,    78,    -1,    -1,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,    52,    53,    -1,
      -1,    56,    -1,   134,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    -1,    77,    78,    -1,    -1,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,    52,    53,    -1,    -1,    56,    -1,   134,
     135,    -1,    -1,    -1,    -1,    -1,    -1,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    77,    78,
      -1,    -1,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    -1,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   113,    -1,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   142,   143,     0,     1,     3,     4,     5,     6,     7,
      11,    12,    16,    18,    19,    20,    21,    22,    23,    24,
      30,    31,    32,    33,    34,    35,    36,    39,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    59,    60,    62,    63,    64,    66,    67,    86,    89,
      90,    92,    93,    95,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   125,   126,   127,   144,   145,   146,   151,
     153,   154,   156,   157,   160,   161,   163,   164,   165,   167,
     168,   178,   192,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   244,   245,   255,   256,   257,   258,
     259,   260,   261,   264,   266,   267,   278,   280,   281,   282,
     283,   284,   285,   286,   318,   329,   146,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      56,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      77,    78,    81,    82,    83,    84,    95,    96,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   126,   127,
     134,   171,   172,   173,   174,   176,   177,   278,   280,    39,
      58,    86,    89,    95,    96,    97,   126,   160,   168,   178,
     180,   185,   188,   190,   209,   282,   283,   285,   286,   316,
     317,   185,   185,   135,   186,   187,   135,   182,   186,   135,
     140,   323,    54,   173,   323,   147,   129,    21,    22,    30,
      31,    32,   178,   209,   318,   178,    56,     1,    89,   149,
     150,   151,   162,   163,   329,   154,   181,   190,   316,   329,
     180,   315,   316,   329,    46,    86,   125,   133,   167,   192,
     209,   282,   283,   286,   237,   238,    54,    55,    57,   171,
     271,   279,   270,   271,   272,   139,   262,   139,   268,   139,
     265,   139,   269,    59,    60,   156,   178,   178,   138,   140,
     322,   327,   328,    40,    41,    42,    43,    44,    37,    38,
      28,   242,   112,   133,    89,    95,   164,   112,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    84,   113,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,    85,   131,   132,   193,   154,   155,
     155,   196,   198,   155,   322,   328,    86,   161,   168,   209,
     225,   282,   283,   286,    52,    56,    83,    86,   169,   170,
     209,   282,   283,   286,   170,    33,    34,    35,    36,    49,
      50,    51,    52,    56,   135,   171,   284,   313,    85,   132,
      26,   129,   246,   258,    87,    87,   182,   186,   246,   133,
     180,    56,   180,   180,   180,   112,    88,   133,   189,   329,
      85,   131,   132,    87,    87,   133,   189,   185,   323,   324,
     185,   184,   185,   329,   154,   324,   154,    54,    63,    64,
     152,   135,   179,   129,   149,    85,   132,    87,   151,   162,
     136,   322,   328,   324,   194,   137,   133,   140,   326,   133,
     326,   130,   326,   323,    56,    59,    60,   164,   166,   133,
      85,   131,   132,   239,    61,   107,   108,   109,   273,   109,
     273,   109,    65,   273,   109,   109,   263,   273,   109,    61,
     109,   109,   109,   263,   109,    61,   109,    68,    68,   138,
     146,   155,   155,   155,   155,   151,   154,   154,   243,    95,
     156,   180,   190,   191,   162,   133,   167,   133,   153,   156,
     168,   178,   180,   191,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
      52,    53,    56,   176,   182,   319,   320,   184,    52,    53,
      56,   176,   182,   319,   148,   149,    13,   221,   327,   221,
     155,   155,   322,    17,   249,    56,    85,   131,   132,    25,
     154,    52,    56,   169,     1,   116,   287,   327,    85,   131,
     132,   205,   314,   206,    85,   132,   321,    52,    56,   319,
     319,   248,   247,   156,   178,   156,   178,    94,   158,   175,
     178,   180,    95,   180,   188,   316,    52,    56,   184,    52,
      56,   317,   324,   136,   324,   324,   173,   195,   178,   144,
     130,   319,   319,   178,   324,   151,   324,   316,   133,   166,
      52,    56,   184,    52,    56,    52,    54,    55,    56,    57,
      58,    68,    89,    95,    96,    97,   119,   122,   135,   240,
     290,   292,   293,   294,   295,   296,   297,   298,   301,   302,
     303,   304,   307,   308,   309,   310,   311,   275,   274,   139,
     273,   139,   139,   139,   178,   178,    76,   117,   232,   233,
     329,   180,   133,   324,   166,   133,   112,    44,   323,    87,
      87,   182,   186,   323,   325,    87,    87,   182,   183,   186,
     329,    10,   220,     8,   251,   329,   149,    13,   149,    27,
     222,   327,   222,   249,   190,   220,    52,    56,   184,    52,
      56,   200,   203,   327,   288,   202,    52,    56,   169,   184,
     148,   154,   135,   289,   292,   207,   183,   186,   183,   186,
     232,   232,    44,   159,   173,   180,   189,    87,    87,   325,
      87,    87,   154,   130,   326,   164,   325,   112,    52,    89,
      95,   226,   227,   228,   294,   292,    29,   110,   241,   133,
     291,   180,   133,   312,   329,    52,   133,   312,   133,   291,
      52,   133,   291,    52,   276,    54,    55,    57,   277,   286,
      52,   138,   229,   231,   234,   296,   297,   299,   300,   303,
     305,   306,   309,   311,   329,   149,    95,   180,   166,   178,
     114,   156,   178,   156,   178,   158,   137,    87,   156,   178,
     156,   178,   158,   180,   191,   252,   329,    15,   224,   329,
      14,   223,   224,   224,   197,   199,   220,   133,   221,   325,
     155,   327,   155,   148,   325,   220,   324,   292,   148,   327,
     171,   149,   149,   178,   232,    87,   324,   180,   228,   133,
     294,   133,   324,   234,   149,   149,   290,   295,   307,   309,
     298,   303,   311,   296,   304,   309,   296,   149,   112,    52,
     235,   236,   293,   234,   117,   133,   230,    86,   209,   133,
     312,   312,   133,   230,   133,   230,    10,   180,   178,   156,
     178,    88,   253,   329,   149,     9,   254,   329,   155,   220,
     220,   149,   149,   180,   149,   222,   204,   327,   220,   324,
     220,   208,    10,   130,   149,   324,   227,   133,    95,   226,
     324,    10,   130,   133,   291,   133,   291,   312,   133,   291,
     133,   291,   291,   130,   209,   133,   117,   229,   306,   309,
      56,    85,   299,   303,   296,   305,   309,   296,    86,   168,
     209,   282,   283,   286,   221,   149,   221,   220,   220,   224,
     249,   250,   201,   148,   289,   130,   133,   227,   133,   294,
     296,   309,   296,   296,   236,   133,   230,   133,   230,    52,
      56,   312,   133,   230,   133,   230,   230,    56,    85,   131,
     132,   149,   149,   149,   220,   148,   227,   133,   291,   133,
     291,   291,   291,   296,   309,   296,   296,    52,    56,   184,
      52,    56,   251,   223,   220,   220,   227,   296,   230,   133,
     230,   230,   230,   325,   291,   296,   230
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (parser_state, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, parser_state)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, parser_state); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rb_parser_state* parser_state)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    rb_parser_state* parser_state;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (parser_state);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, rb_parser_state* parser_state)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, parser_state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    rb_parser_state* parser_state;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, parser_state);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, rb_parser_state* parser_state)
#else
static void
yy_reduce_print (yyvsp, yyrule, parser_state)
    YYSTYPE *yyvsp;
    int yyrule;
    rb_parser_state* parser_state;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , parser_state);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, parser_state); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, rb_parser_state* parser_state)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, parser_state)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    rb_parser_state* parser_state;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (parser_state);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (rb_parser_state* parser_state);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (rb_parser_state* parser_state)
#else
int
yyparse (parser_state)
    rb_parser_state* parser_state;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 552 "grammar.y"
    {
                    lex_state = EXPR_BEG;
                    local_push(0);
                    class_nest = 0;
                  ;}
    break;

  case 3:
#line 558 "grammar.y"
    {
                    if((yyvsp[(2) - (2)].node) && !compile_for_eval) {
                      /* last expression should not be void */
                      if(nd_type((yyvsp[(2) - (2)].node)) != NODE_BLOCK) {
                        void_expr((yyvsp[(2) - (2)].node));
                      } else {
                        NODE *node = (yyvsp[(2) - (2)].node);
                        while(node->nd_next) {
                          node = node->nd_next;
                        }
                        void_expr(node->nd_head);
                      }
                    }
                    top_node = block_append(top_node, (yyvsp[(2) - (2)].node));
                    class_nest = 0;
                    local_pop();
                  ;}
    break;

  case 4:
#line 578 "grammar.y"
    {
                    void_stmts((yyvsp[(1) - (2)].node));
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                  ;}
    break;

  case 5:
#line 585 "grammar.y"
    {
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 6:
#line 589 "grammar.y"
    {
                    (yyval.node) = newline_node((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 7:
#line 593 "grammar.y"
    {
                    (yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
                  ;}
    break;

  case 8:
#line 597 "grammar.y"
    {
                    (yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 10:
#line 604 "grammar.y"
    {
                    if(in_def || in_single) {
                      yy_error("BEGIN in method");
                    }
                  ;}
    break;

  case 11:
#line 610 "grammar.y"
    {
                    (yyval.node) = NEW_PREEXE((yyvsp[(4) - (5)].node));
                  ;}
    break;

  case 12:
#line 619 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (4)].node);
                    if((yyvsp[(2) - (4)].node)) {
                      (yyval.node) = NEW_RESCUE((yyvsp[(1) - (4)].node), (yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
                    } else if((yyvsp[(3) - (4)].node)) {
                      rb_warn("else without rescue is useless");
                      (yyval.node) = block_append((yyval.node), (yyvsp[(3) - (4)].node));
                    }
                    if((yyvsp[(4) - (4)].node)) {
                      if((yyval.node)) {
                        (yyval.node) = NEW_ENSURE((yyval.node), (yyvsp[(4) - (4)].node));
                      } else {
                        (yyval.node) = block_append((yyvsp[(4) - (4)].node), NEW_NIL());
                      }
                    }
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 13:
#line 639 "grammar.y"
    {
                    void_stmts((yyvsp[(1) - (2)].node));
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                  ;}
    break;

  case 14:
#line 646 "grammar.y"
    {
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 15:
#line 650 "grammar.y"
    {
                    (yyval.node) = newline_node((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 16:
#line 654 "grammar.y"
    {
                    (yyval.node) = block_append((yyvsp[(1) - (3)].node), newline_node((yyvsp[(3) - (3)].node)));
                  ;}
    break;

  case 17:
#line 658 "grammar.y"
    {
                    (yyval.node) = remove_begin((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 18:
#line 663 "grammar.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 19:
#line 664 "grammar.y"
    {
                    (yyval.node) = NEW_ALIAS((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 20:
#line 668 "grammar.y"
    {
                    (yyval.node) = NEW_VALIAS((yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 21:
#line 672 "grammar.y"
    {
                    char buf[2];
                    buf[0] = '$';
                    buf[1] = (char)(yyvsp[(3) - (3)].node)->nd_nth;
                    (yyval.node) = NEW_VALIAS((yyvsp[(2) - (3)].id), parser_intern2(buf, 2));
                  ;}
    break;

  case 22:
#line 679 "grammar.y"
    {
                    yy_error("can't make alias for the number variables");
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 23:
#line 684 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 24:
#line 688 "grammar.y"
    {
                    (yyval.node) = NEW_IF(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
                    fixpos((yyval.node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 25:
#line 693 "grammar.y"
    {
                    (yyval.node) = NEW_UNLESS(cond((yyvsp[(3) - (3)].node)), remove_begin((yyvsp[(1) - (3)].node)), 0);
                    fixpos((yyval.node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 26:
#line 698 "grammar.y"
    {
                    if((yyvsp[(1) - (3)].node) && nd_type((yyvsp[(1) - (3)].node)) == NODE_BEGIN) {
                      (yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node)->nd_body, 0);
                    } else {
                      (yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node), 1);
                    }
                  ;}
    break;

  case 27:
#line 706 "grammar.y"
    {
                    if((yyvsp[(1) - (3)].node) && nd_type((yyvsp[(1) - (3)].node)) == NODE_BEGIN) {
                      (yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node)->nd_body, 0);
                    } else {
                      (yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (3)].node)), (yyvsp[(1) - (3)].node), 1);
                    }
                  ;}
    break;

  case 28:
#line 714 "grammar.y"
    {
                    NODE *resq = NEW_RESBODY(0, remove_begin((yyvsp[(3) - (3)].node)), 0);
                    (yyval.node) = NEW_RESCUE(remove_begin((yyvsp[(1) - (3)].node)), resq, 0);
                  ;}
    break;

  case 29:
#line 719 "grammar.y"
    {
                    if(in_def || in_single) {
                      rb_warn("END in method; use at_exit");
                    }

                    (yyval.node) = NEW_POSTEXE(NEW_NODE(NODE_SCOPE,
                            0 /* tbl */, (yyvsp[(3) - (4)].node) /* body */, 0 /* args */));
                  ;}
    break;

  case 31:
#line 729 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyvsp[(1) - (3)].node)->nd_value = ((yyvsp[(1) - (3)].node)->nd_head) ? NEW_TO_ARY((yyvsp[(3) - (3)].node)) : NEW_ARRAY((yyvsp[(3) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 32:
#line 735 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    if((yyvsp[(1) - (3)].node)) {
                      ID vid = (yyvsp[(1) - (3)].node)->nd_vid;
                      if((yyvsp[(2) - (3)].id) == tOROP) {
                        (yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
                        (yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].node));
                        if(is_asgn_or_id(vid)) {
                          (yyval.node)->nd_aid = vid;
                        }
                      } else if((yyvsp[(2) - (3)].id) == tANDOP) {
                        (yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
                        (yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].node));
                      } else {
                        (yyval.node) = (yyvsp[(1) - (3)].node);
                        (yyval.node)->nd_value = call_bin_op(gettable(vid), (yyvsp[(2) - (3)].id), (yyvsp[(3) - (3)].node));
                      }
                    } else {
                      (yyval.node) = NEW_BEGIN(0);
                    }
                  ;}
    break;

  case 33:
#line 757 "grammar.y"
    {
                    NODE *args;

                    value_expr((yyvsp[(6) - (6)].node));
                    if(!(yyvsp[(3) - (6)].node)) (yyvsp[(3) - (6)].node) = NEW_ZARRAY();
                    args = arg_concat((yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
                    if((yyvsp[(5) - (6)].id) == tOROP) {
                      (yyvsp[(5) - (6)].id) = 0;
                    } else if((yyvsp[(5) - (6)].id) == tANDOP) {
                      (yyvsp[(5) - (6)].id) = 1;
                    } else {
                      (yyvsp[(5) - (6)].id) = convert_op((yyvsp[(5) - (6)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN1((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].id), args);
                    fixpos((yyval.node), (yyvsp[(1) - (6)].node));
                  ;}
    break;

  case 34:
#line 774 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 35:
#line 787 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 36:
#line 800 "grammar.y"
    {
                    yy_error("constant re-assignment");
                    (yyval.node) = 0;
                  ;}
    break;

  case 37:
#line 805 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 38:
#line 818 "grammar.y"
    {
                    rb_backref_error((yyvsp[(1) - (3)].node));
                    (yyval.node) = 0;
                  ;}
    break;

  case 39:
#line 823 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 40:
#line 828 "grammar.y"
    {
                    (yyvsp[(1) - (3)].node)->nd_value = ((yyvsp[(1) - (3)].node)->nd_head) ? NEW_TO_ARY((yyvsp[(3) - (3)].node)) : NEW_ARRAY((yyvsp[(3) - (3)].node));
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 41:
#line 833 "grammar.y"
    {
                    (yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 43:
#line 840 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 44:
#line 845 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 46:
#line 852 "grammar.y"
    {
                    (yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 47:
#line 856 "grammar.y"
    {
                    (yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 48:
#line 860 "grammar.y"
    {
                    (yyval.node) = call_uni_op(cond((yyvsp[(3) - (3)].node)), '!');
                  ;}
    break;

  case 49:
#line 864 "grammar.y"
    {
                    (yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
                  ;}
    break;

  case 51:
#line 871 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (1)].node));
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                    if(!(yyval.node)) (yyval.node) = NEW_NIL();
                  ;}
    break;

  case 55:
#line 884 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 56:
#line 888 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 57:
#line 894 "grammar.y"
    {
                    (yyvsp[(1) - (1)].vars) = bv_push();
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 58:
#line 901 "grammar.y"
    {
                    (yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
                    nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
                    bv_pop((yyvsp[(1) - (5)].vars));
                  ;}
    break;

  case 59:
#line 909 "grammar.y"
    {
                    (yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (2)].node));
                 ;}
    break;

  case 60:
#line 914 "grammar.y"
    {
                    block_dup_check((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].node));
                    (yyvsp[(3) - (3)].node)->nd_iter = NEW_FCALL((yyvsp[(1) - (3)].id), (yyvsp[(2) - (3)].node));
                    (yyval.node) = (yyvsp[(3) - (3)].node);
                    fixpos((yyval.node), (yyvsp[(2) - (3)].node));
                 ;}
    break;

  case 61:
#line 921 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 62:
#line 926 "grammar.y"
    {
                    block_dup_check((yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
                    (yyvsp[(5) - (5)].node)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].node));
                    (yyval.node) = (yyvsp[(5) - (5)].node);
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                 ;}
    break;

  case 63:
#line 933 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 64:
#line 938 "grammar.y"
    {
                    block_dup_check((yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
                    (yyvsp[(5) - (5)].node)->nd_iter = NEW_CALL((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].node));
                    (yyval.node) = (yyvsp[(5) - (5)].node);
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 65:
#line 945 "grammar.y"
    {
                    (yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 66:
#line 950 "grammar.y"
    {
                    (yyval.node) = new_yield((yyvsp[(2) - (2)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 67:
#line 955 "grammar.y"
    {
                    (yyval.node) = NEW_RETURN(ret_args((yyvsp[(2) - (2)].node)));
                  ;}
    break;

  case 68:
#line 959 "grammar.y"
    {
                    (yyval.node) = NEW_BREAK(ret_args((yyvsp[(2) - (2)].node)));
                  ;}
    break;

  case 69:
#line 963 "grammar.y"
    {
                    (yyval.node) = NEW_NEXT(ret_args((yyvsp[(2) - (2)].node)));
                  ;}
    break;

  case 71:
#line 970 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 73:
#line 977 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(NEW_LIST((yyvsp[(2) - (3)].node)), 0);
                  ;}
    break;

  case 74:
#line 983 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
                  ;}
    break;

  case 75:
#line 987 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(list_append((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)), 0);
                  ;}
    break;

  case 76:
#line 991 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 77:
#line 995 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)));
                  ;}
    break;

  case 78:
#line 999 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (2)].node), -1);
                  ;}
    break;

  case 79:
#line 1003 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), NEW_POSTARG(-1, (yyvsp[(4) - (4)].node)));
                  ;}
    break;

  case 80:
#line 1007 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 81:
#line 1011 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, NEW_POSTARG((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].node)));
                  ;}
    break;

  case 82:
#line 1015 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, -1);
                  ;}
    break;

  case 83:
#line 1019 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
                  ;}
    break;

  case 85:
#line 1026 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 86:
#line 1032 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (2)].node));
                  ;}
    break;

  case 87:
#line 1036 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                  ;}
    break;

  case 88:
#line 1042 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 89:
#line 1046 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 90:
#line 1052 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 91:
#line 1056 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 92:
#line 1060 "grammar.y"
    {
                    (yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
                  ;}
    break;

  case 93:
#line 1064 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 94:
#line 1068 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 95:
#line 1072 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 96:
#line 1076 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("dynamic constant assignment");
                    (yyval.node) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id)));
                  ;}
    break;

  case 97:
#line 1082 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("dynamic constant assignment");
                    (yyval.node) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].id)));
                  ;}
    break;

  case 98:
#line 1088 "grammar.y"
    {
                    rb_backref_error((yyvsp[(1) - (1)].node));
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 99:
#line 1095 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                    if(!(yyval.node)) (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 100:
#line 1100 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                    if(!(yyval.node)) (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 101:
#line 1105 "grammar.y"
    {
                    (yyval.node) = aryset((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node));
                  ;}
    break;

  case 102:
#line 1109 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 103:
#line 1113 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 104:
#line 1117 "grammar.y"
    {
                    (yyval.node) = attrset((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 105:
#line 1121 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("dynamic constant assignment");
                    (yyval.node) = NEW_CDECL(0, 0, NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id)));
                  ;}
    break;

  case 106:
#line 1127 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("dynamic constant assignment");
                    (yyval.node) = NEW_CDECL(0, 0, NEW_COLON3((yyvsp[(2) - (2)].id)));
                  ;}
    break;

  case 107:
#line 1133 "grammar.y"
    {
                    rb_backref_error((yyvsp[(1) - (1)].node));
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 108:
#line 1140 "grammar.y"
    {
                    yy_error("class/module name must be CONSTANT");
                  ;}
    break;

  case 110:
#line 1147 "grammar.y"
    {
                    (yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 111:
#line 1151 "grammar.y"
    {
                    (yyval.node) = NEW_COLON2(0, (yyval.node));
                  ;}
    break;

  case 112:
#line 1155 "grammar.y"
    {
                    (yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 116:
#line 1164 "grammar.y"
    {
                    lex_state = EXPR_ENDFN;
                    (yyval.id) = convert_op((yyvsp[(1) - (1)].id));
                  ;}
    break;

  case 117:
#line 1169 "grammar.y"
    {
                    lex_state = EXPR_ENDFN;
                    (yyval.id) = (yyvsp[(1) - (1)].id);
                  ;}
    break;

  case 120:
#line 1180 "grammar.y"
    {
                    (yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
                  ;}
    break;

  case 122:
#line 1187 "grammar.y"
    {
                    (yyval.node) = NEW_UNDEF((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 123:
#line 1190 "grammar.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 124:
#line 1191 "grammar.y"
    {
                    (yyval.node) = block_append((yyvsp[(1) - (4)].node), NEW_UNDEF((yyvsp[(4) - (4)].node)));
                  ;}
    break;

  case 125:
#line 1196 "grammar.y"
    { (yyval.id) = '|'; ;}
    break;

  case 126:
#line 1197 "grammar.y"
    { (yyval.id) = '^'; ;}
    break;

  case 127:
#line 1198 "grammar.y"
    { (yyval.id) = '&'; ;}
    break;

  case 128:
#line 1199 "grammar.y"
    { (yyval.id) = tCMP; ;}
    break;

  case 129:
#line 1200 "grammar.y"
    { (yyval.id) = tEQ; ;}
    break;

  case 130:
#line 1201 "grammar.y"
    { (yyval.id) = tEQQ; ;}
    break;

  case 131:
#line 1202 "grammar.y"
    { (yyval.id) = tMATCH; ;}
    break;

  case 132:
#line 1203 "grammar.y"
    { (yyval.id) = tNMATCH; ;}
    break;

  case 133:
#line 1204 "grammar.y"
    { (yyval.id) = '>'; ;}
    break;

  case 134:
#line 1205 "grammar.y"
    { (yyval.id) = tGEQ; ;}
    break;

  case 135:
#line 1206 "grammar.y"
    { (yyval.id) = '<'; ;}
    break;

  case 136:
#line 1207 "grammar.y"
    { (yyval.id) = tLEQ; ;}
    break;

  case 137:
#line 1208 "grammar.y"
    { (yyval.id) = tNEQ; ;}
    break;

  case 138:
#line 1209 "grammar.y"
    { (yyval.id) = tLSHFT; ;}
    break;

  case 139:
#line 1210 "grammar.y"
    { (yyval.id) = tRSHFT; ;}
    break;

  case 140:
#line 1211 "grammar.y"
    { (yyval.id) = '+'; ;}
    break;

  case 141:
#line 1212 "grammar.y"
    { (yyval.id) = '-'; ;}
    break;

  case 142:
#line 1213 "grammar.y"
    { (yyval.id) = '*'; ;}
    break;

  case 143:
#line 1214 "grammar.y"
    { (yyval.id) = '*'; ;}
    break;

  case 144:
#line 1215 "grammar.y"
    { (yyval.id) = '/'; ;}
    break;

  case 145:
#line 1216 "grammar.y"
    { (yyval.id) = '%'; ;}
    break;

  case 146:
#line 1217 "grammar.y"
    { (yyval.id) = tPOW; ;}
    break;

  case 147:
#line 1218 "grammar.y"
    { (yyval.id) = tDSTAR; ;}
    break;

  case 148:
#line 1219 "grammar.y"
    { (yyval.id) = '!'; ;}
    break;

  case 149:
#line 1220 "grammar.y"
    { (yyval.id) = '~'; ;}
    break;

  case 150:
#line 1221 "grammar.y"
    { (yyval.id) = tUPLUS; ;}
    break;

  case 151:
#line 1222 "grammar.y"
    { (yyval.id) = tUMINUS; ;}
    break;

  case 152:
#line 1223 "grammar.y"
    { (yyval.id) = tAREF; ;}
    break;

  case 153:
#line 1224 "grammar.y"
    { (yyval.id) = tASET; ;}
    break;

  case 154:
#line 1225 "grammar.y"
    { (yyval.id) = '`'; ;}
    break;

  case 196:
#line 1243 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = node_assign((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 197:
#line 1248 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (5)].node));
                    (yyvsp[(3) - (5)].node) = NEW_RESCUE((yyvsp[(3) - (5)].node), NEW_RESBODY(0, (yyvsp[(5) - (5)].node), 0), 0);
                    (yyval.node) = node_assign((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node));
                  ;}
    break;

  case 198:
#line 1254 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (3)].node));
                    if((yyvsp[(1) - (3)].node)) {
                      ID vid = (yyvsp[(1) - (3)].node)->nd_vid;
                      if((yyvsp[(2) - (3)].id) == tOROP) {
                        (yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
                        (yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (3)].node));
                        if(is_asgn_or_id(vid)) {
                          (yyval.node)->nd_aid = vid;
                        }
                      } else if((yyvsp[(2) - (3)].id) == tANDOP) {
                        (yyvsp[(1) - (3)].node)->nd_value = (yyvsp[(3) - (3)].node);
                        (yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (3)].node));
                      } else {
                        (yyval.node) = (yyvsp[(1) - (3)].node);
                        (yyval.node)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (3)].id), NEW_LIST((yyvsp[(3) - (3)].node)));
                      }
                    } else {
                      (yyval.node) = NEW_BEGIN(0);
                    }
                  ;}
    break;

  case 199:
#line 1276 "grammar.y"
    {
                    value_expr((yyvsp[(3) - (5)].node));
                    (yyvsp[(3) - (5)].node) = NEW_RESCUE((yyvsp[(3) - (5)].node), NEW_RESBODY(0, (yyvsp[(5) - (5)].node), 0), 0);
                    if((yyvsp[(1) - (5)].node)) {
                      ID vid = (yyvsp[(1) - (5)].node)->nd_vid;
                      if((yyvsp[(2) - (5)].id) == tOROP) {
                        (yyvsp[(1) - (5)].node)->nd_value = (yyvsp[(3) - (5)].node);
                        (yyval.node) = NEW_OP_ASGN_OR(gettable(vid), (yyvsp[(1) - (5)].node));
                        if(is_asgn_or_id(vid)) {
                          (yyval.node)->nd_aid = vid;
                        }
                      } else if((yyvsp[(2) - (5)].id) == tANDOP) {
                        (yyvsp[(1) - (5)].node)->nd_value = (yyvsp[(3) - (5)].node);
                        (yyval.node) = NEW_OP_ASGN_AND(gettable(vid), (yyvsp[(1) - (5)].node));
                      } else {
                        (yyval.node) = (yyvsp[(1) - (5)].node);
                        (yyval.node)->nd_value = NEW_CALL(gettable(vid), (yyvsp[(2) - (5)].id), NEW_LIST((yyvsp[(3) - (5)].node)));
                      }
                    } else {
                      (yyval.node) = NEW_BEGIN(0);
                    }
                  ;}
    break;

  case 200:
#line 1299 "grammar.y"
    {
                    NODE *args;

                    value_expr((yyvsp[(6) - (6)].node));
                    if(!(yyvsp[(3) - (6)].node)) (yyvsp[(3) - (6)].node) = NEW_ZARRAY();
                    if(nd_type((yyvsp[(3) - (6)].node)) == NODE_BLOCK_PASS) {
                      args = NEW_ARGSCAT((yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
                    } else {
                      args = arg_concat((yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
                    }
                    if((yyvsp[(5) - (6)].id) == tOROP) {
                      (yyvsp[(5) - (6)].id) = 0;
                    } else if((yyvsp[(5) - (6)].id) == tANDOP) {
                      (yyvsp[(5) - (6)].id) = 1;
                    } else {
                      (yyvsp[(5) - (6)].id) = convert_op((yyvsp[(5) - (6)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN1((yyvsp[(1) - (6)].node), (yyvsp[(5) - (6)].id), args);
                    fixpos((yyval.node), (yyvsp[(1) - (6)].node));
                  ;}
    break;

  case 201:
#line 1320 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 202:
#line 1333 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 203:
#line 1346 "grammar.y"
    {
                    value_expr((yyvsp[(5) - (5)].node));
                    if((yyvsp[(4) - (5)].id) == tOROP) {
                      (yyvsp[(4) - (5)].id) = 0;
                    } else if((yyvsp[(4) - (5)].id) == tANDOP) {
                      (yyvsp[(4) - (5)].id) = 1;
                    } else {
                      (yyvsp[(4) - (5)].id) = convert_op((yyvsp[(4) - (5)].id));
                    }
                    (yyval.node) = NEW_OP_ASGN2((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].id), (yyvsp[(4) - (5)].id), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (5)].node));
                  ;}
    break;

  case 204:
#line 1359 "grammar.y"
    {
                    yy_error("constant re-assignment");
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 205:
#line 1364 "grammar.y"
    {
                    yy_error("constant re-assignment");
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 206:
#line 1369 "grammar.y"
    {
                    rb_backref_error((yyvsp[(1) - (3)].node));
                    (yyval.node) = NEW_BEGIN(0);
                  ;}
    break;

  case 207:
#line 1374 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (3)].node));
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = NEW_DOT2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 208:
#line 1380 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (3)].node));
                    value_expr((yyvsp[(3) - (3)].node));
                    (yyval.node) = NEW_DOT3((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 209:
#line 1386 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '+', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 210:
#line 1390 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '-', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 211:
#line 1394 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '*', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 212:
#line 1398 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '/', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 213:
#line 1402 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '%', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 214:
#line 1406 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tPOW, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 215:
#line 1410 "grammar.y"
    {
                    (yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
                  ;}
    break;

  case 216:
#line 1414 "grammar.y"
    {
                    (yyval.node) = NEW_CALL(call_bin_op((yyvsp[(2) - (4)].node), tPOW, (yyvsp[(4) - (4)].node)), tUMINUS, 0);
                  ;}
    break;

  case 217:
#line 1418 "grammar.y"
    {
                    (yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUPLUS);
                  ;}
    break;

  case 218:
#line 1422 "grammar.y"
    {
                    (yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), tUMINUS);
                  ;}
    break;

  case 219:
#line 1426 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '|', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 220:
#line 1430 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '^', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 221:
#line 1434 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '&', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 222:
#line 1438 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tCMP, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 223:
#line 1442 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '>', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 224:
#line 1446 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tGEQ, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 225:
#line 1450 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), '<', (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 226:
#line 1454 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLEQ, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 227:
#line 1458 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQ, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 228:
#line 1462 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tEQQ, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 229:
#line 1466 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNEQ, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 230:
#line 1470 "grammar.y"
    {
                    /* TODO */
                    (yyval.node) = match_op((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                    /*
                    if(nd_type($1) == NODE_LIT && TYPE($1->nd_lit) == T_REGEXP) {
                      $$ = reg_named_capture_assign($1->nd_lit, $$);
                    }
                    */
                  ;}
    break;

  case 231:
#line 1480 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tNMATCH, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 232:
#line 1484 "grammar.y"
    {
                    (yyval.node) = call_uni_op(cond((yyvsp[(2) - (2)].node)), '!');
                  ;}
    break;

  case 233:
#line 1488 "grammar.y"
    {
                    (yyval.node) = call_uni_op((yyvsp[(2) - (2)].node), '~');
                  ;}
    break;

  case 234:
#line 1492 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tLSHFT, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 235:
#line 1496 "grammar.y"
    {
                    (yyval.node) = call_bin_op((yyvsp[(1) - (3)].node), tRSHFT, (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 236:
#line 1500 "grammar.y"
    {
                    (yyval.node) = logop(NODE_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 237:
#line 1504 "grammar.y"
    {
                    (yyval.node) = logop(NODE_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 238:
#line 1507 "grammar.y"
    {in_defined = 1;;}
    break;

  case 239:
#line 1508 "grammar.y"
    {
                    in_defined = 0;
                    (yyval.node) = NEW_DEFINED((yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 240:
#line 1513 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (6)].node));
                    (yyval.node) = NEW_IF(cond((yyvsp[(1) - (6)].node)), (yyvsp[(3) - (6)].node), (yyvsp[(6) - (6)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (6)].node));
                  ;}
    break;

  case 241:
#line 1519 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 242:
#line 1525 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (1)].node));
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                    if(!(yyval.node)) (yyval.node) = NEW_NIL();
                  ;}
    break;

  case 244:
#line 1534 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                  ;}
    break;

  case 245:
#line 1538 "grammar.y"
    {
                    (yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
                  ;}
    break;

  case 246:
#line 1542 "grammar.y"
    {
                    (yyval.node) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].node)));
                  ;}
    break;

  case 247:
#line 1548 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 252:
#line 1562 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (1)].node));
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 253:
#line 1567 "grammar.y"
    {
                    (yyval.node) = arg_blk_pass((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 254:
#line 1571 "grammar.y"
    {
                    (yyval.node) = NEW_LIST(NEW_HASH((yyvsp[(1) - (2)].node)));
                    (yyval.node) = arg_blk_pass((yyval.node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 255:
#line 1576 "grammar.y"
    {
                    (yyval.node) = arg_append((yyvsp[(1) - (4)].node), NEW_HASH((yyvsp[(3) - (4)].node)));
                    (yyval.node) = arg_blk_pass((yyval.node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 257:
#line 1583 "grammar.y"
    {
                    (yyval.val) = cmdarg_stack;
                    CMDARG_PUSH(1);
                  ;}
    break;

  case 258:
#line 1588 "grammar.y"
    {
                    /* CMDARG_POP() */
                    cmdarg_stack = (yyvsp[(1) - (2)].val);
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 259:
#line 1596 "grammar.y"
    {
                    (yyval.node) = NEW_BLOCK_PASS((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 260:
#line 1602 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 261:
#line 1606 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 262:
#line 1610 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 263:
#line 1616 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 264:
#line 1620 "grammar.y"
    {
                    (yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 265:
#line 1624 "grammar.y"
    {
                    NODE *n1;
                    if((n1 = splat_array((yyvsp[(1) - (3)].node))) != 0) {
                      (yyval.node) = list_append(n1, (yyvsp[(3) - (3)].node));
                    } else {
                      (yyval.node) = arg_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                    }
                  ;}
    break;

  case 266:
#line 1633 "grammar.y"
    {
                    NODE *n1;
                    if((nd_type((yyvsp[(4) - (4)].node)) == NODE_ARRAY) && (n1 = splat_array((yyvsp[(1) - (4)].node))) != 0) {
                      (yyval.node) = list_concat(n1, (yyvsp[(4) - (4)].node));
                    } else {
                      (yyval.node) = arg_concat((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
                    }
                  ;}
    break;

  case 267:
#line 1644 "grammar.y"
    {
                    NODE *n1;
                    if((n1 = splat_array((yyvsp[(1) - (3)].node))) != 0) {
                      (yyval.node) = list_append(n1, (yyvsp[(3) - (3)].node));
                    } else {
                      (yyval.node) = arg_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                    }
                  ;}
    break;

  case 268:
#line 1653 "grammar.y"
    {
                    NODE *n1;
                    if(nd_type((yyvsp[(4) - (4)].node)) == NODE_ARRAY && (n1 = splat_array((yyvsp[(1) - (4)].node))) != 0) {
                      (yyval.node) = list_concat(n1, (yyvsp[(4) - (4)].node));
                    } else {
                      (yyval.node) = arg_concat((yyvsp[(1) - (4)].node), (yyvsp[(4) - (4)].node));
                    }
                  ;}
    break;

  case 269:
#line 1662 "grammar.y"
    {
                    (yyval.node) = NEW_SPLAT((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 280:
#line 1678 "grammar.y"
    {
                    (yyval.node) = NEW_FCALL((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 281:
#line 1682 "grammar.y"
    {
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 282:
#line 1687 "grammar.y"
    {
                    if((yyvsp[(3) - (4)].node) == NULL) {
                      (yyval.node) = NEW_NIL();
                    } else {
                      if(nd_type((yyvsp[(3) - (4)].node)) == NODE_RESCUE || nd_type((yyvsp[(3) - (4)].node)) == NODE_ENSURE) {
                        nd_set_line((yyvsp[(3) - (4)].node), (yyvsp[(2) - (4)].num));
                      }
                      (yyval.node) = NEW_BEGIN((yyvsp[(3) - (4)].node));
                    }
                    nd_set_line((yyval.node), (yyvsp[(2) - (4)].num));
                  ;}
    break;

  case 283:
#line 1698 "grammar.y"
    {lex_state = EXPR_ENDARG;;}
    break;

  case 284:
#line 1699 "grammar.y"
    {
                    rb_warning("(...) interpreted as grouped expression");
                    (yyval.node) = (yyvsp[(2) - (4)].node);
                  ;}
    break;

  case 285:
#line 1704 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 286:
#line 1708 "grammar.y"
    {
                    (yyval.node) = NEW_COLON2((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id));
                  ;}
    break;

  case 287:
#line 1712 "grammar.y"
    {
                    (yyval.node) = NEW_COLON3((yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 288:
#line 1716 "grammar.y"
    {
                    if((yyvsp[(2) - (3)].node) == 0) {
                      (yyval.node) = NEW_ZARRAY(); /* zero length array*/
                    } else {
                      (yyval.node) = (yyvsp[(2) - (3)].node);
                    }
                  ;}
    break;

  case 289:
#line 1724 "grammar.y"
    {
                    (yyval.node) = NEW_HASH((yyvsp[(2) - (3)].node));
                  ;}
    break;

  case 290:
#line 1728 "grammar.y"
    {
                    (yyval.node) = NEW_RETURN(0);
                  ;}
    break;

  case 291:
#line 1732 "grammar.y"
    {
                    (yyval.node) = new_yield((yyvsp[(3) - (4)].node));
                  ;}
    break;

  case 292:
#line 1736 "grammar.y"
    {
                    (yyval.node) = NEW_YIELD(0, Qfalse);
                  ;}
    break;

  case 293:
#line 1740 "grammar.y"
    {
                    (yyval.node) = NEW_YIELD(0, Qfalse);
                  ;}
    break;

  case 294:
#line 1743 "grammar.y"
    {in_defined = 1;;}
    break;

  case 295:
#line 1744 "grammar.y"
    {
                    in_defined = 0;
                    (yyval.node) = NEW_DEFINED((yyvsp[(5) - (6)].node));
                  ;}
    break;

  case 296:
#line 1749 "grammar.y"
    {
                    (yyval.node) = call_uni_op(cond((yyvsp[(3) - (4)].node)), '!');
                  ;}
    break;

  case 297:
#line 1753 "grammar.y"
    {
                    (yyval.node) = call_uni_op(cond(NEW_NIL()), '!');
                  ;}
    break;

  case 298:
#line 1757 "grammar.y"
    {
                    (yyvsp[(2) - (2)].node)->nd_iter = NEW_FCALL((yyvsp[(1) - (2)].id), 0);
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                    fixpos((yyvsp[(2) - (2)].node)->nd_iter, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 300:
#line 1764 "grammar.y"
    {
                    block_dup_check((yyvsp[(1) - (2)].node)->nd_args, (yyvsp[(2) - (2)].node));
                    (yyvsp[(2) - (2)].node)->nd_iter = (yyvsp[(1) - (2)].node);
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                    fixpos((yyval.node), (yyvsp[(1) - (2)].node));
                  ;}
    break;

  case 301:
#line 1771 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 302:
#line 1778 "grammar.y"
    {
                    (yyval.node) = NEW_IF(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (6)].node));
                  ;}
    break;

  case 303:
#line 1786 "grammar.y"
    {
                    (yyval.node) = NEW_UNLESS(cond((yyvsp[(2) - (6)].node)), (yyvsp[(4) - (6)].node), (yyvsp[(5) - (6)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (6)].node));
                  ;}
    break;

  case 304:
#line 1790 "grammar.y"
    {COND_PUSH(1);;}
    break;

  case 305:
#line 1790 "grammar.y"
    {COND_POP();;}
    break;

  case 306:
#line 1793 "grammar.y"
    {
                    (yyval.node) = NEW_WHILE(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
                    fixpos((yyval.node), (yyvsp[(3) - (7)].node));
                  ;}
    break;

  case 307:
#line 1797 "grammar.y"
    {COND_PUSH(1);;}
    break;

  case 308:
#line 1797 "grammar.y"
    {COND_POP();;}
    break;

  case 309:
#line 1800 "grammar.y"
    {
                    (yyval.node) = NEW_UNTIL(cond((yyvsp[(3) - (7)].node)), (yyvsp[(6) - (7)].node), 1);
                    fixpos((yyval.node), (yyvsp[(3) - (7)].node));
                  ;}
    break;

  case 310:
#line 1807 "grammar.y"
    {
                    (yyval.node) = NEW_CASE((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (5)].node));
                  ;}
    break;

  case 311:
#line 1812 "grammar.y"
    {
                    (yyval.node) = NEW_CASE(0, (yyvsp[(3) - (4)].node));
                  ;}
    break;

  case 312:
#line 1816 "grammar.y"
    {COND_PUSH(1);;}
    break;

  case 313:
#line 1818 "grammar.y"
    {COND_POP();;}
    break;

  case 314:
#line 1821 "grammar.y"
    {
                    /*
                     *  for a, b, c in e
                     *  #=>
                     *  e.each{|*x| a, b, c = x
                     *
                     *  for a in e
                     *  #=>
                     *  e.each{|x| a, = x}
                     */
                    (yyval.node) = NEW_FOR((yyvsp[(2) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(8) - (9)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (9)].node));
                  ;}
    break;

  case 315:
#line 1835 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("class definition in method body");
                    class_nest++;
                    local_push(0);
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 316:
#line 1844 "grammar.y"
    {
                    (yyval.node) = NEW_CLASS((yyvsp[(2) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(3) - (6)].node));
                    nd_set_line((yyval.node), (yyvsp[(4) - (6)].num));
                    local_pop();
                    class_nest--;
                  ;}
    break;

  case 317:
#line 1851 "grammar.y"
    {
                    (yyval.num) = in_def;
                    in_def = 0;
                  ;}
    break;

  case 318:
#line 1856 "grammar.y"
    {
                    (yyval.num) = in_single;
                    in_single = 0;
                    class_nest++;
                    local_push(0);
                  ;}
    break;

  case 319:
#line 1864 "grammar.y"
    {
                    (yyval.node) = NEW_SCLASS((yyvsp[(3) - (8)].node), (yyvsp[(7) - (8)].node));
                    fixpos((yyval.node), (yyvsp[(3) - (8)].node));
                    local_pop();
                    class_nest--;
                    in_def = (yyvsp[(4) - (8)].num);
                    in_single = (yyvsp[(6) - (8)].num);
                  ;}
    break;

  case 320:
#line 1873 "grammar.y"
    {
                    if(in_def || in_single)
                      yy_error("module definition in method body");
                    class_nest++;
                    local_push(0);
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 321:
#line 1882 "grammar.y"
    {
                    (yyval.node) = NEW_MODULE((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node));
                    nd_set_line((yyval.node), (yyvsp[(3) - (5)].num));
                    local_pop();
                    class_nest--;
                  ;}
    break;

  case 322:
#line 1889 "grammar.y"
    {
                    (yyval.id) = cur_mid;
                    cur_mid = (yyvsp[(2) - (2)].id);
                    in_def++;
                    local_push(0);
                  ;}
    break;

  case 323:
#line 1898 "grammar.y"
    {
                    NODE* body = remove_begin((yyvsp[(5) - (6)].node));
                    (yyval.node) = NEW_DEFN((yyvsp[(2) - (6)].id), (yyvsp[(4) - (6)].node), body, NOEX_PRIVATE);
                    nd_set_line((yyval.node), (yyvsp[(1) - (6)].num));
                    local_pop();
                    in_def--;
                    cur_mid = (yyvsp[(3) - (6)].id);
                  ;}
    break;

  case 324:
#line 1906 "grammar.y"
    {lex_state = EXPR_FNAME;;}
    break;

  case 325:
#line 1907 "grammar.y"
    {
                    in_single++;
                    lex_state = EXPR_ENDFN; /* force for args */
                    local_push(0);
                  ;}
    break;

  case 326:
#line 1915 "grammar.y"
    {
                    NODE* body = remove_begin((yyvsp[(8) - (9)].node));
                    (yyval.node) = NEW_DEFS((yyvsp[(2) - (9)].node), (yyvsp[(5) - (9)].id), (yyvsp[(7) - (9)].node), body);
                    nd_set_line((yyval.node), (yyvsp[(1) - (9)].num));
                    local_pop();
                    in_single--;
                  ;}
    break;

  case 327:
#line 1923 "grammar.y"
    {
                    (yyval.node) = NEW_BREAK(0);
                  ;}
    break;

  case 328:
#line 1927 "grammar.y"
    {
                    (yyval.node) = NEW_NEXT(0);
                  ;}
    break;

  case 329:
#line 1931 "grammar.y"
    {
                    (yyval.node) = NEW_REDO();
                  ;}
    break;

  case 330:
#line 1935 "grammar.y"
    {
                    (yyval.node) = NEW_RETRY();
                  ;}
    break;

  case 331:
#line 1941 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (1)].node));
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                    if(!(yyval.node)) (yyval.node) = NEW_NIL();
                  ;}
    break;

  case 332:
#line 1949 "grammar.y"
    {
                    token_info_push("begin");
                  ;}
    break;

  case 333:
#line 1955 "grammar.y"
    {
                    token_info_push("if");
                  ;}
    break;

  case 334:
#line 1961 "grammar.y"
    {
                    token_info_push("unless");
                  ;}
    break;

  case 335:
#line 1967 "grammar.y"
    {
                    token_info_push("while");
                  ;}
    break;

  case 336:
#line 1973 "grammar.y"
    {
                    token_info_push("until");
                  ;}
    break;

  case 337:
#line 1979 "grammar.y"
    {
                    token_info_push("case");
                  ;}
    break;

  case 338:
#line 1985 "grammar.y"
    {
                    token_info_push("for");
                  ;}
    break;

  case 339:
#line 1991 "grammar.y"
    {
                    token_info_push("class");
                  ;}
    break;

  case 340:
#line 1997 "grammar.y"
    {
                    token_info_push("module");
                  ;}
    break;

  case 341:
#line 2003 "grammar.y"
    {
                    token_info_push("def");
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 342:
#line 2010 "grammar.y"
    {
                    token_info_pop("end");
                  ;}
    break;

  case 349:
#line 2028 "grammar.y"
    {
                    (yyval.node) = NEW_IF(cond((yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (5)].node));
                  ;}
    break;

  case 351:
#line 2036 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 354:
#line 2046 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 355:
#line 2050 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 356:
#line 2056 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 357:
#line 2060 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 358:
#line 2066 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (1)].node), 0);
                  ;}
    break;

  case 359:
#line 2070 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(4) - (4)].id), 0);
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (4)].node), (yyval.node));
                  ;}
    break;

  case 360:
#line 2075 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(4) - (6)].id), 0);
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (6)].node), NEW_POSTARG((yyval.node), (yyvsp[(6) - (6)].node)));
                  ;}
    break;

  case 361:
#line 2080 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (3)].node), -1);
                  ;}
    break;

  case 362:
#line 2084 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN((yyvsp[(1) - (5)].node), NEW_POSTARG(-1, (yyvsp[(5) - (5)].node)));
                  ;}
    break;

  case 363:
#line 2088 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(2) - (2)].id), 0);
                    (yyval.node) = NEW_MASGN(0, (yyval.node));
                  ;}
    break;

  case 364:
#line 2093 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(2) - (4)].id), 0);
                    (yyval.node) = NEW_MASGN(0, NEW_POSTARG((yyval.node), (yyvsp[(4) - (4)].node)));
                  ;}
    break;

  case 365:
#line 2098 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, -1);
                  ;}
    break;

  case 366:
#line 2102 "grammar.y"
    {
                    (yyval.node) = NEW_MASGN(0, NEW_POSTARG(-1, (yyvsp[(3) - (3)].node)));
                  ;}
    break;

  case 367:
#line 2108 "grammar.y"
    {
                    (yyval.node) = new_args_tail((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].id));
                  ;}
    break;

  case 368:
#line 2112 "grammar.y"
    {
                    (yyval.node) = new_args_tail((yyvsp[(1) - (2)].node), 0, (yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 369:
#line 2116 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 370:
#line 2120 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, 0, (yyvsp[(1) - (1)].id));
                  ;}
    break;

  case 371:
#line 2126 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 372:
#line 2130 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, 0, 0);
                  ;}
    break;

  case 373:
#line 2136 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 374:
#line 2140 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].node));
                  ;}
    break;

  case 375:
#line 2144 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 376:
#line 2148 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 377:
#line 2152 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 378:
#line 2156 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 1, 0, new_args_tail(0, 0, 0));
                  ;}
    break;

  case 379:
#line 2160 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 380:
#line 2164 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 381:
#line 2168 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 382:
#line 2172 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 383:
#line 2176 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 384:
#line 2180 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 385:
#line 2184 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 386:
#line 2188 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 387:
#line 2192 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 389:
#line 2199 "grammar.y"
    {
                    command_start = TRUE;
                  ;}
    break;

  case 390:
#line 2205 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node) ? NEW_ARGS_AUX(0,(yyvsp[(2) - (3)].node)) : 0;
                  ;}
    break;

  case 391:
#line 2209 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 392:
#line 2213 "grammar.y"
    {
                    if((yyvsp[(3) - (4)].node)) {
                      (yyval.node) = NEW_ARGS_AUX((yyvsp[(2) - (4)].node), (yyvsp[(3) - (4)].node));
                    } else {
                      (yyval.node) = (yyvsp[(2) - (4)].node);
                    }
                  ;}
    break;

  case 393:
#line 2223 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 394:
#line 2227 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 395:
#line 2233 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 396:
#line 2237 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 397:
#line 2243 "grammar.y"
    {
                    new_bv(get_id((yyvsp[(1) - (1)].id)));
                    (yyval.node) = NEW_LIT(ID2SYM(get_id((yyvsp[(1) - (1)].id))));
                  ;}
    break;

  case 398:
#line 2248 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 399:
#line 2253 "grammar.y"
    {
                    (yyval.vars) = bv_push();
                  ;}
    break;

  case 400:
#line 2256 "grammar.y"
    {
                    (yyval.num) = lpar_beg;
                    lpar_beg = ++paren_nest;
                  ;}
    break;

  case 401:
#line 2262 "grammar.y"
    {
                    lpar_beg = (yyvsp[(2) - (4)].num);
                    (yyval.node) = (yyvsp[(3) - (4)].node);
                    (yyval.node)->nd_body = NEW_SCOPE((yyvsp[(3) - (4)].node)->nd_head, (yyvsp[(4) - (4)].node));
                    bv_pop((yyvsp[(1) - (4)].vars));
                  ;}
    break;

  case 402:
#line 2271 "grammar.y"
    {
                    (yyval.node) = NEW_LAMBDA((yyvsp[(2) - (4)].node));
                  ;}
    break;

  case 403:
#line 2275 "grammar.y"
    {
                    (yyval.node) = NEW_LAMBDA((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 404:
#line 2281 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 405:
#line 2285 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 406:
#line 2291 "grammar.y"
    {
                    (yyvsp[(1) - (1)].vars) = bv_push();
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 407:
#line 2298 "grammar.y"
    {
                    (yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
                    nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
                    bv_pop((yyvsp[(1) - (5)].vars));
                  ;}
    break;

  case 408:
#line 2306 "grammar.y"
    {
                    if(nd_type((yyvsp[(1) - (2)].node)) == NODE_YIELD) {
                      compile_error("block given to yield");
                    } else {
                      block_dup_check((yyvsp[(1) - (2)].node)->nd_args, (yyvsp[(2) - (2)].node));
                    }
                    (yyvsp[(2) - (2)].node)->nd_iter = (yyvsp[(1) - (2)].node);
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                    fixpos((yyval.node), (yyvsp[(1) - (2)].node));
                  ;}
    break;

  case 409:
#line 2317 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 410:
#line 2321 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 411:
#line 2327 "grammar.y"
    {
                    (yyval.node) = NEW_FCALL((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 412:
#line 2332 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 413:
#line 2337 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 414:
#line 2342 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].id), 0);
                  ;}
    break;

  case 415:
#line 2346 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), parser_intern("call"), (yyvsp[(3) - (3)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (3)].node));
                  ;}
    break;

  case 416:
#line 2351 "grammar.y"
    {
                    (yyval.node) = NEW_CALL((yyvsp[(1) - (3)].node), parser_intern("call"), (yyvsp[(3) - (3)].node));
                    fixpos((yyval.node), (yyvsp[(1) - (3)].node));
                  ;}
    break;

  case 417:
#line 2356 "grammar.y"
    {
                    (yyval.node) = NEW_SUPER((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 418:
#line 2360 "grammar.y"
    {
                    (yyval.node) = NEW_ZSUPER();
                  ;}
    break;

  case 419:
#line 2364 "grammar.y"
    {
                    if((yyvsp[(1) - (4)].node) && nd_type((yyvsp[(1) - (4)].node)) == NODE_SELF) {
                      (yyval.node) = NEW_FCALL(tAREF, (yyvsp[(3) - (4)].node));
                    } else {
                      (yyval.node) = NEW_CALL((yyvsp[(1) - (4)].node), tAREF, (yyvsp[(3) - (4)].node));
                    }
                    fixpos((yyval.node), (yyvsp[(1) - (4)].node));
                  ;}
    break;

  case 420:
#line 2375 "grammar.y"
    {
                    (yyvsp[(1) - (1)].vars) = bv_push();
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 421:
#line 2381 "grammar.y"
    {
                    (yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
                    nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
                    bv_pop((yyvsp[(1) - (5)].vars));
                  ;}
    break;

  case 422:
#line 2387 "grammar.y"
    {
                    (yyvsp[(1) - (1)].vars) = bv_push();
                    (yyval.num) = sourceline;
                  ;}
    break;

  case 423:
#line 2393 "grammar.y"
    {
                    (yyval.node) = NEW_ITER((yyvsp[(3) - (5)].node), (yyvsp[(4) - (5)].node));
                    nd_set_line((yyval.node), (yyvsp[(2) - (5)].num));
                    bv_pop((yyvsp[(1) - (5)].vars));
                  ;}
    break;

  case 424:
#line 2403 "grammar.y"
    {
                    (yyval.node) = NEW_WHEN((yyvsp[(2) - (5)].node), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
                  ;}
    break;

  case 427:
#line 2415 "grammar.y"
    {
                    if((yyvsp[(3) - (6)].node)) {
                      /* TODO NEW_ERRINFO() */
                      (yyvsp[(3) - (6)].node) = node_assign((yyvsp[(3) - (6)].node), NEW_GVAR(parser_intern("$!")));
                      (yyvsp[(5) - (6)].node) = block_append((yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].node));
                    }
                    (yyval.node) = NEW_RESBODY((yyvsp[(2) - (6)].node), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                    fixpos((yyval.node), (yyvsp[(2) - (6)].node) ? (yyvsp[(2) - (6)].node) : (yyvsp[(5) - (6)].node));
                  ;}
    break;

  case 429:
#line 2428 "grammar.y"
    {
                    (yyval.node) = NEW_LIST((yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 430:
#line 2432 "grammar.y"
    {
                    if(!((yyval.node) = splat_array((yyvsp[(1) - (1)].node)))) (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 432:
#line 2439 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 434:
#line 2446 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 437:
#line 2454 "grammar.y"
    {
                    (yyval.node) = NEW_LIT(ID2SYM((yyvsp[(1) - (1)].id)));
                  ;}
    break;

  case 439:
#line 2461 "grammar.y"
    {
                    NODE *node = (yyvsp[(1) - (1)].node);
                    if(!node) {
                      node = NEW_STR(STR_NEW0());
                    } else {
                      node = evstr2dstr(node);
                    }
                    (yyval.node) = node;
                  ;}
    break;

  case 442:
#line 2475 "grammar.y"
    {
                    (yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 443:
#line 2481 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 444:
#line 2487 "grammar.y"
    {
                    NODE *node = (yyvsp[(2) - (3)].node);
                    if(!node) {
                      node = NEW_XSTR(STR_NEW0());
                    } else {
                      switch(nd_type(node)) {
                      case NODE_STR:
                        nd_set_type(node, NODE_XSTR);
                        break;
                      case NODE_DSTR:
                        nd_set_type(node, NODE_DXSTR);
                        break;
                      default:
                        node = NEW_NODE(NODE_DXSTR, REF(STR_NEW0()), 1, NEW_LIST(node));
                        break;
                      }
                    }
                    (yyval.node) = node;
                  ;}
    break;

  case 445:
#line 2509 "grammar.y"
    {
                    intptr_t options = (yyvsp[(3) - (3)].num);
                    NODE *node = (yyvsp[(2) - (3)].node);
                    NODE *list, *prev;

                    if(!node) {
                      node = NEW_REGEX(STR_NEW0(), options & ~RE_OPTION_ONCE);
                    } else {
                      switch(nd_type(node)) {
                      case NODE_STR:
                        {
                          nd_set_type(node, NODE_REGEX);
                          node->nd_cnt = options & ~RE_OPTION_ONCE;
                        }
                        break;
                      default:
                        node = NEW_NODE(NODE_DSTR, REF(STR_NEW0()), 1, NEW_LIST(node));
                      case NODE_DSTR:
                        if(options & RE_OPTION_ONCE) {
                          nd_set_type(node, NODE_DREGX_ONCE);
                        } else {
                          nd_set_type(node, NODE_DREGX);
                        }
                        node->nd_cflag = options & ~RE_OPTION_ONCE;
                        for(list = (prev = node)->nd_next; list; list = list->nd_next) {
                          if(nd_type(list->nd_head) == NODE_STR) {
                            VALUE tail = list->nd_head->nd_lit;
                            if(prev && !NIL_P(prev->nd_lit)) {
                              VALUE lit;
                              if(prev == node) {
                                lit = prev->nd_lit;
                              } else {
                                lit = prev->nd_head->nd_lit;
                              }
                              if(!literal_concat0(lit, tail)) {
                                node = 0;
                                break;
                              }
                              rb_str_resize(tail, 0);
                              prev->nd_next = list->nd_next;
                              list = prev;
                            } else {
                              prev = list;
                            }
                          } else {
                            prev = 0;
                          }
                        }
                        if(!node->nd_next) {
                          nd_set_type(node, NODE_REGEX);
                          node->nd_cnt = options & ~RE_OPTION_ONCE;
                        }
                        break;
                      }
                    }
                    (yyval.node) = node;
                  ;}
    break;

  case 446:
#line 2569 "grammar.y"
    {
                    (yyval.node) = NEW_ZARRAY();
                  ;}
    break;

  case 447:
#line 2573 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 448:
#line 2579 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 449:
#line 2583 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), evstr2dstr((yyvsp[(2) - (3)].node)));
                  ;}
    break;

  case 451:
#line 2590 "grammar.y"
    {
                    (yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 452:
#line 2596 "grammar.y"
    {
                    (yyval.node) = NEW_ZARRAY();
                  ;}
    break;

  case 453:
#line 2600 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 454:
#line 2606 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 455:
#line 2610 "grammar.y"
    {
                    (yyvsp[(2) - (3)].node) = evstr2dstr((yyvsp[(2) - (3)].node));
                    nd_set_type((yyvsp[(2) - (3)].node), NODE_DSYM);
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                  ;}
    break;

  case 456:
#line 2618 "grammar.y"
    {
                    (yyval.node) = NEW_ZARRAY();
                  ;}
    break;

  case 457:
#line 2622 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 458:
#line 2628 "grammar.y"
    {
                    (yyval.node) = NEW_ZARRAY();
                  ;}
    break;

  case 459:
#line 2632 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 460:
#line 2638 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 461:
#line 2642 "grammar.y"
    {
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                  ;}
    break;

  case 462:
#line 2648 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 463:
#line 2652 "grammar.y"
    {
                    VALUE lit;
                    lit = (yyvsp[(2) - (3)].node)->nd_lit;
                    (yyvsp[(2) - (3)].node)->nd_lit = ID2SYM(parser_intern_str(lit));
                    nd_set_type((yyvsp[(2) - (3)].node), NODE_LIT);
                    (yyval.node) = list_append((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].node));
                  ;}
    break;

  case 464:
#line 2662 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 465:
#line 2666 "grammar.y"
    {
                    (yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 466:
#line 2672 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 467:
#line 2676 "grammar.y"
    {
                    (yyval.node) = literal_concat((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 468:
#line 2682 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 469:
#line 2686 "grammar.y"
    {
                    NODE *head = (yyvsp[(1) - (2)].node), *tail = (yyvsp[(2) - (2)].node);
                    if(!head) {
                      (yyval.node) = tail;
                    } else if(!tail) {
                      (yyval.node) = head;
                    } else {
                      switch(nd_type(head)) {
                      case NODE_STR:
                        nd_set_type(head, NODE_DSTR);
                        break;
                      case NODE_DSTR:
                        break;
                      default:
                        head = list_append(NEW_DSTR(STR_NEW0()), head);
                        break;
                      }
                      (yyval.node) = list_append(head, tail);
                    }
                  ;}
    break;

  case 471:
#line 2710 "grammar.y"
    {
                    (yyval.node) = lex_strterm;
                    lex_strterm = 0;
                    lex_state = EXPR_BEG;
                  ;}
    break;

  case 472:
#line 2716 "grammar.y"
    {
                    lex_strterm = (yyvsp[(2) - (3)].node);
                    (yyval.node) = NEW_EVSTR((yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 473:
#line 2721 "grammar.y"
    {
                    (yyvsp[(1) - (1)].val) = cond_stack;
                    (yyval.val) = cmdarg_stack;
                    cond_stack = 0;
                    cmdarg_stack = 0;
                  ;}
    break;

  case 474:
#line 2727 "grammar.y"
    {
                    (yyval.node) = lex_strterm;
                    lex_strterm = 0;
                    lex_state = EXPR_BEG;
                  ;}
    break;

  case 475:
#line 2733 "grammar.y"
    {
                    cond_stack = (yyvsp[(1) - (5)].val);
                    cmdarg_stack = (yyvsp[(2) - (5)].val);
                    lex_strterm = (yyvsp[(3) - (5)].node);

                    if((yyvsp[(4) - (5)].node)) (yyvsp[(4) - (5)].node)->flags &= ~NODE_FL_NEWLINE;
                    (yyval.node) = new_evstr((yyvsp[(4) - (5)].node));
                  ;}
    break;

  case 476:
#line 2743 "grammar.y"
    {(yyval.node) = NEW_GVAR((yyvsp[(1) - (1)].id));;}
    break;

  case 477:
#line 2744 "grammar.y"
    {(yyval.node) = NEW_IVAR((yyvsp[(1) - (1)].id));;}
    break;

  case 478:
#line 2745 "grammar.y"
    {(yyval.node) = NEW_CVAR((yyvsp[(1) - (1)].id));;}
    break;

  case 480:
#line 2750 "grammar.y"
    {
                    lex_state = EXPR_END;
                    (yyval.id) = (yyvsp[(2) - (2)].id);
                  ;}
    break;

  case 485:
#line 2763 "grammar.y"
    {
                    lex_state = EXPR_END;
                    if(!((yyval.node) = (yyvsp[(2) - (3)].node))) {
                      (yyval.node) = NEW_LIT(ID2SYM(parser_intern("")));
                    } else {
                      VALUE lit;

                      switch(nd_type((yyval.node))) {
                      case NODE_DSTR:
                        nd_set_type((yyval.node), NODE_DSYM);
                        break;
                      case NODE_STR:
                        lit = (yyval.node)->nd_lit;
                        (yyval.node)->nd_lit = ID2SYM(parser_intern_str(lit));
                        nd_set_type((yyval.node), NODE_LIT);
                        break;
                      default:
                        (yyval.node) = NEW_NODE(NODE_DSYM, REF(STR_NEW0()), 1, NEW_LIST((yyval.node)));
                        break;
                      }
                    }
                  ;}
    break;

  case 488:
#line 2790 "grammar.y"
    {
                    (yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 489:
#line 2794 "grammar.y"
    {
                    (yyval.node) = negate_lit((yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 495:
#line 2806 "grammar.y"
    {(yyval.id) = keyword_nil;;}
    break;

  case 496:
#line 2807 "grammar.y"
    {(yyval.id) = keyword_self;;}
    break;

  case 497:
#line 2808 "grammar.y"
    {(yyval.id) = keyword_true;;}
    break;

  case 498:
#line 2809 "grammar.y"
    {(yyval.id) = keyword_false;;}
    break;

  case 499:
#line 2810 "grammar.y"
    {(yyval.id) = keyword__FILE__;;}
    break;

  case 500:
#line 2811 "grammar.y"
    {(yyval.id) = keyword__LINE__;;}
    break;

  case 501:
#line 2812 "grammar.y"
    {(yyval.id) = keyword__ENCODING__;;}
    break;

  case 502:
#line 2816 "grammar.y"
    {
                    if(!((yyval.node) = gettable((yyvsp[(1) - (1)].id)))) {
                      (yyval.node) = NEW_BEGIN(0);
                    }
                  ;}
    break;

  case 503:
#line 2822 "grammar.y"
    {
                    if(!((yyval.node) = gettable((yyvsp[(1) - (1)].id)))) {
                      (yyval.node) = NEW_BEGIN(0);
                    }
                  ;}
    break;

  case 504:
#line 2830 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 505:
#line 2834 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), 0);
                  ;}
    break;

  case 508:
#line 2844 "grammar.y"
    {
                    (yyval.node) = 0;
                  ;}
    break;

  case 509:
#line 2848 "grammar.y"
    {
                    lex_state = EXPR_BEG;
                  ;}
    break;

  case 510:
#line 2852 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(3) - (4)].node);
                  ;}
    break;

  case 511:
#line 2856 "grammar.y"
    {
                    yyerrok;
                    (yyval.node) = 0;
                  ;}
    break;

  case 512:
#line 2863 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (3)].node);
                    lex_state = EXPR_BEG;
                    command_start = TRUE;
                  ;}
    break;

  case 513:
#line 2869 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                    lex_state = EXPR_BEG;
                    command_start = TRUE;
                  ;}
    break;

  case 514:
#line 2877 "grammar.y"
    {
                    (yyval.node) = new_args_tail((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), (yyvsp[(4) - (4)].id));
                  ;}
    break;

  case 515:
#line 2881 "grammar.y"
    {
                    (yyval.node) = new_args_tail((yyvsp[(1) - (2)].node), 0, (yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 516:
#line 2885 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, (yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].id));
                  ;}
    break;

  case 517:
#line 2889 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, 0, (yyvsp[(1) - (1)].id));
                  ;}
    break;

  case 518:
#line 2895 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(2) - (2)].node);
                  ;}
    break;

  case 519:
#line 2899 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, 0, 0);
                  ;}
    break;

  case 520:
#line 2905 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), (yyvsp[(5) - (6)].id), 0, (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 521:
#line 2909 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (8)].node), (yyvsp[(3) - (8)].node), (yyvsp[(5) - (8)].id), (yyvsp[(7) - (8)].node), (yyvsp[(8) - (8)].node));
                  ;}
    break;

  case 522:
#line 2913 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0, 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 523:
#line 2917 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node), 0, (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 524:
#line 2921 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 525:
#line 2925 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (6)].node), 0, (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 526:
#line 2929 "grammar.y"
    {
                    (yyval.node) = new_args((yyvsp[(1) - (2)].node), 0, 0, 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 527:
#line 2933 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].id), 0, (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 528:
#line 2937 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)].node), (yyvsp[(6) - (6)].node));
                  ;}
    break;

  case 529:
#line 2941 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (2)].node), 0, 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 530:
#line 2945 "grammar.y"
    {
                    (yyval.node) = new_args(0, (yyvsp[(1) - (4)].node), 0, (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 531:
#line 2949 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, (yyvsp[(1) - (2)].id), 0, (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 532:
#line 2953 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, (yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node));
                  ;}
    break;

  case 533:
#line 2957 "grammar.y"
    {
                    (yyval.node) = new_args(0, 0, 0, 0, (yyvsp[(1) - (1)].node));
                  ;}
    break;

  case 534:
#line 2961 "grammar.y"
    {
                    (yyval.node) = new_args_tail(0, 0, 0);
                    (yyval.node) = new_args(0, 0, 0, 0, (yyval.node));
                  ;}
    break;

  case 535:
#line 2968 "grammar.y"
    {
                    yy_error("formal argument cannot be a constant");
                    (yyval.id) = 0;
                  ;}
    break;

  case 536:
#line 2973 "grammar.y"
    {
                    yy_error("formal argument cannot be an instance variable");
                    (yyval.id) = 0;
                  ;}
    break;

  case 537:
#line 2978 "grammar.y"
    {
                    yy_error("formal argument cannot be a global variable");
                    (yyval.id) = 0;
                  ;}
    break;

  case 538:
#line 2983 "grammar.y"
    {
                    yy_error("formal argument cannot be a class variable");
                    (yyval.id) = 0;
                  ;}
    break;

  case 540:
#line 2991 "grammar.y"
    {
                    formal_argument(get_id((yyvsp[(1) - (1)].id)));
                    (yyval.id) = (yyvsp[(1) - (1)].id);
                  ;}
    break;

  case 541:
#line 2998 "grammar.y"
    {
                    arg_var(get_id((yyvsp[(1) - (1)].id)));
                    (yyval.node) = NEW_ARGS_AUX((yyvsp[(1) - (1)].id), 1);
                  ;}
    break;

  case 542:
#line 3003 "grammar.y"
    {
                    ID tid = internal_id();
                    arg_var(tid);
                    (yyvsp[(2) - (3)].node)->nd_value = NEW_LVAR(tid);
                    (yyval.node) = NEW_ARGS_AUX(tid, 1);
                    (yyval.node)->nd_next = (yyvsp[(2) - (3)].node);
                  ;}
    break;

  case 544:
#line 3014 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                    (yyval.node)->nd_plen++;
                    (yyval.node)->nd_next = block_append((yyval.node)->nd_next, (yyvsp[(3) - (3)].node)->nd_next);
                  ;}
    break;

  case 545:
#line 3022 "grammar.y"
    {
                    arg_var(formal_argument(get_id((yyvsp[(1) - (1)].id))));
                    (yyval.id) = (yyvsp[(1) - (1)].id);
                  ;}
    break;

  case 546:
#line 3029 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
                    (yyval.node) = NEW_KW_ARG(0, (yyval.node));
                  ;}
    break;

  case 547:
#line 3034 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), NEW_REQ_KW);
                    (yyval.node) = NEW_KW_ARG(0, (yyval.node));
                  ;}
    break;

  case 548:
#line 3041 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (2)].id), (yyvsp[(2) - (2)].node));
                    (yyval.node) = NEW_KW_ARG(0, (yyval.node));
                  ;}
    break;

  case 549:
#line 3046 "grammar.y"
    {
                    (yyval.node) = assignable((yyvsp[(1) - (1)].id), NEW_REQ_KW);
                    (yyval.node) = NEW_KW_ARG(0, (yyval.node));
                  ;}
    break;

  case 550:
#line 3053 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 551:
#line 3057 "grammar.y"
    {
                    NODE *kws = (yyvsp[(1) - (3)].node);
                    while (kws->nd_next) {
                      kws = kws->nd_next;
                    }
                    kws->nd_next = (yyvsp[(3) - (3)].node);
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 552:
#line 3068 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 553:
#line 3072 "grammar.y"
    {
                    NODE *kws = (yyvsp[(1) - (3)].node);
                    while (kws->nd_next) {
                      kws = kws->nd_next;
                    }
                    kws->nd_next = (yyvsp[(3) - (3)].node);
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 556:
#line 3087 "grammar.y"
    {
                    shadowing_lvar(get_id((yyvsp[(2) - (2)].id)));
                    (yyval.id) = (yyvsp[(2) - (2)].id);
                  ;}
    break;

  case 557:
#line 3092 "grammar.y"
    {
                    (yyval.id) = 1;
                  ;}
    break;

  case 558:
#line 3098 "grammar.y"
    {
                    arg_var(formal_argument(get_id((yyvsp[(1) - (3)].id))));
                    (yyval.node) = assignable((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].node));
                    (yyval.node) = NEW_OPT_ARG(0, (yyval.node));
                  ;}
    break;

  case 559:
#line 3106 "grammar.y"
    {
                    arg_var(formal_argument(get_id((yyvsp[(1) - (3)].id))));
                    (yyval.node) = assignable((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].node));
                    (yyval.node) = NEW_OPT_ARG(0, (yyval.node));
                  ;}
    break;

  case 560:
#line 3114 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 561:
#line 3118 "grammar.y"
    {
                    NODE *opts = (yyvsp[(1) - (3)].node);
                    while(opts->nd_next) {
                      opts = opts->nd_next;
                    }
                    opts->nd_next = (yyvsp[(3) - (3)].node);
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 562:
#line 3129 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                  ;}
    break;

  case 563:
#line 3133 "grammar.y"
    {
                    NODE *opts = (yyvsp[(1) - (3)].node);
                    while(opts->nd_next) {
                      opts = opts->nd_next;
                    }
                    opts->nd_next = (yyvsp[(3) - (3)].node);
                    (yyval.node) = (yyvsp[(1) - (3)].node);
                  ;}
    break;

  case 566:
#line 3148 "grammar.y"
    {
                    if(!is_local_id((yyvsp[(2) - (2)].id))) {
                      yy_error("rest argument must be local variable");
                    }
                    arg_var(shadowing_lvar(get_id((yyvsp[(2) - (2)].id))));
                    (yyval.id) = (yyvsp[(2) - (2)].id);
                  ;}
    break;

  case 567:
#line 3156 "grammar.y"
    {
                    (yyval.id) = internal_id();
                    arg_var((yyval.id));
                  ;}
    break;

  case 570:
#line 3167 "grammar.y"
    {
                    if(!is_local_id((yyvsp[(2) - (2)].id)))
                      yy_error("block argument must be local variable");
                    else if(!in_block() && local_id((yyvsp[(2) - (2)].id)))
                      yy_error("duplicate block argument name");
                    arg_var(shadowing_lvar(get_id((yyvsp[(2) - (2)].id))));
                    (yyval.id) = (yyvsp[(2) - (2)].id);
                  ;}
    break;

  case 571:
#line 3178 "grammar.y"
    {
                    (yyval.id) = (yyvsp[(2) - (2)].id);
                  ;}
    break;

  case 572:
#line 3182 "grammar.y"
    {
                    (yyval.id) = 0;
                  ;}
    break;

  case 573:
#line 3188 "grammar.y"
    {
                    value_expr((yyvsp[(1) - (1)].node));
                    (yyval.node) = (yyvsp[(1) - (1)].node);
                    if(!(yyval.node)) (yyval.node) = NEW_NIL();
                  ;}
    break;

  case 574:
#line 3193 "grammar.y"
    {lex_state = EXPR_BEG;;}
    break;

  case 575:
#line 3194 "grammar.y"
    {
                    if((yyvsp[(3) - (4)].node) == 0) {
                      yy_error("can't define singleton method for ().");
                    } else {
                      switch(nd_type((yyvsp[(3) - (4)].node))) {
                      case NODE_STR:
                      case NODE_DSTR:
                      case NODE_XSTR:
                      case NODE_DXSTR:
                      case NODE_DREGX:
                      case NODE_LIT:
                      case NODE_ARRAY:
                      case NODE_ZARRAY:
                        yy_error("can't define singleton method for literals");
                      default:
                        value_expr((yyvsp[(3) - (4)].node));
                        break;
                      }
                    }
                    (yyval.node) = (yyvsp[(3) - (4)].node);
                  ;}
    break;

  case 577:
#line 3219 "grammar.y"
    {
                    (yyval.node) = (yyvsp[(1) - (2)].node);
                  ;}
    break;

  case 579:
#line 3226 "grammar.y"
    {
                    (yyval.node) = list_concat((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 580:
#line 3232 "grammar.y"
    {
                    (yyval.node) = list_append(NEW_LIST((yyvsp[(1) - (3)].node)), (yyvsp[(3) - (3)].node));
                  ;}
    break;

  case 581:
#line 3236 "grammar.y"
    {
                    (yyval.node) = list_append(NEW_LIST(NEW_LIT(ID2SYM((yyvsp[(1) - (2)].id)))), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 582:
#line 3240 "grammar.y"
    {
                    (yyval.node) = list_append(NEW_LIST(0), (yyvsp[(2) - (2)].node));
                  ;}
    break;

  case 604:
#line 3284 "grammar.y"
    {yyerrok;;}
    break;

  case 607:
#line 3289 "grammar.y"
    {yyerrok;;}
    break;

  case 608:
#line 3292 "grammar.y"
    {(yyval.node) = 0;;}
    break;


/* Line 1267 of yacc.c.  */
#line 8660 "grammar.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (parser_state, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (parser_state, yymsg);
	  }
	else
	  {
	    yyerror (parser_state, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, parser_state);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, parser_state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (parser_state, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, parser_state);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, parser_state);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 3294 "grammar.y"


#undef parser
#undef yylex
#undef yylval
#define yylval  (*((YYSTYPE*)(lval)))

static int parser_regx_options(rb_parser_state*);
static int parser_tokadd_string(rb_parser_state*, int, int, int, long*, rb_encoding**);
static void parser_tokaddmbc(rb_parser_state*, int c, rb_encoding *);
static int parser_parse_string(rb_parser_state*, NODE*);
static int parser_here_document(rb_parser_state*, NODE*);


#define nextc()                   parser_nextc(parser_state)
#define pushback(c)               parser_pushback(parser_state, c)
#define newtok()                  parser_newtok(parser_state)
#define tokspace(n)               parser_tokspace(parser_state, n)
#define tokadd(c)                 parser_tokadd(parser_state, c)
#define tok_hex(numlen)           parser_tok_hex(parser_state, numlen)
#define read_escape(flags,e)      parser_read_escape(parser_state, flags, e)
#define tokadd_escape(e)          parser_tokadd_escape(parser_state, e)
#define regx_options()            parser_regx_options(parser_state)
#define tokadd_string(f,t,p,n,e)  parser_tokadd_string(parser_state,f,t,p,n,e)
#define parse_string(n)           parser_parse_string(parser_state,n)
#define tokaddmbc(c, enc)         parser_tokaddmbc(parser_state, c, enc)
#define here_document(n)          parser_here_document(parser_state,n)
#define heredoc_identifier()      parser_heredoc_identifier(parser_state)
#define heredoc_restore(n)        parser_heredoc_restore(parser_state,n)
#define whole_match_p(e,l,i)      parser_whole_match_p(parser_state,e,l,i)

#define set_yylval_str(x)         yylval.node = NEW_STR(x)
#define set_yylval_num(x)         yylval.num = x
#define set_yylval_id(x)          yylval.id = x
#define set_yylval_name(x)        yylval.id = x
#define set_yylval_literal(x)     yylval.node = NEW_LIT(x)
#define set_yylval_number(x)      yylval.node = NEW_NUMBER(x)
#define set_yylval_float(x)       yylval.node = NEW_FLOAT(x)
#define set_yylval_node(x)        yylval.node = x
#define yylval_id()               yylval.id

/* We remove any previous definition of `SIGN_EXTEND_CHAR',
   since ours (we hope) works properly with all combinations of
   machines, compilers, `char' and `unsigned char' argument types.
   (Per Bothner suggested the basic approach.)  */
#undef SIGN_EXTEND_CHAR
#if __STDC__
# define SIGN_EXTEND_CHAR(c) ((signed char)(c))
#else  /* not __STDC__ */
/* As in Harbison and Steele.  */
# define SIGN_EXTEND_CHAR(c) ((((unsigned char)(c)) ^ 128) - 128)
#endif

#define parser_encoding_name()    (parser_state->enc->name)
#define parser_mbclen()           parser_enc_mbclen((lex_p-1),lex_pend,parser->enc)
#define parser_precise_mbclen()   parser_enc_precise_mbclen((lex_p-1),lex_pend,parser_state->enc)
#define is_identchar(p,e,enc)     (parser_enc_isalnum(*p,enc) || (*p) == '_' || !ISASCII(*p))
#define parser_is_identchar()     (!eofp && \
                                   is_identchar((lex_p-1),lex_pend,parser_state->enc))

#define parser_isascii() ISASCII(*(lex_p-1))

static void parser_token_info_push(rb_parser_state* parser_state, const char *token) {
  /* TODO */
}

static void parser_token_info_pop(rb_parser_state* parser_state, const char *token) {
  /* TODO */
}

static int
parser_yyerror(rb_parser_state* parser_state, const char *msg)
{
  create_error(parser_state, (char *)msg);

  return 1;
}

static int
yycompile(rb_parser_state* parser_state, char *f, int line)
{
  int n;
  /* Setup an initial empty scope. */
  heredoc_end = 0;
  lex_strterm = 0;
  ruby__end__seen = 0;
  sourcefile = f;
  command_start = TRUE;
  parser_prepare(parser_state);
  n = yyparse(parser_state);
  ruby_debug_lines = 0;
  compile_for_eval = 0;
  cond_stack = 0;
  cmdarg_stack = 0;
  class_nest = 0;
  in_single = 0;
  in_def = 0;
  cur_mid = 0;

  return n;
}

static rb_encoding*
must_be_ascii_compatible(VALUE s)
{
  rb_encoding *enc = parser_enc_get(s);
  if(!parser_enc_asciicompat(enc)) {
    // TODO: handle this in a way that doesn't leak parser state
    // rb_raise(rb_eArgError, "invalid source encoding");
  }
  return enc;
}

static VALUE
lex_get_str(rb_parser_state* parser_state, VALUE s)
{
  const char *beg, *end, *pend;
  rb_encoding* enc = must_be_ascii_compatible(s);

  beg = RSTRING_PTR(s);
  if(lex_gets_ptr) {
    if(RSTRING_LEN(s) == lex_gets_ptr) return Qnil;
    beg += lex_gets_ptr;
  }
  pend = RSTRING_PTR(s) + RSTRING_LEN(s);
  end = beg;
  while(end < pend) {
    if(*end++ == '\n') break;
  }
  lex_gets_ptr = end - RSTRING_PTR(s);
  return REF(parser_enc_str_new(beg, end - beg, enc));
}

static VALUE
lex_getline(rb_parser_state* parser_state)
{
  VALUE line = (*lex_gets)(parser_state, lex_input);
  if(NIL_P(line)) return line;
  must_be_ascii_compatible(line);

  return line;
}

VALUE process_parse_tree(rb_parser_state*, VALUE, NODE*, ID*);

VALUE
string_to_ast(VALUE ptp, VALUE name, VALUE source, VALUE line)
{
  int l = FIX2INT(line);
  VALUE ret;
  rb_parser_state* parser_state = parser_alloc_state();

  lex_input = source;
  lex_gets = lex_get_str;
  lex_gets_ptr = 0;
  processor = ptp;
  rb_funcall(ptp, rb_intern("references="), 1, references);
  sourceline = l - 1;
  compile_for_eval = 1;

  yycompile(parser_state, RSTRING_PTR(name), l);

  if(!parse_error) {
    ret = process_parse_tree(parser_state, ptp, top_node, NULL);
  } else {
    ret = Qnil;
  }
  pt_free(parser_state);
  free(parser_state);
  return ret;
}

#define LEX_IO_BUFLEN  5120

static VALUE parse_io_gets(rb_parser_state* parser_state, VALUE s) {
  VALUE str = Qnil;
  char* p;
  ssize_t n;

  while(true) {
    if(lex_io_total == 0 || lex_io_index == lex_io_total) {
      lex_io_total = read(lex_io, lex_io_buf, LEX_IO_BUFLEN);

      if(lex_io_total == 0) {
        lex_io_total = 0;
        return str;
      } else if(lex_io_total < 0) {
        // TODO raise exception
        return str;
      } else {
        lex_io_index = 0;
      }
    }

    p = (char*)memchr(lex_io_buf + lex_io_index,
                      '\n', lex_io_total - lex_io_index);
    if(p) {
      n = p - lex_io_buf - lex_io_index + 1;
    } else {
      n = lex_io_total - lex_io_index;
    }

    if(str == Qnil) {
      str = REF(parser_enc_str_new(lex_io_buf + lex_io_index,
                                   n, parser_state->enc));
    } else {
      rb_str_cat(str, lex_io_buf + lex_io_index, n);
    }

    if(p) {
      lex_io_index += n;
      lex_io_count += n;
      return str;
    } else {
      lex_io_total = 0;
      lex_io_index = 0;
    }
  }

  return Qnil;
}

VALUE
file_to_ast(VALUE ptp, const char *f, int fd, int start)
{
  VALUE ret;
  rb_parser_state* parser_state = parser_alloc_state();

  lex_input = Qnil;
  lex_io = fd;
  lex_io_buf = (char*)malloc(LEX_IO_BUFLEN);
  lex_gets = parse_io_gets;
  processor = ptp;
  rb_funcall(ptp, rb_intern("references="), 1, references);
  sourceline = start - 1;

  yycompile(parser_state, (char*)f, start);

  if(!parse_error) {
    ret = process_parse_tree(parser_state, ptp, top_node, NULL);

    if(ruby__end__seen && lex_io) {
      rb_funcall(ptp, rb_sData, 1, ULONG2NUM(lex_io_count));
    }
  } else {
    ret = Qnil;
  }

  pt_free(parser_state);
  free(parser_state);
  return ret;
}

#define STR_FUNC_ESCAPE 0x01
#define STR_FUNC_EXPAND 0x02
#define STR_FUNC_REGEXP 0x04
#define STR_FUNC_QWORDS 0x08
#define STR_FUNC_SYMBOL 0x10
#define STR_FUNC_INDENT 0x20

enum string_type {
  str_squote = (0),
  str_dquote = (STR_FUNC_EXPAND),
  str_xquote = (STR_FUNC_EXPAND),
  str_regexp = (STR_FUNC_REGEXP|STR_FUNC_ESCAPE|STR_FUNC_EXPAND),
  str_sword  = (STR_FUNC_QWORDS),
  str_dword  = (STR_FUNC_QWORDS|STR_FUNC_EXPAND),
  str_ssym   = (STR_FUNC_SYMBOL),
  str_dsym   = (STR_FUNC_SYMBOL|STR_FUNC_EXPAND),
};

static VALUE
parser_str_new(rb_parser_state* parser_state, const char *p, long n,
               rb_encoding *enc, int func, rb_encoding *enc0)
{
  VALUE str;
  str = REF(parser_enc_str_new(p, n, enc));
  if(!(func & STR_FUNC_REGEXP) && parser_enc_asciicompat(enc)) {
    if(parser_enc_str_coderange(str) == ENC_CODERANGE_7BIT) {
      // Do nothing.
    } else if(enc0 == parser_usascii_encoding() && enc != parser_utf8_encoding()) {
      parser_enc_associate(str, parser_ascii8bit_encoding());
    }
  }

  return str;
}

#define lex_goto_eol(parser_state)  (lex_p = lex_pend)
#define lex_eol_p() (lex_p >= lex_pend)
#define peek(c) (lex_p < lex_pend && (c) == *lex_p)
#define peek_n(c,n) (lex_p+(n) < lex_pend && (c) == (unsigned char)lex_p[n])

static inline int
parser_nextc(rb_parser_state* parser_state)
{
  int c;

  if(lex_p == lex_pend) {
    VALUE v = lex_nextline;
    lex_nextline = 0;
    if(!v) {
      if(eofp)
        return -1;

      if(!lex_input || NIL_P(v = lex_getline(parser_state))) {
        eofp = true;
        lex_goto_eol(parser_state);
        return -1;
      }
    }

    if(heredoc_end > 0) {
      sourceline = heredoc_end;
      heredoc_end = 0;
    }

    sourceline++;
    line_count++;
    lex_pbeg = lex_p = RSTRING_PTR(v);
    lex_pend = lex_p + RSTRING_LEN(v);
    lex_lastline = v;
  }

  c = (unsigned char)*lex_p++;
  if(c == '\r' && peek('\n')) {
    lex_p++;
    c = '\n';
  }

  return c;
}

static void
parser_pushback(rb_parser_state* parser_state, int c)
{
  if(c == -1) return;
  lex_p--;
}

#define pushback(c)   parser_pushback(parser_state, c)

/* Indicates if we're currently at the beginning of a line. */
#define was_bol() (lex_p == lex_pbeg + 1)

/* The token buffer. It's just a global string that has
   functions to build up the string easily. */

#define tokfix() (tokenbuf[tokidx]='\0')
#define tok() tokenbuf
#define toklen() tokidx
#define toklast() (tokidx>0?tokenbuf[tokidx-1]:0)

static char*
parser_newtok(rb_parser_state* parser_state)
{
  tokidx = 0;
  if(!tokenbuf) {
    toksiz = 60;
    tokenbuf = ALLOC_N(char, 60);
  }
  if(toksiz > 4096) {
    toksiz = 60;
    REALLOC_N(tokenbuf, char, 60);
  }
  return tokenbuf;
}

static char *
parser_tokspace(rb_parser_state *parser_state, int n)
{
  tokidx += n;

  if(tokidx >= toksiz) {
    do {
      toksiz *= 2;
    } while(toksiz < tokidx);
    REALLOC_N(tokenbuf, char, toksiz);
  }
  return &tokenbuf[tokidx-n];
}


static void parser_tokadd(rb_parser_state* parser_state, char c)
{
  assert(tokidx < toksiz && tokidx >= 0);
  tokenbuf[tokidx++] = c;
  if(tokidx >= toksiz) {
    toksiz *= 2;
    REALLOC_N(tokenbuf, char, toksiz);
  }
}

static int
parser_tok_hex(rb_parser_state *parser_state, size_t *numlen)
{
  int c;

  c = scan_hex(lex_p, 2, numlen);
  if(!*numlen) {
    yy_error("invalid hex escape");
    return 0;
  }
  lex_p += *numlen;
  return c;
}

#define tokcopy(n) memcpy(tokspace(n), lex_p - (n), (n))

static int
parser_tokadd_utf8(rb_parser_state *parser_state, rb_encoding **encp,
                   int string_literal, int symbol_literal, int regexp_literal)
{
  /*
   * If string_literal is true, then we allow multiple codepoints
   * in \u{}, and add the codepoints to the current token.
   * Otherwise we're parsing a character literal and return a single
   * codepoint without adding it
   */

  int codepoint;
  size_t numlen;

  if(regexp_literal) {
    tokadd('\\'); tokadd('u');
  }

  if(peek('{')) {  /* handle \u{...} form */
    do {
      if(regexp_literal) tokadd(*lex_p);
      nextc();
      codepoint = scan_hex(lex_p, 6, &numlen);

      if(numlen == 0)  {
        yy_error("invalid Unicode escape");
        return 0;
      }
      if(codepoint > 0x10ffff) {
      yy_error("invalid Unicode codepoint (too large)");
      return 0;
      }

      lex_p += numlen;
      if(regexp_literal) {
        tokcopy((int)numlen);
      } else if(codepoint >= 0x80) {
        *encp = UTF8_ENC();
        if(string_literal) tokaddmbc(codepoint, *encp);
      } else if(string_literal) {
        tokadd(codepoint);
      }
    } while(string_literal && (peek(' ') || peek('\t')));

    if(!peek('}')) {
      yy_error("unterminated Unicode escape");
      return 0;
    }

    if(regexp_literal) tokadd('}');
    nextc();
  } else {			/* handle \uxxxx form */
    codepoint = scan_hex(lex_p, 4, &numlen);
    if(numlen < 4) {
      yy_error("invalid Unicode escape");
      return 0;
    }
    lex_p += 4;
    if(regexp_literal) {
      tokcopy(4);
    } else if(codepoint >= 0x80) {
      *encp = UTF8_ENC();
      if(string_literal) tokaddmbc(codepoint, *encp);
    } else if(string_literal) {
      tokadd(codepoint);
    }
  }

  return codepoint;
}

#define ESCAPE_CONTROL 1
#define ESCAPE_META    2

static int
parser_read_escape(rb_parser_state *parser_state, int flags, rb_encoding **encp)
{
  int c;
  size_t numlen;

  switch(c = nextc()) {
  case '\\':	    /* Backslash */
    return c;

  case 'n':	      /* newline */
    return '\n';

  case 't':	      /* horizontal tab */
    return '\t';

  case 'r':	      /* carriage-return */
    return '\r';

  case 'f':	      /* form-feed */
    return '\f';

  case 'v':	      /* vertical tab */
    return '\13';

  case 'a':	      /* alarm(bell) */
    return '\007';

  case 'e':	      /* escape */
    return 033;

  case '0': case '1': case '2': case '3': /* octal constant */
  case '4': case '5': case '6': case '7':
    if(flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
    pushback(c);
    c = scan_oct(lex_p, 3, &numlen);
    lex_p += numlen;
    return c;

  case 'x':	    /* hex constant */
    if(flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
    c = tok_hex(&numlen);
    if(numlen == 0) return 0;
    return c;

  case 'b':	    /* backspace */
    return '\010';

  case 's':	    /* space */
    return ' ';

  case 'M':
    if(flags & ESCAPE_META) goto eof;
    if((c = nextc()) != '-') {
      pushback(c);
      goto eof;
    }
    if((c = nextc()) == '\\') {
      if(peek('u')) goto eof;
      return read_escape(flags|ESCAPE_META, encp) | 0x80;
    } else if(c == -1 || !ISASCII(c)) {
      goto eof;
    } else {
      return ((c & 0xff) | 0x80);
    }

  case 'C':
    if((c = nextc()) != '-') {
      pushback(c);
      goto eof;
    }
  case 'c':
    if(flags & ESCAPE_CONTROL) goto eof;
    if((c = nextc())== '\\') {
      if(peek('u')) goto eof;
      c = read_escape(flags|ESCAPE_CONTROL, encp);
    } else if(c == '?') {
      return 0177;
    } else if(c == -1 || !ISASCII(c)) {
      goto eof;
    }
    return c & 0x9f;

  eof:
  case -1:
    yy_error("Invalid escape character syntax");
    return '\0';

  default:
    return c;
  }
}

static void
parser_tokaddmbc(rb_parser_state* parser_state, int c, rb_encoding *enc)
{
  int len = parser_enc_codelen(c, enc);
  parser_enc_mbcput(c, tokspace(len), enc);
}

static int
parser_tokadd_escape(rb_parser_state* parser_state, rb_encoding **encp)
{
  int c;
  int flags = 0;
  size_t numlen;

first:
  switch(c = nextc()) {
  case '\n':
    return 0;		/* just ignore */

  case '0': case '1': case '2': case '3': /* octal constant */
  case '4': case '5': case '6': case '7':
    if(flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
    {
      scan_oct(--lex_p, 3, &numlen);
      if(numlen == 0) goto eof;
      lex_p += numlen;
      tokcopy((int)numlen + 1);
    }
    return 0;

  case 'x':	/* hex constant */
    if(flags & (ESCAPE_CONTROL|ESCAPE_META)) goto eof;
    {
      tok_hex(&numlen);
      if(numlen == 0) goto eof;
      tokcopy((int)numlen + 2);
    }
    return 0;

  case 'M':
    if(flags & ESCAPE_META) goto eof;
    if((c = nextc()) != '-') {
      pushback(c);
      goto eof;
    }
    tokcopy(3);
    flags |= ESCAPE_META;
    goto escaped;

  case 'C':
    if(flags & ESCAPE_CONTROL) goto eof;
    if((c = nextc()) != '-') {
      pushback(c);
      goto eof;
    }
    tokcopy(3);
    goto escaped;

  case 'c':
    if(flags & ESCAPE_CONTROL) goto eof;
    tokcopy(2);
    flags |= ESCAPE_CONTROL;
escaped:
    if((c = nextc()) == '\\') {
      goto first;
    } else if(c == -1) goto eof;
    tokadd(c);
    return 0;

eof:
  case -1:
    yy_error("Invalid escape character syntax");
    return -1;

  default:
    tokadd('\\');
    tokadd(c);
  }

  return 0;
}

static int
parser_regx_options(rb_parser_state* parser_state)
{
    int kcode = 0;
    int options = 0;
    int c;

    /* TODO */
    newtok();
    while(c = nextc(), ISALPHA(c)) {
      switch(c) {
      case 'i':
        options |= RE_OPTION_IGNORECASE;
        break;
      case 'x':
        options |= RE_OPTION_EXTENDED;
        break;
      case 'm':
        options |= RE_OPTION_MULTILINE;
        break;
      case 'o':
        options |= RE_OPTION_ONCE;
        break;
      case 'G':
        options |= RE_OPTION_CAPTURE_GROUP;
        break;
      case 'g':
        options |= RE_OPTION_DONT_CAPTURE_GROUP;
        break;
      case 'n':
        kcode = RE_KCODE_NONE;
        break;
      case 'e':
        kcode = RE_KCODE_EUC;
        break;
      case 's':
        kcode = RE_KCODE_SJIS;
        break;
      case 'u':
        kcode = RE_KCODE_UTF8;
        break;
      default:
        tokadd((char)c);
        break;
      }
    }
    pushback(c);
    if(toklen()) {
      tokfix();
      rb_compile_error(parser_state, "unknown regexp option%s - %s",
                       toklen() > 1 ? "s" : "", tok());
    }
    return options | kcode;
}

static int
parser_tokadd_mbchar(rb_parser_state *parser_state, int c)
{
  int len = parser_precise_mbclen();
  if(!MBCLEN_CHARFOUND_P(len)) {
    rb_compile_error(parser_state, "invalid multibyte char (%s)", parser_encoding_name());
    return -1;
  }
  tokadd(c);
  lex_p += --len;
  if(len > 0) tokcopy(len);
  return c;
}

#define tokadd_mbchar(c) parser_tokadd_mbchar(parser_state, c)

static int
parser_tokadd_string(rb_parser_state *parser_state,
                     int func, int term, int paren, long *nest, rb_encoding **encp)
{
  int c;
  int has_nonascii = 0;
  rb_encoding *enc = *encp;
  char *errbuf = 0;
  static const char mixed_msg[] = "%s mixed within %s source";

#define mixed_error(enc1, enc2) if(!errbuf) {	\
    size_t len = sizeof(mixed_msg) - 4;	\
    len += strlen(parser_enc_name(enc1));	\
    len += strlen(parser_enc_name(enc2));	\
    errbuf = ALLOCA_N(char, len);		\
    snprintf(errbuf, len, mixed_msg, parser_enc_name(enc1), parser_enc_name(enc2));		\
    yy_error(errbuf);			\
  }

#define mixed_escape(beg, enc1, enc2) do {	\
    char *pos = lex_p;		\
    lex_p = beg;				\
    mixed_error(enc1, enc2);		\
    lex_p = pos;				\
  } while(0)

  while((c = nextc()) != -1) {
    if(paren && c == paren) {
      ++*nest;
    } else if(c == term) {
      if(!nest || !*nest) {
        pushback(c);
        break;
      }
      --*nest;
    } else if((func & STR_FUNC_EXPAND) && c == '#' && lex_p < lex_pend) {
      int c2 = *lex_p;
      if(c2 == '$' || c2 == '@' || c2 == '{') {
        pushback(c);
        break;
      }
    } else if(c == '\\') {
      char *beg = lex_p - 1;
      c = nextc();
      switch(c) {
      case '\n':
        if(func & STR_FUNC_QWORDS) break;
        if(func & STR_FUNC_EXPAND) continue;
        tokadd('\\');
        break;

      case '\\':
        if(func & STR_FUNC_ESCAPE) tokadd(c);
        break;

      case 'u':
        if((func & STR_FUNC_EXPAND) == 0) {
          tokadd('\\');
          break;
        }
        parser_tokadd_utf8(parser_state, &enc, 1, func & STR_FUNC_SYMBOL,
                           func & STR_FUNC_REGEXP);
        if(has_nonascii && enc != *encp) {
          mixed_escape(beg, enc, *encp);
        }
        continue;

      default:
        if(func & STR_FUNC_REGEXP) {
          pushback(c);
          if((c = tokadd_escape(&enc)) < 0)
          return -1;
          if(has_nonascii && enc != *encp) {
            mixed_escape(beg, enc, *encp);
          }
          continue;
        } else if(func & STR_FUNC_EXPAND) {
          pushback(c);
          if(func & STR_FUNC_ESCAPE) tokadd('\\');
          c = read_escape(0, &enc);
          if(!ISASCII(c)) {
            if(tokadd_mbchar(c) == -1) return -1;
            continue;
          }
        } else if((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
          /* ignore backslashed spaces in %w */
        } else if(c != term && !(paren && c == paren)) {
          tokadd('\\');
          pushback(c);
          continue;
        }
      }
    } else if(!parser_isascii()) {
      has_nonascii = 1;
      if(enc != *encp) {
        mixed_error(enc, *encp);
        continue;
      }
      if(tokadd_mbchar(c) == -1) return -1;
      continue;
    } else if((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
      pushback(c);
      break;
    }
    if(c & 0x80) {
      has_nonascii = 1;
      if(enc != *encp) {
        mixed_error(enc, *encp);
        continue;
      }
    }
    tokadd(c);
  }
  *encp = enc;
  return c;
}

#define NEW_STRTERM(func, term, paren) \
  node_newnode(NODE_STRTERM, (VALUE)(func), \
               (VALUE)((term) | ((paren) << (CHAR_BIT * 2))), 0)
#define pslval ((YYSTYPE *)lval)
static int
parser_parse_string(rb_parser_state* parser_state, NODE *quote)
{
  int func = (int)quote->nd_func;
  int term = nd_term(quote);
  int paren = nd_paren(quote);
  int c, space = 0;
  rb_encoding* enc = parser_state->enc;

  long start_line = sourceline;

  if(func == -1) return tSTRING_END;
  c = nextc();
  if((func & STR_FUNC_QWORDS) && ISSPACE(c)) {
    do {c = nextc();} while(ISSPACE(c));
    space = 1;
  }
  if(c == term && !quote->nd_nest) {
    if(func & STR_FUNC_QWORDS) {
      quote->nd_func = -1;
      return ' ';
    }
    if(!(func & STR_FUNC_REGEXP)) return tSTRING_END;
    set_yylval_num(regx_options());
    return tREGEXP_END;
  }
  if(space) {
    pushback(c);
    return ' ';
  }
  newtok();
  if((func & STR_FUNC_EXPAND) && c == '#') {
    switch(c = nextc()) {
    case '$':
    case '@':
      pushback(c);
      return tSTRING_DVAR;
    case '{':
      return tSTRING_DBEG;
    }
    tokadd('#');
  }
  pushback(c);
  if(tokadd_string(func, term, paren, &quote->nd_nest, &enc) == -1) {
    sourceline = nd_line(quote);
    if(func & STR_FUNC_REGEXP) {
      if(eofp)
        rb_compile_error(parser_state, "unterminated regexp meets end of file");
      return tREGEXP_END;
    } else {
      if(eofp)
        rb_compile_error(parser_state, "unterminated string meets end of file");
      return tSTRING_END;
    }
  }

  tokfix();
  set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
  nd_set_line(pslval->node, start_line);
  return tSTRING_CONTENT;
}

/* Called when the lexer detects a heredoc is beginning. This pulls
   in more characters and detects what kind of heredoc it is. */
static int
parser_heredoc_identifier(rb_parser_state* parser_state)
{
  int c = nextc(), term, func = 0;
  size_t len;

  if(c == '-') {
    c = nextc();
    func = STR_FUNC_INDENT;
  }
  switch(c) {
  case '\'':
    func |= str_squote; goto quoted;
  case '"':
    func |= str_dquote; goto quoted;
  case '`':
    func |= str_xquote;
  quoted:
    /* The heredoc indent is quoted, so its easy to find, we just
       continue to consume characters into the token buffer until
       we hit the terminating character. */

    newtok();
    tokadd(func);
    term = c;

    /* Where of where has the term gone.. */
    while((c = nextc()) != -1 && c != term) {
      if(tokadd_mbchar(c) == -1) return 0;
    }

    /* Ack! end of file or end of string. */
    if(c == -1) {
      rb_compile_error(parser_state, "unterminated here document identifier");
      return 0;
    }

    break;

  default:
    /* Ok, this is an unquoted heredoc ident. We just consume
       until we hit a non-ident character. */

    /* Do a quick check that first character is actually valid.
       if it's not, then this isn't actually a heredoc at all!
       It sucks that it's way down here in this function that in
       finally bails with this not being a heredoc.*/

    if(!parser_is_identchar()) {
      pushback(c);
      if(func & STR_FUNC_INDENT) {
        pushback('-');
      }
      return 0;
    }

    /* Finally, setup the token buffer and begin to fill it. */
    newtok();
    term = '"';
    tokadd(func |= str_dquote);
    do {
      if(tokadd_mbchar(c) == -1) return 0;
    } while((c = nextc()) != -1 && parser_is_identchar());
    pushback(c);
    break;
  }


  /* Fixup the token buffer, ie set the last character to null. */
  tokfix();
  len = lex_p - lex_pbeg;
  lex_goto_eol(parser_state);

  /* Tell the lexer that we're inside a string now. nd_lit is
     the heredoc identifier that we watch the stream for to
     detect the end of the heredoc. */
  lex_strterm = node_newnode(NODE_HEREDOC,
                             REF(STR_NEW(tok(), toklen())), /* nd_lit */
                             (VALUE)len,                    /* nd_nth */
                             (VALUE)lex_lastline);          /* nd_orig */
  nd_set_line(lex_strterm, sourceline);
  return term == '`' ? tXSTRING_BEG : tSTRING_BEG;
}

static void
parser_heredoc_restore(rb_parser_state* parser_state, NODE *here)
{
  VALUE line;

  line = here->nd_orig;
  lex_lastline = line;
  lex_pbeg = RSTRING_PTR(line);
  lex_pend = lex_pbeg + RSTRING_LEN(line);
  lex_p = lex_pbeg + here->nd_nth;
  heredoc_end = sourceline;
  sourceline = nd_line(here);
}

static int
parser_whole_match_p(rb_parser_state* parser_state, const char *eos, ssize_t len, int indent)
{
  char *p = lex_pbeg;
  ssize_t n;

  if(indent) {
    while(*p && ISSPACE(*p)) p++;
  }
  n = lex_pend - (p + len);
  if(n < 0 || (n > 0 && p[len] != '\n' && p[len] != '\r')) return FALSE;
  if(strncmp(eos, p, len) == 0) return TRUE;
  return FALSE;
}

/* Called when the lexer knows it's inside a heredoc. This function
   is responsible for detecting an expandions (ie #{}) in the heredoc
   and emitting a lex token and also detecting the end of the heredoc. */

static int
parser_here_document(rb_parser_state* parser_state, NODE *here)
{
  int c, func, indent = 0;
  char *eos, *p, *pend;
  ssize_t len;
  VALUE str = 0;
  rb_encoding* enc = parser_state->enc;

  /* eos == the heredoc ident that we found when the heredoc started */
  eos = RSTRING_PTR(here->nd_lit);
  len = RSTRING_LEN(here->nd_lit) - 1;

  /* indicates if we should search for expansions. */
  indent = (func = *eos++) & STR_FUNC_INDENT;

  /* Ack! EOF or end of input string! */
  if((c = nextc()) == -1) {
  error:
    rb_compile_error(parser_state, "can't find string \"%s\" anywhere before EOF", eos);
  restore:
    heredoc_restore(lex_strterm);
    lex_strterm = 0;
    return 0;
  }
  /* Gr. not yet sure what was_bol() means other than it seems like
     it means only 1 character has been consumed. */

  if(was_bol() && whole_match_p(eos, len, indent)) {
    heredoc_restore(lex_strterm);
    return tSTRING_END;
  }

  /* If aren't doing expansions, we can just scan until
     we find the identifier. */

  if((func & STR_FUNC_EXPAND) == 0) {
    do {
      p = RSTRING_PTR(lex_lastline);
      pend = lex_pend;
      if(pend > p) {
        switch(pend[-1]) {
        case '\n':
          if(--pend == p || pend[-1] != '\r') {
            pend++;
            break;
          }
        case '\r':
          --pend;
        }
      }
      if(str) {
        rb_str_cat(str, p, pend - p);
      } else {
        str = REF(STR_NEW(p, pend - p));
      }
      if(pend < lex_pend) rb_str_cat(str, "\n", 1);
      lex_goto_eol(parser_state);
      if(nextc() == -1) {
        goto error;
      }
    } while(!whole_match_p(eos, len, indent));
  } else {
    newtok();
    if(c == '#') {
      switch(c = nextc()) {
      case '$':
      case '@':
        pushback(c);
        return tSTRING_DVAR;
      case '{':
        return tSTRING_DBEG;
      }
      tokadd('#');
    }

    /* Loop while we haven't found a the heredoc ident. */
    do {
      pushback(c);
      /* Scan up until a \n and fill in the token buffer. */
      if((c = tokadd_string(func, '\n', 0, NULL, &enc)) == -1) {
        if(eofp) goto error;
        goto restore;
      }

      /* We finished scanning, but didn't find a \n, so we setup the node
         and have the lexer file in more. */
      if(c != '\n') {
        set_yylval_str(STR_NEW3(tok(), toklen(), enc, func));
        return tSTRING_CONTENT;
      }

      /* I think this consumes the \n */
      tokadd(nextc());
      if((c = nextc()) == -1) goto error;
    } while(!whole_match_p(eos, len, indent));
    str = REF(STR_NEW3(tok(), toklen(), enc, func));
  }
  heredoc_restore(lex_strterm);
  lex_strterm = NEW_STRTERM(-1, 0, 0);
  set_yylval_str(str);
  return tSTRING_CONTENT;
}

#include "lex.c.blt"

static int
arg_ambiguous()
{
  rb_warning("ambiguous first argument; put parentheses or even spaces");

  return 1;
}

#define IS_ARG() (lex_state == EXPR_ARG || lex_state == EXPR_CMDARG)

static ID
parser_formal_argument(rb_parser_state* parser_state, ID lhs)
{
  if(!is_local_id(lhs)) {
    yy_error("formal argument must be local variable");
  }
  shadowing_lvar(lhs);
  return lhs;
}

static bool
parser_lvar_defined(rb_parser_state* parser_state, ID id) {
  return (in_block() && bv_defined(id)) || local_id(id);
}

static long
parser_encode_length(rb_parser_state* parser_state, const char *name, long len)
{
  long nlen;

  if(len > 5 && name[nlen = len - 5] == '-') {
    if(strncasecmp(name + nlen + 1, "unix", 4) == 0)
      return nlen;
  }
  if(len > 4 && name[nlen = len - 4] == '-') {
    if(strncasecmp(name + nlen + 1, "dos", 3) == 0)
      return nlen;
    if(strncasecmp(name + nlen + 1, "mac", 3) == 0 &&
        !(len == 8 && strncasecmp(name, "utf8-mac", len) == 0))
      /* exclude UTF8-MAC because the encoding named "UTF8" doesn't exist in Ruby */
      return nlen;
  }
  return len;
}

static void
parser_set_encode(rb_parser_state* parser_state, const char *name)
{
  int idx = parser_enc_find_index(name);
  rb_encoding *enc;

  if(idx < 0) {
    // TODO: handle this in a way that doesn't leak parser state
    // rb_raise(rb_eArgError, "unknown encoding name: %s", name);
    return;
  }

  enc = parser_enc_from_index(idx);
  if(!parser_enc_asciicompat(enc)) {
    // TODO: handle this in a way that doesn't leak parser state
    // rb_raise(rb_eArgError, "%s is not ASCII compatible", parser_enc_name(enc));
    return;
  }

  parser_state->enc = enc;
}

static int
comment_at_top(rb_parser_state* parser_state)
{
  const char *p = lex_pbeg, *pend = lex_p - 1;
  if(line_count != (has_shebang ? 2 : 1)) return FALSE;
  while(p < pend) {
    if (!ISSPACE(*p)) return FALSE;
    p++;
  }
  return TRUE;
}

typedef long (*rb_magic_comment_length_t)(rb_parser_state* parser_state, const char *name, long len);
typedef void (*rb_magic_comment_setter_t)(rb_parser_state* parser_state, const char *name, const char *val);

static void
magic_comment_encoding(rb_parser_state* parser_state, const char *name, const char *val)
{
  if(!comment_at_top(parser_state)) {
    return;
  }
  parser_set_encode(parser_state, val);
}

struct magic_comment {
    const char *name;
    rb_magic_comment_setter_t func;
    rb_magic_comment_length_t length;
};

static const struct magic_comment magic_comments[] = {
    {"coding", magic_comment_encoding, parser_encode_length},
    {"encoding", magic_comment_encoding, parser_encode_length},
};

static const char *
magic_comment_marker(const char *str, long len)
{
  long i = 2;

  while(i < len) {
    switch(str[i]) {
    case '-':
      if(str[i-1] == '*' && str[i-2] == '-') {
        return str + i + 1;
      }
      i += 2;
      break;
    case '*':
      if(i + 1 >= len) return 0;
      if(str[i+1] != '-') {
        i += 4;
      } else if(str[i-1] != '-') {
        i += 2;
      } else {
        return str + i + 2;
      }
      break;
    default:
      i += 3;
      break;
    }
  }
  return 0;
}

static int
parser_magic_comment(rb_parser_state* parser_state, const char *str, long len)
{
  VALUE name = 0, val = 0;
  const char *beg, *end, *vbeg, *vend;

#define str_copy(_s, _p, _n) ((_s) \
    ? (void)(rb_str_resize((_s), (_n)), \
    MEMCPY(RSTRING_PTR(_s), (_p), char, (_n)), (_s)) \
    : (void)((_s) = REF(STR_NEW((_p), (_n)))))

  if(len <= 7) return FALSE;
  if(!(beg = magic_comment_marker(str, len))) return FALSE;
  if(!(end = magic_comment_marker(beg, str + len - beg))) return FALSE;
  str = beg;
  len = end - beg - 3;

  /* %r"([^\\s\'\":;]+)\\s*:\\s*(\"(?:\\\\.|[^\"])*\"|[^\"\\s;]+)[\\s;]*" */
  while(len > 0) {
    const struct magic_comment *p = magic_comments;
    char *s;
    int i;
    long n = 0;

    for(; len > 0 && *str; str++, --len) {
      switch(*str) {
      case '\'': case '"': case ':': case ';':
        continue;
      }
      if(!ISSPACE(*str)) break;
    }
    for(beg = str; len > 0; str++, --len) {
      switch(*str) {
      case '\'': case '"': case ':': case ';':
        break;
      default:
        if(ISSPACE(*str)) break;
        continue;
      }
      break;
    }
    for(end = str; len > 0 && ISSPACE(*str); str++, --len) {
      // nothing
    }
    if(!len) break;
    if(*str != ':') continue;

    do str++; while(--len > 0 && ISSPACE(*str));
    if(!len) break;
    if(*str == '"') {
      for(vbeg = ++str; --len > 0 && *str != '"'; str++) {
        if(*str == '\\') {
          --len;
          ++str;
        }
      }
      vend = str;
      if(len) {
        --len;
        ++str;
      }
    } else {
      for(vbeg = str;
          len > 0 && *str != '"' && *str != ';' && !ISSPACE(*str);
          --len, str++) {
        // nothing
      }
      vend = str;
    }
    while(len > 0 && (*str == ';' || ISSPACE(*str))) --len, str++;

    n = end - beg;
    str_copy(name, beg, n);
    s = RSTRING_PTR(name);
    for(i = 0; i < n; ++i) {
      if(s[i] == '-') s[i] = '_';
    }
    do {
      if(strncasecmp(p->name, s, n) == 0) {
        n = vend - vbeg;
        if(p->length) {
          n = (*p->length)(parser_state, vbeg, n);
        }
        str_copy(val, vbeg, n);
        (*p->func)(parser_state, s, RSTRING_PTR(val));
        break;
      }
    } while(++p < magic_comments + numberof(magic_comments));
  }

  return TRUE;
}

static void
set_file_encoding(rb_parser_state* parser_state, const char *str, const char *send)
{
  int sep = 0;
  const char *beg = str;
  VALUE s;

  for(;;) {
    if(send - str <= 6) return;
    switch(str[6]) {
    case 'C': case 'c': str += 6; continue;
    case 'O': case 'o': str += 5; continue;
    case 'D': case 'd': str += 4; continue;
    case 'I': case 'i': str += 3; continue;
    case 'N': case 'n': str += 2; continue;
    case 'G': case 'g': str += 1; continue;
    case '=': case ':':
      sep = 1;
      str += 6;
      break;
    default:
      str += 6;
      if(ISSPACE(*str)) break;
      continue;
    }
    if(strncasecmp(str-6, "coding", 6) == 0) break;
  }

  for(;;) {
    do {
      if(++str >= send) return;
    } while(ISSPACE(*str));
    if(sep) break;
    if(*str != '=' && *str != ':') return;
    sep = 1;
    str++;
  }

  beg = str;
  while((*str == '-' || *str == '_' || ISALNUM(*str)) && ++str < send) {
    // nothing
  }
  s = REF(rb_str_new(beg, parser_encode_length(parser_state, beg, str - beg)));
  parser_set_encode(parser_state, RSTRING_PTR(s));
  rb_str_resize(s, 0);
}

static void
parser_prepare(rb_parser_state* parser_state)
{
  int c = nextc();
  switch(c) {
  case '#':
    if(peek('!')) has_shebang = 1;
    break;
  case 0xef:		/* UTF-8 BOM marker */
    if(lex_pend - lex_p >= 2 &&
        (unsigned char)lex_p[0] == 0xbb &&
        (unsigned char)lex_p[1] == 0xbf) {
      parser_state->enc = parser_utf8_encoding();
      lex_p += 2;
      lex_pbeg = lex_p;
      return;
    }
    break;
  case EOF:
    return;
  }
  pushback(c);
  parser_state->enc = parser_enc_get(lex_lastline);
}

#define IS_ARG()        (lex_state == EXPR_ARG \
                         || lex_state == EXPR_CMDARG)
#define IS_END()        (lex_state == EXPR_END \
                         || lex_state == EXPR_ENDARG \
                         || lex_state == EXPR_ENDFN)
#define IS_BEG()        (lex_state == EXPR_BEG \
                         || lex_state == EXPR_MID \
                         || lex_state == EXPR_VALUE \
                         || lex_state == EXPR_CLASS)
#define IS_SPCARG(c)    (IS_ARG() && space_seen && !ISSPACE(c))
#define IS_LABEL_POSSIBLE() ((lex_state == EXPR_BEG && !cmd_state) || IS_ARG())
#define IS_LABEL_SUFFIX(n) (peek_n(':',(n)) && !peek_n(':', (n)+1))

#define ambiguous_operator(op, syn) ( \
    rb_warning0("`" op "' after local variable is interpreted as binary operator"), \
    rb_warning0("even though it seems like " syn ""))
#define warn_balanced(op, syn) \
    (last_state != EXPR_CLASS && last_state != EXPR_DOT && \
     last_state != EXPR_FNAME && last_state != EXPR_ENDFN && \
     last_state != EXPR_ENDARG && \
     space_seen && !ISSPACE(c) && \
     (ambiguous_operator(op, syn), 0))

static int
parser_yylex(rb_parser_state *parser_state)
{
  int c;
  int space_seen = 0;
  int cmd_state;
  enum lex_state_e last_state;
  rb_encoding *enc;
  int mb;

  if(lex_strterm) {
    int token;
    if(nd_type(lex_strterm) == NODE_HEREDOC) {
      token = here_document(lex_strterm);
      if(token == tSTRING_END) {
        lex_strterm = 0;
        lex_state = EXPR_END;
      }
    } else {
      token = parse_string(lex_strterm);
      if(token == tSTRING_END || token == tREGEXP_END) {
        lex_strterm = 0;
        lex_state = EXPR_END;
      }
    }
    return token;
  }

  cmd_state = command_start;
  command_start = FALSE;
retry:
  last_state = lex_state;
  switch(c = nextc()) {
  case '\0':                /* NUL */
  case '\004':              /* ^D */
  case '\032':              /* ^Z */
  case -1:                  /* end of script. */
    return 0;

    /* white spaces */
  case ' ': case '\t': case '\f': case '\r':
  case '\13': /* '\v' */
    space_seen = 1;
    goto retry;

  case '#':         /* it's a comment */
    /* no magic_comment in shebang line */
    if(!parser_magic_comment(parser_state, lex_p, lex_pend - lex_p)) {
      if(comment_at_top(parser_state)) {
        set_file_encoding(parser_state, lex_p, lex_pend);
      }
    }

    lex_p = lex_pend;
    /* fall through */
  case '\n':
    switch(lex_state) {
    case EXPR_BEG:
    case EXPR_FNAME:
    case EXPR_DOT:
    case EXPR_CLASS:
    case EXPR_VALUE:
      goto retry;
    default:
      break;
    }

    while((c = nextc())) {
      switch(c) {
      case ' ': case '\t': case '\f': case '\r':
      case '\13': /* '\v' */
        space_seen = 1;
        break;
      case '.': {
        if((c = nextc()) != '.') {
          pushback(c);
          pushback('.');
          goto retry;
        }
      }
      default:
        --sourceline;
        lex_nextline = lex_lastline;
      case -1:         /* EOF no decrement*/
        lex_goto_eol(parser_state);
        goto normal_newline;
      }
    }

  normal_newline:
    command_start = TRUE;
    lex_state = EXPR_BEG;
    return '\n';

  case '*':
    if((c = nextc()) == '*') {
      if((c = nextc()) == '=') {
        set_yylval_id(tPOW);
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      if (IS_SPCARG(c)) {
        rb_warning0("`**' interpreted as argument prefix");
        c = tDSTAR;
      } else if (IS_BEG()) {
        c = tDSTAR;
      } else {
        warn_balanced("**", "argument prefix");
        c = tPOW;
      }
    } else {
      if(c == '=') {
        set_yylval_id('*');
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      if(IS_SPCARG(c)){
        rb_warning("`*' interpreted as argument prefix");
        c = tSTAR;
      } else if(IS_BEG()) {
        c = tSTAR;
      } else {
        warn_balanced("*", "argument prefix");
        c = '*';
      }
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG; break;
    default:
      lex_state = EXPR_BEG; break;
    }
    return c;

  case '!':
    c = nextc();
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      lex_state = EXPR_ARG;
      if(c == '@') {
        return '!';
      }
    } else {
      lex_state = EXPR_BEG;
    }
    if(c == '=') {
      return tNEQ;
    }
    if(c == '~') {
      return tNMATCH;
    }
    pushback(c);
    return '!';

  case '=':
    if(was_bol()) {
      /* skip embedded rd document */
      if(strncmp(lex_p, "begin", 5) == 0 && ISSPACE(lex_p[5])) {
        for(;;) {
          lex_goto_eol(parser_state);
          c = nextc();
          if(c == -1) {
            rb_compile_error(parser_state, "embedded document meets end of file");
            return 0;
          }
          if(c != '=') continue;
          if(strncmp(lex_p, "end", 3) == 0 &&
              (lex_p + 3 == lex_pend || ISSPACE(lex_p[3]))) {
            break;
          }
        }
        lex_goto_eol(parser_state);
        goto retry;
      }
    }

    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG; break;
    default:
      lex_state = EXPR_BEG; break;
    }
    if((c = nextc()) == '=') {
      if((c = nextc()) == '=') {
        return tEQQ;
      }
      pushback(c);
      return tEQ;
    }
    if(c == '~') {
      return tMATCH;
    } else if(c == '>') {
      return tASSOC;
    }
    pushback(c);
    return '=';

  case '<':
    last_state = lex_state;
    c = nextc();
    if(c == '<' &&
      lex_state != EXPR_DOT &&
      lex_state != EXPR_CLASS &&
      !IS_END() &&
      (!IS_ARG() || space_seen)) {
      int token = heredoc_identifier();
      if(token) return token;
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG; break;
    default:
      lex_state = EXPR_BEG; break;
    }
    if(c == '=') {
      if((c = nextc()) == '>') {
        return tCMP;
      }
      pushback(c);
      return tLEQ;
    }
    if(c == '<') {
      if((c = nextc()) == '=') {
        set_yylval_id(tLSHFT);
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      warn_balanced("<<", "here document");
      return tLSHFT;
    }
    pushback(c);
    return '<';

  case '>':
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG; break;
    default:
      lex_state = EXPR_BEG; break;
    }
    if((c = nextc()) == '=') {
      return tGEQ;
    }
    if(c == '>') {
      if((c = nextc()) == '=') {
        set_yylval_id(tRSHFT);
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      return tRSHFT;
    }
    pushback(c);
    return '>';

  case '"':
    lex_strterm = NEW_STRTERM(str_dquote, '"', 0);
    return tSTRING_BEG;

  case '`':
    if(lex_state == EXPR_FNAME) {
      lex_state = EXPR_ENDFN;
      return c;
    }
    if(lex_state == EXPR_DOT) {
      if(cmd_state)
        lex_state = EXPR_CMDARG;
      else
        lex_state = EXPR_ARG;
      return c;
    }
    lex_strterm = NEW_STRTERM(str_xquote, '`', 0);
    return tXSTRING_BEG;

  case '\'':
    lex_strterm = NEW_STRTERM(str_squote, '\'', 0);
    return tSTRING_BEG;

  case '?':
    if(IS_END()) {
      lex_state = EXPR_VALUE;
      return '?';
    }
    c = nextc();
    if(c == -1) {
      rb_compile_error(parser_state, "incomplete character syntax");
      return 0;
    }
    if(parser_enc_isspace(c, parser_state->enc)) {
      if(!IS_ARG()){
        int c2 = 0;
        switch(c) {
        case ' ':
          c2 = 's';
          break;
        case '\n':
          c2 = 'n';
          break;
        case '\t':
          c2 = 't';
          break;
        case '\v':
          c2 = 'v';
          break;
        case '\r':
          c2 = 'r';
          break;
        case '\f':
          c2 = 'f';
          break;
        }
        if(c2) {
          rb_warn("invalid character syntax; use ?\\%c", c2);
        }
      }
    ternary:
      pushback(c);
      lex_state = EXPR_VALUE;
      return '?';
    }

    newtok();
    enc = parser_state->enc;
    if(!parser_isascii()) {
      if(tokadd_mbchar(c) == -1) return 0;
    } else if((parser_enc_isalnum(c, parser_state->enc) || c == '_') &&
              lex_p < lex_pend && is_identchar(lex_p, lex_pend, parser_state->enc)) {
      goto ternary;
    } else if(c == '\\') {
      if(peek('u')) {
        nextc();
        c = parser_tokadd_utf8(parser_state, &enc, 0, 0, 0);
        if(0x80 <= c) {
          tokaddmbc(c, enc);
        } else {
          tokadd(c);
        }
      } else if(!lex_eol_p() && !(c = *lex_p, ISASCII(c))) {
        nextc();
        if(tokadd_mbchar(c) == -1) return 0;
      } else {
        c = read_escape(0, &enc);
        tokadd(c);
      }
    } else {
      tokadd(c);
    }
    tokfix();
    set_yylval_str(STR_NEW3(tok(), toklen(), enc, 0));
    lex_state = EXPR_END;
    return tCHAR;

  case '&':
    if((c = nextc()) == '&') {
      lex_state = EXPR_BEG;
      if((c = nextc()) == '=') {
        set_yylval_id(tANDOP);
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      return tANDOP;
    } else if(c == '=') {
      set_yylval_id('&');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(c);
    if(IS_SPCARG(c)){
      rb_warning("`&' interpreted as argument prefix");
      c = tAMPER;
    } else if(IS_BEG()) {
      c = tAMPER;
    } else {
      warn_balanced("&", "argument prefix");
      c = '&';
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG;
      break;
    default:
      lex_state = EXPR_BEG;
    }
    return c;

  case '|':
    if((c = nextc()) == '|') {
      lex_state = EXPR_BEG;
      if((c = nextc()) == '=') {
        set_yylval_id(tOROP);
        lex_state = EXPR_BEG;
        return tOP_ASGN;
      }
      pushback(c);
      return tOROP;
    }
    if(c == '=') {
      set_yylval_id('|');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      lex_state = EXPR_ARG;
    } else {
      lex_state = EXPR_BEG;
    }
    pushback(c);
    return '|';

  case '+':
    c = nextc();
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      lex_state = EXPR_ARG;
      if(c == '@') {
        return tUPLUS;
      }
      pushback(c);
      return '+';
    }
    if(c == '=') {
      set_yylval_id('+');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    if(IS_BEG() || (IS_SPCARG(c) && arg_ambiguous())) {
      lex_state = EXPR_BEG;
      pushback(c);
      if(c != -1 && ISDIGIT(c)) {
        c = '+';
        goto start_num;
      }
      return tUPLUS;
    }
    lex_state = EXPR_BEG;
    pushback(c);
    warn_balanced("+", "unary operator");
    return '+';

  case '-':
    c = nextc();
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      lex_state = EXPR_ARG;
      if(c == '@') {
        return tUMINUS;
      }
      pushback(c);
      return '-';
    }
    if(c == '=') {
      set_yylval_id('-');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    if(c == '>') {
      lex_state = EXPR_ARG;
      return tLAMBDA;
    }
    if(IS_BEG() || (IS_SPCARG(c) && arg_ambiguous())) {
      lex_state = EXPR_BEG;
      pushback(c);
      if(c != -1 && ISDIGIT(c)) {
        return tUMINUS_NUM;
      }
      return tUMINUS;
    }
    lex_state = EXPR_BEG;
    pushback(c);
    warn_balanced("-", "unary operator");
    return '-';

  case '.':
    lex_state = EXPR_BEG;
    if((c = nextc()) == '.') {
      if((c = nextc()) == '.') {
        return tDOT3;
      }
      pushback(c);
      return tDOT2;
    }
    pushback(c);
    if(c != -1 && ISDIGIT(c)) {
      yy_error("no .<digit> floating literal anymore; put 0 before dot");
    }
    lex_state = EXPR_DOT;
    return '.';

  start_num:
  case '0': case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
    {
      int is_float, seen_point, seen_e, nondigit;

      is_float = seen_point = seen_e = nondigit = 0;
      lex_state = EXPR_END;
      newtok();
      if(c == '-' || c == '+') {
        tokadd(c);
        c = nextc();
      }
      if(c == '0') {
#define no_digits() do {yy_error("numeric literal without digits"); return 0;} while(0)
        int start = toklen();
        c = nextc();
        if(c == 'x' || c == 'X') {
          /* hexadecimal */
          c = nextc();
          if(c != -1 && ISXDIGIT(c)) {
            do {
              if(c == '_') {
                if(nondigit) break;
                nondigit = c;
                continue;
              }
              if(!ISXDIGIT(c)) break;
              nondigit = 0;
              tokadd(c);
            } while((c = nextc()) != -1);
          }
          pushback(c);
          tokfix();
          if(toklen() == start) {
            no_digits();
          } else if(nondigit) {
            goto trailing_uc;
          }
          set_yylval_number(rb_cstr_to_inum(tok(), 16, FALSE));
          return tINTEGER;
        }

        if(c == 'b' || c == 'B') {
          /* binary */
          c = nextc();
          if(c == '0' || c == '1') {
            do {
              if(c == '_') {
                if(nondigit) break;
                nondigit = c;
                continue;
              }
              if(c != '0' && c != '1') break;
              nondigit = 0;
              tokadd(c);
            } while((c = nextc()) != -1);
          }
          pushback(c);
          tokfix();
          if(toklen() == start) {
            no_digits();
          } else if(nondigit) {
            goto trailing_uc;
          }
          set_yylval_number(rb_cstr_to_inum(tok(), 2, FALSE));
          return tINTEGER;
        }

        if(c == 'd' || c == 'D') {
          /* decimal */
          c = nextc();
          if(c != -1 && ISDIGIT(c)) {
            do {
              if(c == '_') {
                if(nondigit) break;
                nondigit = c;
                continue;
              }
              if(!ISDIGIT(c)) break;
              nondigit = 0;
              tokadd(c);
            } while((c = nextc()) != -1);
          }
          pushback(c);
          tokfix();
          if(toklen() == start) {
            no_digits();
          } else if(nondigit) {
            goto trailing_uc;
          }
          set_yylval_number(rb_cstr_to_inum(tok(), 10, FALSE));
          return tINTEGER;
        }

        if(c == '_') {
          /* 0_0 */
          goto octal_number;
        }

        if(c == 'o' || c == 'O') {
          /* prefixed octal */
          c = nextc();
          if(c == -1 || c == '_' || !ISDIGIT(c)) {
            no_digits();
          }
        }

        if(c >= '0' && c <= '7') {
          /* octal */
          octal_number:
          do {
            if(c == '_') {
              if(nondigit) break;
              nondigit = c;
              continue;
            }
            if(c < '0' || c > '9') break;
            if(c > '7') goto invalid_octal;
            nondigit = 0;
            tokadd(c);
          } while((c = nextc()) != -1);

          if(toklen() > start) {
            pushback(c);
            tokfix();
            if(nondigit) goto trailing_uc;
            set_yylval_number(rb_cstr_to_inum(tok(), 8, FALSE));
            return tINTEGER;
          }
          if(nondigit) {
            pushback(c);
            goto trailing_uc;
          }
        }

        if(c > '7' && c <= '9') {
          invalid_octal:
          yy_error("Invalid octal digit");
        } else if(c == '.' || c == 'e' || c == 'E') {
          tokadd('0');
        } else {
          pushback(c);
          set_yylval_number(INT2FIX(0));
          return tINTEGER;
        }
      }

      for(;;) {
        switch(c) {
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
          nondigit = 0;
          tokadd(c);
          break;

        case '.':
          if(nondigit) goto trailing_uc;
          if(seen_point || seen_e) {
            goto decode_num;
          } else {
            int c0 = nextc();
            if(c0 == -1 || !ISDIGIT(c0)) {
              pushback(c0);
              goto decode_num;
            }
            c = c0;
          }
          tokadd('.');
          tokadd(c);
          is_float++;
          seen_point++;
          nondigit = 0;
          break;

        case 'e':
        case 'E':
          if(nondigit) {
            pushback(c);
            c = nondigit;
            goto decode_num;
          }
          if(seen_e) {
            goto decode_num;
          }
          tokadd(c);
          seen_e++;
          is_float++;
          nondigit = c;
          c = nextc();
          if(c != '-' && c != '+') continue;
          tokadd(c);
          nondigit = c;
          break;

        case '_':      /* `_' in number just ignored */
          if(nondigit) goto decode_num;
          nondigit = c;
          break;

        default:
          goto decode_num;
      }
      c = nextc();
    }

  decode_num:
    pushback(c);
    if(nondigit) {
      char tmp[30];
      trailing_uc:
      snprintf(tmp, sizeof(tmp), "trailing `%c' in number", nondigit);
      yy_error(tmp);
    }
    tokfix();
    if(is_float) {
      double d = strtod(tok(), 0);
      if(errno == ERANGE) {
        rb_warningS("Float %s out of range", tok());
        errno = 0;
      }
      set_yylval_float(rb_float_new(d));
      return tFLOAT;
    }
    set_yylval_number(rb_cstr_to_inum(tok(), 10, FALSE));
    return tINTEGER;
  }

  case ')':
  case ']':
    paren_nest--;
  case '}':
    COND_LEXPOP();
    CMDARG_LEXPOP();
    if(c == ')') {
      lex_state = EXPR_ENDFN;
    } else {
      lex_state = EXPR_ENDARG;
    }
    return c;

  case ':':
    c = nextc();
    if(c == ':') {
      if(IS_BEG() || lex_state == EXPR_CLASS || IS_SPCARG(-1)) {
        lex_state = EXPR_BEG;
        return tCOLON3;
      }
      lex_state = EXPR_DOT;
      return tCOLON2;
    }
    if(IS_END() || ISSPACE(c)) {
      pushback(c);
      warn_balanced(":", "symbol literal");
      lex_state = EXPR_BEG;
      return ':';
    }
    switch(c) {
    case '\'':
      lex_strterm = NEW_STRTERM(str_ssym, c, 0);
      break;
    case '"':
      lex_strterm = NEW_STRTERM(str_dsym, c, 0);
      break;
    default:
      pushback(c);
      break;
    }
    lex_state = EXPR_FNAME;
    return tSYMBEG;

  case '/':
    if(IS_BEG()) {
      lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    if((c = nextc()) == '=') {
      set_yylval_id('/');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    pushback(c);
    if(IS_SPCARG(c)) {
      (void)arg_ambiguous();
      lex_strterm = NEW_STRTERM(str_regexp, '/', 0);
      return tREGEXP_BEG;
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG;
      break;
    default:
      lex_state = EXPR_BEG;
      break;
    }
    warn_balanced("/", "regexp literal");
    return '/';

  case '^':
    if((c = nextc()) == '=') {
      set_yylval_id('^');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG;
      break;
    default:
      lex_state = EXPR_BEG;
      break;
    }
    pushback(c);
    return '^';

  case ';':
    lex_state = EXPR_BEG;
    command_start = TRUE;
    return ';';
  case ',':
    lex_state = EXPR_BEG;
    return ',';

  case '~':
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      if((c = nextc()) != '@') {
        pushback(c);
      }
      lex_state = EXPR_ARG;
    } else {
      lex_state = EXPR_BEG;
    }
    return '~';

  case '(':
    if(IS_BEG()) {
      c = tLPAREN;
    } else if(IS_SPCARG(-1)) {
      c = tLPAREN_ARG;
    }
    paren_nest++;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    lex_state = EXPR_BEG;
    return c;

  case '[':
    paren_nest++;
    if(lex_state == EXPR_FNAME || lex_state == EXPR_DOT) {
      lex_state = EXPR_ARG;
      if((c = nextc()) == ']') {
        if((c = nextc()) == '=') {
          return tASET;
        }
        pushback(c);
        return tAREF;
      }
      pushback(c);
      return '[';
    } else if(IS_BEG()) {
      c = tLBRACK;
    } else if(IS_ARG() && space_seen) {
      c = tLBRACK;
    }
    lex_state = EXPR_BEG;
    COND_PUSH(0);
    CMDARG_PUSH(0);
    return c;

  case '{':
    if(lpar_beg && lpar_beg == paren_nest) {
      lex_state = EXPR_BEG;
      lpar_beg = 0;
      --paren_nest;
      COND_PUSH(0);
      CMDARG_PUSH(0);
      return tLAMBEG;
    }
    if(IS_ARG() || lex_state == EXPR_END || lex_state == EXPR_ENDFN)
      c = '{';          /* block (primary) */
    else if(lex_state == EXPR_ENDARG)
      c = tLBRACE_ARG;  /* block (expr) */
    else
      c = tLBRACE;      /* hash */
    COND_PUSH(0);
    CMDARG_PUSH(0);
    lex_state = EXPR_BEG;
    if(c != tLBRACE) command_start = TRUE;
    return c;

  case '\\':
    c = nextc();
    if(c == '\n') {
      space_seen = 1;
      goto retry; /* skip \\n */
    }
    pushback(c);
    return '\\';

  case '%':
    if(IS_BEG()) {
      intptr_t term;
      intptr_t paren;

      c = nextc();
    quotation:
      if(c == -1 || !ISALNUM(c)) {
        term = c;
        c = 'Q';
      } else {
        term = nextc();
        if(parser_enc_isalnum((int)term, parser_state->enc) || !parser_isascii()) {
          yy_error("unknown type of % string");
          return 0;
        }
      }
      if(c == -1 || term == -1) {
        rb_compile_error(parser_state, "unterminated quoted string meets end of file");
        return 0;
      }
      paren = term;
      if(term == '(') term = ')';
      else if(term == '[') term = ']';
      else if(term == '{') term = '}';
      else if(term == '<') term = '>';
      else paren = 0;

      switch(c) {
      case 'Q':
        lex_strterm = NEW_STRTERM(str_dquote, term, paren);
        return tSTRING_BEG;

      case 'q':
        lex_strterm = NEW_STRTERM(str_squote, term, paren);
        return tSTRING_BEG;

      case 'W':
        lex_strterm = NEW_STRTERM(str_dword, term, paren);
        do {c = nextc();} while(ISSPACE(c));
        pushback(c);
        return tWORDS_BEG;

      case 'w':
        lex_strterm = NEW_STRTERM(str_sword, term, paren);
        do {c = nextc();} while(ISSPACE(c));
        pushback(c);
        return tQWORDS_BEG;

      case 'I':
        lex_strterm = NEW_STRTERM(str_dword, term, paren);
        do {c = nextc();} while (ISSPACE(c));
        pushback(c);
        return tSYMBOLS_BEG;

      case 'i':
        lex_strterm = NEW_STRTERM(str_sword, term, paren);
        do {c = nextc();} while (ISSPACE(c));
        pushback(c);
        return tQSYMBOLS_BEG;

      case 'x':
        lex_strterm = NEW_STRTERM(str_xquote, term, paren);
        return tXSTRING_BEG;

      case 'r':
        lex_strterm = NEW_STRTERM(str_regexp, term, paren);
        return tREGEXP_BEG;

      case 's':
        lex_strterm = NEW_STRTERM(str_ssym, term, paren);
        lex_state = EXPR_FNAME;
        return tSYMBEG;

      default:
        yy_error("unknown type of % string");
        return 0;
      }
    }
    if((c = nextc()) == '=') {
      set_yylval_id('%');
      lex_state = EXPR_BEG;
      return tOP_ASGN;
    }
    if(IS_SPCARG(c)) {
      goto quotation;
    }
    switch(lex_state) {
    case EXPR_FNAME: case EXPR_DOT:
      lex_state = EXPR_ARG;
      break;
    default:
      lex_state = EXPR_BEG;
      break;
    }
    pushback(c);
    warn_balanced("%%", "string literal");
    return '%';

  case '$':
    lex_state = EXPR_END;
    newtok();
    c = nextc();
    switch(c) {
    case '_':             /* $_: last read line string */
      c = nextc();
      if(parser_is_identchar()) {
        tokadd('$');
        tokadd('_');
        break;
      }
      pushback(c);
      c = '_';
      /* fall through */
    case '~':   /* $~: match-data */
    case '*':   /* $*: argv */
    case '$':   /* $$: pid */
    case '?':   /* $?: last status */
    case '!':   /* $!: error string */
    case '@':   /* $@: error position */
    case '/':   /* $/: input record separator */
    case '\\':  /* $\: output record separator */
    case ';':   /* $;: field separator */
    case ',':   /* $,: output field separator */
    case '.':   /* $.: last read line number */
    case '=':   /* $=: ignorecase */
    case ':':   /* $:: load path */
    case '<':   /* $<: reading filename */
    case '>':   /* $>: default output handle */
    case '\"':  /* $": already loaded files */
      tokadd('$');
      tokadd(c);
      tokfix();
      set_yylval_name(parser_intern(tok()));
      return tGVAR;

    case '-':
      tokadd('$');
      tokadd(c);
      c = nextc();
      if(parser_is_identchar()) {
        if(tokadd_mbchar(c) == -1) return 0;
      } else {
        pushback(c);
      }
    gvar:
      tokfix();
      set_yylval_name(parser_intern(tok()));
      return tGVAR;

    case '&':             /* $&: last match */
    case '`':             /* $`: string before last match */
    case '\'':            /* $': string after last match */
    case '+':             /* $+: string matches last paren. */
      if(last_state == EXPR_FNAME) {
        tokadd('$');
        tokadd(c);
        goto gvar;
      }
      set_yylval_node(NEW_BACK_REF(c));
      return tBACK_REF;

    case '1': case '2': case '3':
    case '4': case '5': case '6':
    case '7': case '8': case '9':
      tokadd('$');
      do {
        tokadd(c);
        c = nextc();
      } while(c != -1 && ISDIGIT(c));
      pushback(c);
      if(last_state == EXPR_FNAME) goto gvar;
      tokfix();
      set_yylval_node(NEW_NTH_REF(atoi(tok()+1)));
      return tNTH_REF;

    default:
      if(!parser_is_identchar()) {
        pushback(c);
        return '$';
      }
    case '0':
      tokadd('$');
    }
    break;

  case '@':
    c = nextc();
    newtok();
    tokadd('@');
    if(c == '@') {
      tokadd('@');
      c = nextc();
    }
    if(c != -1 && ISDIGIT(c)) {
      if(tokidx == 1) {
        rb_compile_error(parser_state,
                         "`@%c' is not allowed as an instance variable name", c);
      } else {
        rb_compile_error(parser_state,
                         "`@@%c' is not allowed as a class variable name", c);
      }
      return 0;
    }
    if(!parser_is_identchar()) {
      pushback(c);
      return '@';
    }
    break;

  case '_':
    if(was_bol() && whole_match_p("__END__", 7, 0)) {
      ruby__end__seen = 1;
      eofp = true;
      return -1;
    }
    newtok();
    break;

  default:
    if(!parser_is_identchar()) {
      rb_compile_error(parser_state, "Invalid char `\\x%02X' in expression", c);
      return -1;
    }

    newtok();
    break;
  }

  mb = ENC_CODERANGE_7BIT;
  do {
    if(!ISASCII(c)) mb = ENC_CODERANGE_UNKNOWN;
    if(tokadd_mbchar(c) == -1) return 0;
    c = nextc();
  } while(parser_is_identchar());
  switch(tok()[0]) {
  case '@': case '$':
    pushback(c);
    break;
  default:
    if((c == '!' || c == '?') && !peek('=')) {
      tokadd(c);
    } else {
      pushback(c);
    }
  }
  tokfix();
  {
    int result = 0;

    last_state = lex_state;
    switch(tok()[0]) {
    case '$':
      lex_state = EXPR_END;
      result = tGVAR;
      break;
    case '@':
      lex_state = EXPR_END;
      if(tok()[1] == '@') {
        result = tCVAR;
      } else {
        result = tIVAR;
      }
      break;
    default:
      if(toklast() == '!' || toklast() == '?') {
        result = tFID;
      } else {
        if(lex_state == EXPR_FNAME) {
          if((c = nextc()) == '=' && !peek('~') && !peek('>') &&
              (!peek('=') || (peek_n('>', 1)))) {
            result = tIDENTIFIER;
            tokadd(c);
            tokfix();
          } else {
            pushback(c);
          }
        }
        if(result == 0 && ISUPPER(tok()[0])) {
          result = tCONSTANT;
        } else {
          result = tIDENTIFIER;
        }
      }

      if(IS_LABEL_POSSIBLE()) {
        if(IS_LABEL_SUFFIX(0)) {
          lex_state = EXPR_BEG;
          nextc();
          set_yylval_name(TOK_INTERN(!ENC_SINGLE(mb)));
          return tLABEL;
        }
      }
      if(mb == ENC_CODERANGE_7BIT && lex_state != EXPR_DOT) {
        const struct kwtable *kw;

        /* See if it is a reserved word.  */
        kw = reserved_word(tok(), toklen());
        if(kw) {
          enum lex_state_e state = lex_state;
          lex_state = kw->state;
          if(state == EXPR_FNAME) {
            set_yylval_name(parser_intern(kw->name));
            return kw->id[0];
          }
          if(kw->id[0] == keyword_do) {
            command_start = TRUE;
            if(lpar_beg && lpar_beg == paren_nest) {
              lpar_beg = 0;
              --paren_nest;
              return keyword_do_LAMBDA;
            }
            if(COND_P()) return keyword_do_cond;
            if(CMDARG_P() && state != EXPR_CMDARG)
              return keyword_do_block;
            if(state == EXPR_ENDARG || state == EXPR_BEG)
              return keyword_do_block;
            return keyword_do;
          }
          if(state == EXPR_BEG || state == EXPR_VALUE)
            return kw->id[0];
          else {
            if(kw->id[0] != kw->id[1])
              lex_state = EXPR_BEG;
            return kw->id[1];
          }
        }
      }

      if(IS_BEG() ||
          lex_state == EXPR_DOT ||
          IS_ARG()) {
        if(cmd_state) {
          lex_state = EXPR_CMDARG;
        } else {
          lex_state = EXPR_ARG;
        }
      } else if(lex_state == EXPR_FNAME) {
        lex_state = EXPR_ENDFN;
      } else {
        lex_state = EXPR_END;
      }
    }
    {
      ID ident = TOK_INTERN(!ENC_SINGLE(mb));

      set_yylval_name(ident);
      if(last_state != EXPR_DOT && last_state != EXPR_FNAME &&
          is_local_id(ident) && lvar_defined(ident)) {
        lex_state = EXPR_END;
      }
    }

    return result;
  }
}

#if YYPURE
static int
yylex(void *l, void *p)
#else
yylex(void *p)
#endif
{
  rb_parser_state* parser_state = (rb_parser_state*)p;

  lval = l;
  ((YYSTYPE*)lval)->val = Qundef;

  return parser_yylex(parser_state);
}

VALUE
parser_add_reference(rb_parser_state* parser_state, VALUE obj)
{
  rb_ary_push(references, obj);

  return obj;
}

NODE*
parser_node_newnode(rb_parser_state* parser_state, enum node_type type,
                 VALUE a0, VALUE a1, VALUE a2)
{
  NODE *n = (NODE*)pt_allocate(parser_state, sizeof(NODE));

  n->flags = 0;
  nd_set_type(n, type);
  nd_set_line(n, sourceline);
  n->nd_file = sourcefile;

  n->u1.value = a0;
  n->u2.value = a1;
  n->u3.value = a2;

  return n;
}

enum node_type
nodetype(NODE *node) {  /* for debug */
  return (enum node_type)nd_type(node);
}

int
nodeline(NODE *node) {
  return nd_line(node);
}

static NODE*
parser_newline_node(rb_parser_state* parser_state, NODE *node)
{
  if(node) {
    node = remove_begin(node);
    node->flags |= NODE_FL_NEWLINE;
  }
  return node;
}

static void
fixpos(NODE *node, NODE *orig)
{
  if(!node) return;
  if(!orig) return;
  if(orig == (NODE*)1) return;
  nd_set_line(node, nd_line(orig));
}

/*
static void
parser_warning(rb_parser_state* parser_state, NODE *node, const char *mesg)
{
  int line = ruby_sourceline;
  if(emit_warnings) {
    ruby_sourceline = nd_line(node);
    printf("%s:%li: warning: %s\n", ruby_sourcefile, ruby_sourceline, mesg);
    ruby_sourceline = line;
  }
}
*/

static void
rb_compile_warn(const char *file, int line, const char *fmt, ...)
{
  // TODO
  return;

  char buf[BUFSIZ];
  va_list args;

  if(NIL_P(ruby_verbose)) return;

  snprintf(buf, BUFSIZ, "warning: %s", fmt);

  va_start(args, fmt);
  // compile_warn_print(file, line, buf, args);
  va_end(args);
}

/* rb_compile_warning() reports only in verbose mode */
void
rb_compile_warning(const char *file, int line, const char *fmt, ...)
{
  // TODO
  return;

  char buf[BUFSIZ];
  va_list args;

  snprintf(buf, BUFSIZ, "warning: %s", fmt);

  va_start(args, fmt);
  // compile_warn_print(file, line, buf, args);
  va_end(args);
}

static void
parser_warning(rb_parser_state* parser_state, NODE *node, const char *mesg)
{
  rb_compile_warning(sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warning(node, mesg) parser_warning(parser_state, node, mesg)

static void
parser_warn(rb_parser_state* parser_state, NODE *node, const char *mesg)
{
  rb_compile_warn(sourcefile, nd_line(node), "%s", mesg);
}
#define parser_warn(node, mesg) parser_warn(parser_state, node, mesg)

static NODE*
parser_block_append(rb_parser_state* parser_state, NODE *head, NODE *tail)
{
  NODE *end, *h = head, *nd;

  if(tail == 0) return head;

  if(h == 0) return tail;
  switch(nd_type(h)) {
  case NODE_STR:
  case NODE_LIT:
  case NODE_SELF:
  case NODE_TRUE:
  case NODE_FALSE:
  case NODE_NIL:
    parser_warning(h, "unused literal ignored");
    return tail;
  default:
    h = end = NEW_BLOCK(head);
    end->nd_end = end;
    fixpos(end, head);
    head = end;
    break;
  case NODE_BLOCK:
    end = h->nd_end;
    break;
  }

  nd = end->nd_head;
  switch(nd_type(nd)) {
  case NODE_RETURN:
  case NODE_BREAK:
  case NODE_NEXT:
  case NODE_REDO:
  case NODE_RETRY:
    if(verbose) {
      parser_warning(nd, "statement not reached");
    }
    break;

  default:
    break;
  }

  if(nd_type(tail) != NODE_BLOCK) {
    tail = NEW_BLOCK(tail);
    tail->nd_end = tail;
  }
  end->nd_next = tail;
  h->nd_end = tail->nd_end;
  return head;
}

/* append item to the list */
static NODE*
parser_list_append(rb_parser_state* parser_state, NODE *list, NODE *item)
{
  NODE *last;

  if(list == 0) return NEW_LIST(item);
  if(list->nd_next) {
    last = list->nd_next->nd_end;
  } else {
    last = list;
  }

  list->nd_alen += 1;
  last->nd_next = NEW_LIST(item);
  list->nd_next->nd_end = last->nd_next;
  return list;
}

/* concat two lists */
static NODE*
list_concat(NODE *head, NODE *tail)
{
  NODE *last;

  if(head->nd_next) {
    last = head->nd_next->nd_end;
  } else {
    last = head;
  }

  head->nd_alen += tail->nd_alen;
  last->nd_next = tail;
  if(tail->nd_next) {
    head->nd_next->nd_end = tail->nd_next->nd_end;
  } else {
    head->nd_next->nd_end = tail;
  }

  return head;
}

static int
parser_literal_concat0(rb_parser_state* parser_state, VALUE head, VALUE tail)
{
  if(NIL_P(tail)) return 1;
  if(!parser_enc_compatible(head, tail)) {
    rb_compile_error(parser_state, "string literal encodings differ (%s / %s)",
    parser_enc_name(parser_enc_get(head)),
    parser_enc_name(parser_enc_get(tail)));
    rb_str_resize(head, 0);
    rb_str_resize(tail, 0);
    return 0;
  }
  rb_str_buf_append(head, tail);
  return 1;
}

/* concat two string literals */
static NODE *
parser_literal_concat(rb_parser_state* parser_state, NODE *head, NODE *tail)
{
  enum node_type htype;

  if(!head) return tail;
  if(!tail) return head;

  htype = (enum node_type)nd_type(head);
  if(htype == NODE_EVSTR) {
    NODE *node = NEW_DSTR(STR_NEW0());
    head = list_append(node, head);
  }
  switch(nd_type(tail)) {
  case NODE_STR:
    if(htype == NODE_STR) {
      if(!literal_concat0(head->nd_lit, tail->nd_lit)) {
      error:
        return 0;
      }
    } else {
      list_append(head, tail);
    }
    break;

  case NODE_DSTR:
    if(htype == NODE_STR) {
      if(!literal_concat0(head->nd_lit, tail->nd_lit))
        goto error;
      tail->nd_lit = head->nd_lit;
      head = tail;
    } else if(NIL_P(tail->nd_lit)) {
      head->nd_alen += tail->nd_alen - 1;
      head->nd_next->nd_end->nd_next = tail->nd_next;
      head->nd_next->nd_end = tail->nd_next->nd_end;
    } else {
      nd_set_type(tail, NODE_ARRAY);
      tail->nd_head = NEW_STR(tail->nd_lit);
      list_concat(head, tail);
    }
    break;

  case NODE_EVSTR:
    if(htype == NODE_STR) {
      nd_set_type(head, NODE_DSTR);
      head->nd_alen = 1;
    }
    list_append(head, tail);
    break;
  }
  return head;
}

static NODE *
parser_evstr2dstr(rb_parser_state* parser_state, NODE *node)
{
  if(nd_type(node) == NODE_EVSTR) {
    node = list_append(NEW_DSTR(STR_NEW0()), node);
  }
  return node;
}

static NODE *
parser_new_evstr(rb_parser_state* parser_state, NODE *node)
{
  NODE *head = node;

  if(node) {
    switch(nd_type(node)) {
    case NODE_STR: case NODE_DSTR: case NODE_EVSTR:
      return node;
    }
  }
  return NEW_EVSTR(head);
}

static NODE *
parser_call_bin_op(rb_parser_state* parser_state, NODE *recv, ID id, NODE *arg1)
{
  value_expr(recv);
  value_expr(arg1);
  return NEW_CALL(recv, convert_op(id), NEW_LIST(arg1));
}

static NODE *
parser_call_uni_op(rb_parser_state* parser_state, NODE *recv, ID id)
{
  value_expr(recv);
  return NEW_CALL(recv, convert_op(id), 0);
}

static const struct {
  ID token;
  const char *name;
} op_tbl[] = {
  {tDOT2,	  ".."},
  {tDOT3,	  "..."},
  {tPOW,	  "**"},
  {tDSTAR,  "**"},
  {tUPLUS,	"+@"},
  {tUMINUS,	"-@"},
  {tCMP,	  "<=>"},
  {tGEQ,	  ">="},
  {tLEQ,	  "<="},
  {tEQ,	    "=="},
  {tEQQ,	  "==="},
  {tNEQ,	  "!="},
  {tMATCH,	"=~"},
  {tNMATCH,	"!~"},
  {tAREF,	  "[]"},
  {tASET,	  "[]="},
  {tLSHFT,	"<<"},
  {tRSHFT,	">>"},
  {tCOLON2,	"::"},

  // Added for Rubinius
  {'!',     "!"},
  {'%',     "%"},
  {'&',     "&"},
  {'*',     "*"},
  {'+',     "+"},
  {'-',     "-"},
  {'/',     "/"},
  {'<',     "<"},
  {'>',     ">"},
  {'^',     "^"},
  {'`',     "`"},
  {'|',     "|"},
  {'~',     "~"},
};

#define op_tbl_count numberof(op_tbl)

static ID convert_op(ID id) {
  for(int i = 0; i < op_tbl_count; i++) {
    if(op_tbl[i].token == id) {
      return parser_intern(op_tbl[i].name);
    }
  }
  return id;
}

static NODE*
parser_match_op(rb_parser_state* parser_state, NODE *node1, NODE *node2)
{
  value_expr(node1);
  value_expr(node2);
  if(node1) {
    switch(nd_type(node1)) {
    case NODE_DREGX:
    case NODE_DREGX_ONCE:
      return NEW_MATCH2(node1, node2);

    case NODE_REGEX:
        return NEW_MATCH2(node1, node2);
    }
  }

  if(node2) {
    switch(nd_type(node2)) {
    case NODE_DREGX:
    case NODE_DREGX_ONCE:
      return NEW_MATCH3(node2, node1);

    case NODE_REGEX:
      return NEW_MATCH3(node2, node1);
    }
  }

  return NEW_CALL(node1, convert_op(tMATCH), NEW_LIST(node2));
}

static NODE*
parser_gettable(rb_parser_state* parser_state, ID id)
{
  if(id == keyword_self) {
    return NEW_SELF();
  } else if(id == keyword_nil) {
    return NEW_NIL();
  } else if(id == keyword_true) {
    return NEW_TRUE();
  } else if(id == keyword_false) {
    return NEW_FALSE();
  } else if(id == keyword__FILE__) {
    return NEW_FILE();
  } else if(id == keyword__LINE__) {
    return NEW_NUMBER(INT2FIX(sourceline));
  } else if(id == keyword__ENCODING__) {
    return NEW_ENCODING(STR_NEW2(parser_enc_name(parser_state->enc)));
  } else if(is_local_id(id)) {
    if((in_block() && bv_defined(id)) || local_id(id)) {
      return NEW_LVAR(id);
    }
    /* method call without arguments */
    return NEW_VCALL(id);
  } else if(is_global_id(id)) {
    return NEW_GVAR(id);
  } else if(is_instance_id(id)) {
    return NEW_IVAR(id);
  } else if(is_const_id(id)) {
    return NEW_CONST(id);
  } else if(is_class_id(id)) {
    return NEW_CVAR(id);
  }
  rb_compile_error(parser_state, "identifier %s is not valid", parser_id2name(id));
  return 0;
}

static NODE*
parser_assignable(rb_parser_state* parser_state, ID id, NODE *val)
{
  if(!id) return 0;
  if(id == keyword_self) {
    yy_error("Can't change the value of self");
  } else if(id == keyword_nil) {
    yy_error("Can't assign to nil");
  } else if(id == keyword_true) {
    yy_error("Can't assign to true");
  } else if(id == keyword_false) {
    yy_error("Can't assign to false");
  } else if(id == keyword__FILE__) {
    yy_error("Can't assign to __FILE__");
  } else if(id == keyword__LINE__) {
    yy_error("Can't assign to __LINE__");
  } else if(id == keyword__ENCODING__) {
    yy_error("Can't assign to __ENCODING__");
  } else if(is_local_id(id)) {
    if(!local_id(id)) {
      local_var(id);
    }
    return NEW_LASGN(id, val);
  } else if(is_global_id(id)) {
    return NEW_GASGN(id, val);
  } else if(is_instance_id(id)) {
    return NEW_IASGN(id, val);
  } else if(is_const_id(id)) {
    if(!in_def && !in_single)
      return NEW_CDECL(id, val, 0);
    yy_error("dynamic constant assignment");
  } else if(is_class_id(id)) {
    return NEW_CVASGN(id, val);
  } else {
    rb_compile_error(parser_state, "identifier %s is not valid to set", parser_id2name(id));
  }
  return 0;
}

static ID
parser_shadowing_lvar(rb_parser_state* parser_state, ID name)
{
  if(parser_intern("_") == name) return name;

  if(in_block()) {
    if(bv_var(name)) {
      yy_error("duplicate argument name");
    } else if(bv_defined(name) || local_id(name)) {
      rb_warningS("shadowing outer local variable - %s", parser_id2name(name));
      vtable_add(locals_table->vars, name);
    }
  } else {
    if(local_id(name)) {
      yy_error("duplicate argument name");
    }
  }

  return name;
}

static void
parser_new_bv(rb_parser_state* parser_state, ID name)
{
  if(!name) return;
  if(!is_local_id(name)) {
    rb_compile_error(parser_state, "invalid local variable - %s", parser_id2name(name));
    return;
  }
  shadowing_lvar(name);
  local_var(name);
}

static const struct vtable*
parser_bv_push(rb_parser_state* parser_state) {
  locals_table->args = vtable_alloc(locals_table->args);
  locals_table->vars = vtable_alloc(locals_table->vars);
  return locals_table->args;
}

static void
bv_pop_tables(rb_parser_state* parser_state)
{
  struct vtable *tmp;

  tmp = locals_table->args;
  locals_table->args = locals_table->args->prev;
  vtable_free(tmp);

  tmp = locals_table->vars;
  locals_table->vars = locals_table->vars->prev;
  vtable_free(tmp);
}

static void
parser_bv_pop(rb_parser_state* parser_state, const struct vtable* args) {
  while(locals_table->args != args) {
    bv_pop_tables(parser_state);
    if(!locals_table->args) {
      struct local_vars *local = locals_table->prev;
      free(locals_table);
      locals_table = local;
    }
  }
  bv_pop_tables(parser_state);
}

static bool
parser_in_block(rb_parser_state* parser_state) {
  return locals_table->vars && locals_table->vars->prev;
}

static bool
parser_bv_defined(rb_parser_state* parser_state, ID id)
{
  struct vtable *vars, *args;

  args = locals_table->args;
  vars = locals_table->vars;

  while(vars) {
    if(vtable_included(args, id)) {
      return true;
    }
    if(vtable_included(vars, id)) {
      return true;
    }
    args = args->prev;
    vars = vars->prev;
  }

  return false;
}

static int
parser_bv_var(rb_parser_state* parser_state, ID id)
{
  return vtable_included(locals_table->args, id) ||
            vtable_included(locals_table->vars, id);
}

static NODE *
parser_aryset(rb_parser_state* parser_state, NODE *recv, NODE *idx)
{
  if(recv && nd_type(recv) == NODE_SELF) {
    recv = (NODE *)1;
  } else {
    value_expr(recv);
  }
  return NEW_ATTRASGN(recv, convert_op(tASET), idx);
}

static void
parser_block_dup_check(rb_parser_state* parser_state, NODE *node1, NODE *node2)
{
  if(node2 && node1 && nd_type(node1) == NODE_BLOCK_PASS) {
    compile_error("both block arg and actual block given");
  }
}

static ID
rb_id_attrset(ID id)
{
  id &= ~ID_SCOPE_MASK;
  id |= ID_ATTRSET;
  return id;
}

static NODE *
parser_attrset(rb_parser_state* parser_state, NODE *recv, ID id)
{
  if(recv && nd_type(recv) == NODE_SELF) {
    recv = (NODE *)1;
  }
  return NEW_ATTRASGN(recv, rb_id_attrset(id), 0);
}

static void
rb_parser_backref_error(rb_parser_state* parser_state, NODE *node)
{
  switch(nd_type(node)) {
  case NODE_NTH_REF:
    rb_compile_error(parser_state, "Can't set variable $%u", node->nd_nth);
    break;
  case NODE_BACK_REF:
    rb_compile_error(parser_state, "Can't set variable $%c", (int)node->nd_nth);
    break;
  }
}

static NODE *
parser_arg_concat(rb_parser_state* parser_state, NODE *node1, NODE *node2)
{
  if(!node2) return node1;
  return NEW_ARGSCAT(node1, node2);
}

static NODE *
parser_arg_append(rb_parser_state* parser_state, NODE *node1, NODE *node2)
{
  if(!node1) return NEW_LIST(node2);
  switch(nd_type(node1))  {
  case NODE_ARRAY:
    return list_append(node1, node2);
  case NODE_BLOCK_PASS:
    node1->nd_head = arg_append(node1->nd_head, node2);
    return node1;
  case NODE_ARGSPUSH:
    node1->nd_body = list_append(NEW_LIST(node1->nd_body), node2);
    nd_set_type(node1, NODE_ARGSCAT);
    return node1;
  }
  return NEW_ARGSPUSH(node1, node2);
}

static NODE *
arg_add(rb_parser_state* parser_state, NODE *node1, NODE *node2)
{
  if(!node1) return NEW_LIST(node2);
  if(nd_type(node1) == NODE_ARRAY) {
    return list_append(node1, node2);
  }
  else {
    return NEW_ARGSPUSH(node1, node2);
  }
}

static NODE *
splat_array(NODE* node)
{
  if(nd_type(node) == NODE_SPLAT) node = node->nd_head;
  if(nd_type(node) == NODE_ARRAY) return node;
  return 0;
}

static NODE*
parser_node_assign(rb_parser_state* parser_state, NODE *lhs, NODE *rhs)
{
  if(!lhs) return 0;

  value_expr(rhs);
  switch(nd_type(lhs)) {
  case NODE_GASGN:
  case NODE_IASGN:
  case NODE_LASGN:
  case NODE_DASGN:
  case NODE_DASGN_CURR:
  case NODE_MASGN:
  case NODE_CDECL:
  case NODE_CVDECL:
  case NODE_CVASGN:
    lhs->nd_value = rhs;
    break;

  case NODE_ATTRASGN:
  case NODE_CALL:
    lhs->nd_args = arg_add(parser_state, lhs->nd_args, rhs);
    break;

  default:
    /* should not happen */
    break;
  }

  return lhs;
}

static int
parser_value_expr(rb_parser_state* parser_state, NODE *node)
{
  int cond = 0;

  if(!node) {
    rb_warning("empty expression");
  }

  while(node) {
    switch(nd_type(node)) {
    case NODE_DEFN:
    case NODE_DEFS:
      parser_warning(node, "void value expression");
      return FALSE;

    case NODE_RETURN:
    case NODE_BREAK:
    case NODE_NEXT:
    case NODE_REDO:
    case NODE_RETRY:
      if(!cond) yy_error("void value expression");
      /* or "control never reach"? */
      return FALSE;

    case NODE_BLOCK:
      while(node->nd_next) {
        node = node->nd_next;
      }
      node = node->nd_head;
      break;

    case NODE_BEGIN:
      node = node->nd_body;
      break;

    case NODE_IF:
      if(!node->nd_body) {
        node = node->nd_else;
        break;
      } else if(!node->nd_else) {
        node = node->nd_body;
        break;
      }
      if(!value_expr(node->nd_body)) return FALSE;
      node = node->nd_else;
      break;

    case NODE_AND:
    case NODE_OR:
      cond = 1;
      node = node->nd_2nd;
      break;

    default:
      return TRUE;
    }
  }

  return TRUE;
}

static void
parser_void_stmts(rb_parser_state* parser_state, NODE *node)
{
  if(!RTEST(ruby_verbose)) return;
  if(!node) return;
  if(nd_type(node) != NODE_BLOCK) return;

  for(;;) {
    if(!node->nd_next) return;
    void_expr0(node->nd_head);
    node = node->nd_next;
  }
}

static void
parser_void_expr0(rb_parser_state* parser_state, NODE *node)
{
  const char *useless = NULL;

  if(!verbose) return;

  if(!node) return;
  switch(nd_type(node)) {
  case NODE_CALL:
    switch(node->nd_mid) {
    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case tPOW:
    case tUPLUS:
    case tUMINUS:
    case '|':
    case '^':
    case '&':
    case tCMP:
    case '>':
    case tGEQ:
    case '<':
    case tLEQ:
    case tEQ:
    case tNEQ:
      useless = "";
      break;
    }
    break;

  case NODE_LVAR:
  case NODE_DVAR:
  case NODE_GVAR:
  case NODE_IVAR:
  case NODE_CVAR:
  case NODE_NTH_REF:
  case NODE_BACK_REF:
    useless = "a variable";
    break;
  case NODE_CONST:
    useless = "a constant";
    break;
  case NODE_LIT:
  case NODE_STR:
  case NODE_DSTR:
  case NODE_DREGX:
  case NODE_DREGX_ONCE:
    useless = "a literal";
    break;
  case NODE_COLON2:
  case NODE_COLON3:
    useless = "::";
    break;
  case NODE_DOT2:
    useless = "..";
    break;
  case NODE_DOT3:
    useless = "...";
    break;
  case NODE_SELF:
    useless = "self";
    break;
  case NODE_NIL:
    useless = "nil";
    break;
  case NODE_TRUE:
    useless = "true";
    break;
  case NODE_FALSE:
    useless = "false";
    break;
  case NODE_DEFINED:
    useless = "defined?";
    break;
  }

  if(useless) {
    int line = sourceline;

    sourceline = nd_line(node);
    rb_warn("useless use of %s in void context", useless);
    sourceline = line;
  }
}

static NODE *
remove_begin(NODE *node)
{
  NODE **n = &node, *n1 = node;
  while(n1 && nd_type(n1) == NODE_BEGIN && n1->nd_body) {
    *n = n1 = n1->nd_body;
  }
  return node;
}

static int
assign_in_cond(NODE *node, rb_parser_state* parser_state)
{
  switch(nd_type(node)) {
  case NODE_MASGN:
    yy_error("multiple assignment in conditional");
    return 1;

  case NODE_LASGN:
  case NODE_DASGN:
  case NODE_DASGN_CURR:
  case NODE_GASGN:
  case NODE_IASGN:
    break;

  default:
    return 0;
  }

  if(!node->nd_value) return 1;
  switch(nd_type(node->nd_value)) {
  case NODE_LIT:
  case NODE_STR:
  case NODE_NIL:
  case NODE_TRUE:
  case NODE_FALSE:
    // always warn
    // TODO
    // parser_warn(node->nd_value, "found = in conditional, should be ==");
    return 1;

  case NODE_DSTR:
  case NODE_XSTR:
  case NODE_DXSTR:
  case NODE_EVSTR:
  case NODE_DREGX:
  default:
    break;
  }
  return 1;
}

#define e_option_supplied()   parser_e_option_supplied(parser_state)

static bool
parser_e_option_supplied(rb_parser_state* parser_state)
{
  return strcmp(sourcefile, "-e") == 0;
}

static void
warn_unless_e_option(rb_parser_state* parser_state, NODE *node, const char *str)
{
  if(!e_option_supplied()) parser_warning(node, str);
}

static void
warning_unless_e_option(rb_parser_state* parser_state, NODE *node, const char *str)
{
  if(!e_option_supplied()) parser_warning(node, str);
}

static NODE *cond0(rb_parser_state* parser_state, NODE *node);

static NODE*
range_op(rb_parser_state* parser_state, NODE *node)
{
  if(node == 0) return 0;

  value_expr(node);
  if(nd_type(node) == NODE_LIT && FIXNUM_P(node->nd_lit)) {
    warn_unless_e_option(parser_state, node, "integer literal in conditional range");
    return NEW_CALL(node, tEQ, NEW_LIST(NEW_GVAR(parser_intern("$."))));
  }
  return cond0(parser_state, node);
}

static int
literal_node(NODE *node)
{
  if(!node) return 1;        /* same as NODE_NIL */
  switch(nd_type(node)) {
  case NODE_LIT:
  case NODE_STR:
  case NODE_DSTR:
  case NODE_EVSTR:
  case NODE_DREGX:
  case NODE_DREGX_ONCE:
  case NODE_DSYM:
    return 2;
  case NODE_TRUE:
  case NODE_FALSE:
  case NODE_NIL:
    return 1;
  }
  return 0;
}

static NODE*
cond0(rb_parser_state* parser_state, NODE *node)
{
  if(node == 0) return 0;
  assign_in_cond(node, parser_state);

  switch(nd_type(node)) {
  case NODE_DSTR:
  case NODE_EVSTR:
  case NODE_STR:
    rb_warn0("string literal in condition");
    break;

  case NODE_DREGX:
  case NODE_DREGX_ONCE:
    warning_unless_e_option(parser_state, node, "regex literal in condition");
    return NEW_MATCH2(node, NEW_GVAR(parser_intern("$_")));

  case NODE_AND:
  case NODE_OR:
    node->nd_1st = cond0(parser_state, node->nd_1st);
    node->nd_2nd = cond0(parser_state, node->nd_2nd);
    break;

  case NODE_DOT2:
  case NODE_DOT3:
    node->nd_beg = range_op(parser_state, node->nd_beg);
    node->nd_end = range_op(parser_state, node->nd_end);
    if(nd_type(node) == NODE_DOT2) nd_set_type(node,NODE_FLIP2);
    else if(nd_type(node) == NODE_DOT3) nd_set_type(node, NODE_FLIP3);
    if(!e_option_supplied()) {
      int b = literal_node(node->nd_beg);
      int e = literal_node(node->nd_end);
      if((b == 1 && e == 1) || (b + e >= 2 && verbose)) {
        parser_warn(node, "range literal in condition");
      }
    }
    break;

  case NODE_DSYM:
    parser_warning(node, "literal in condition");
    break;

  case NODE_LIT:
    parser_warning(node, "literal in condition");
    break;

  case NODE_REGEX:
    warn_unless_e_option(parser_state, node, "regex literal in condition");
    nd_set_type(node, NODE_MATCH);
  default:
    break;
  }
  return node;
}

static NODE*
parser_cond(rb_parser_state* parser_state, NODE *node)
{
  if(node == 0) return 0;
  return cond0(parser_state, node);
}

static NODE*
parser_logop(rb_parser_state* parser_state, enum node_type type, NODE *left, NODE *right)
{
  value_expr(left);
  if(left && nd_type(left) == type) {
    NODE *node = left, *second;
    while((second = node->nd_2nd) != 0 && nd_type(second) == type) {
      node = second;
    }
    node->nd_2nd = NEW_NODE(type, second, right, 0);
    return left;
  }
  return NEW_NODE(type, left, right, 0);
}

static void
no_blockarg(rb_parser_state* parser_state, NODE *node)
{
  if(node && nd_type(node) == NODE_BLOCK_PASS) {
    rb_compile_error(parser_state, "block argument should not be given");
  }
}

static NODE *
parser_ret_args(rb_parser_state* parser_state, NODE *node)
{
  if(node) {
    no_blockarg(parser_state, node);
    if(nd_type(node) == NODE_ARRAY) {
      if(node->nd_next == 0) {
        node = node->nd_head;
      } else {
        nd_set_type(node, NODE_VALUES);
      }
    }
  }
  return node;
}

static NODE *
parser_new_yield(rb_parser_state* parser_state, NODE *node)
{
  VALUE state = Qtrue;

  if(node) {
    no_blockarg(parser_state, node);
    if(node && nd_type(node) == NODE_SPLAT) {
      state = Qtrue;
    }
  } else {
    state = Qfalse;
  }
  return NEW_YIELD(node, state);
}

static NODE*
parser_negate_lit(rb_parser_state* parser_state, NODE *node)
{
  switch(TYPE(node->nd_lit)) {
  case T_FIXNUM:
    node->nd_lit = LONG2FIX(-FIX2LONG(node->nd_lit));
    break;
  case T_BIGNUM:
    node->nd_lit = REF(rb_funcall(node->nd_lit, rb_intern("-@"), 0, 0));
    break;
  case T_FLOAT:
    node->nd_lit = REF(rb_float_new(-NUM2DBL(node->nd_lit)));
    break;
  default:
    break;
  }
  return node;
}

static NODE *
arg_blk_pass(NODE *node1, NODE *node2)
{
  if(node2) {
    node2->nd_head = node1;
    return node2;
  }
  return node1;
}

static NODE*
parser_new_args(rb_parser_state* parser_state, NODE *m, NODE *o, ID r, NODE *p, NODE *tail)
{
  int saved_line = sourceline;
  struct rb_args_info *args = tail->nd_ainfo;

  args->pre_args_num   = m ? rb_long2int(m->nd_plen) : 0;
  args->pre_init       = m ? m->nd_next : 0;

  args->post_args_num  = p ? rb_long2int(p->nd_plen) : 0;
  args->post_init      = p ? p->nd_next : 0;
  args->first_post_arg = p ? p->nd_pid : 0;

  args->rest_arg       = r;

  args->opt_args       = o;

  sourceline = saved_line;
  return tail;
}

static NODE*
parser_new_args_tail(rb_parser_state* parser_state, NODE *k, ID kr, ID b)
{
  int saved_line = sourceline;
  struct rb_args_info *args;
  NODE *kw_rest_arg = 0;
  NODE *node;

  args = ALLOC(struct rb_args_info);
  MEMZERO(args, struct rb_args_info, 1);
  node = NEW_NODE(NODE_ARGS, 0, 0, args);

  args->block_arg      = b;
  args->kw_args        = k;
  if(kr) {
    if(kr == 1) {
      kw_rest_arg = (NODE*)kr;
    } else {
      arg_var(kr);
      kw_rest_arg  = NEW_DVAR(kr);
    }
  }
  args->kw_rest_arg    = kw_rest_arg;

  sourceline = saved_line;
  return node;
}

static int
parser_arg_var(rb_parser_state* parser_state, ID id)
{
  vtable_add(locals_table->args, id);
  return vtable_size(locals_table->args) - 1;
}

static int
parser_local_var(rb_parser_state* parser_state, ID id)
{
  vtable_add(locals_table->vars, id);
  return vtable_size(locals_table->vars) - 1;
}

static bool
parser_local_id(rb_parser_state* parser_state, ID id)
{
  struct vtable *vars, *args;

  vars = locals_table->vars;
  args = locals_table->args;

  while(vars && vars->prev) {
    vars = vars->prev;
    args = args->prev;
  }

  return (vtable_included(args, id) || vtable_included(vars, id));
}

static void
parser_local_push(rb_parser_state* parser_state, int top)
{
  struct local_vars *local;

  local = ALLOC(struct local_vars);
  local->prev = locals_table;
  local->args = vtable_alloc(0);
  local->vars = vtable_alloc(0);
  locals_table = local;
}

static void
parser_local_pop(rb_parser_state* parser_state)
{
  struct local_vars *local = locals_table->prev;
  vtable_free(locals_table->args);
  vtable_free(locals_table->vars);
  xfree(locals_table);
  locals_table = local;
}

static ID*
vtable_tblcpy(ID *buf, const struct vtable *src)
{
  int cnt = vtable_size(src);

  if(cnt > 0) {
    buf[0] = cnt;
    for(int i = 0; i < cnt; i++) {
      buf[i] = src->tbl[i];
    }
    return buf;
  }
  return 0;
}

static ID*
parser_local_tbl(rb_parser_state* parser_state)
{
  int arg_cnt = vtable_size(locals_table->args);
  int cnt = arg_cnt + vtable_size(locals_table->vars);
  ID *buf;

  if(cnt <= 0) return 0;
  buf = (ID*)pt_allocate(parser_state, (int)(sizeof(ID) * (cnt + 1)));
  vtable_tblcpy(buf + 1, locals_table->args);
  vtable_tblcpy(buf + arg_cnt + 1, locals_table->vars);
  buf[0] = cnt;
  return buf;
}

VALUE
rb_symbol_new(const char* name, long len, rb_encoding* enc)
{
  VALUE str = parser_enc_str_new(name, len, enc);
  return rb_funcall(str, rb_intern("to_sym"), 0);
}

ID
parser_intern3(const char* name, long len, rb_encoding* enc)
{
  const char *m = name;
  unsigned char c;
  long last;

  VALUE sym = rb_symbol_new(name, len, enc);
  ID id = (SYM2ID(sym) << ID_SCOPE_SHIFT) & ~ID_INTERNAL;

  last = len-1;
  switch(*m) {
  case '$':
    id |= ID_GLOBAL;
    break;
  case '@':
    if(m[1] == '@') {
      m++;
      id |= ID_CLASS;
    } else {
      id |= ID_INSTANCE;
    }
    m++;
    break;
  default:
    c = m[0];
    if(len > 1 && c != '_' && parser_enc_isascii(c, enc) && parser_enc_ispunct(c, enc)) {
      /* operators */
      for(int i = 0; i < op_tbl_count; i++) {
        if(*op_tbl[i].name == *m && strcmp(op_tbl[i].name, m) == 0) {
          return id;
        }
      }
    }

    if(m[last] == '=') {
      id |= ID_ATTRSET;
    } else if(parser_enc_isupper(m[0], enc)) {
      id |= ID_CONST;
    } else {
      id |= ID_LOCAL;
    }
    break;
  }

  return id;
}

ID
parser_intern2(const char* name, long len)
{
  return parser_intern3(name, len, parser_usascii_encoding());
}

ID
parser_intern(const char* name)
{
  return parser_intern2(name, strlen(name));
}

ID
parser_intern_str(VALUE str)
{
  return parser_intern3(RSTRING_PTR(str), RSTRING_LEN(str), parser_enc_get(str));
}

char*
parser_id2name(ID id)
{
  VALUE str = rb_funcall(ID2SYM(id), rb_intern("to_s"), 0);
  return RSTRING_PTR(str);
}

static int
scan_oct(const char *start, size_t len, size_t *retlen)
{
  const char *s = start;
  int retval = 0;

  while(len-- && *s >= '0' && *s <= '7') {
    retval <<= 3;
    retval |= *s++ - '0';
  }
  *retlen = s - start;
  return retval;
}

static int
scan_hex(const char *start, size_t len, size_t *retlen)
{
  static const char hexdigit[] = "0123456789abcdef0123456789ABCDEF";
  const char *s = start;
  int retval = 0;
  const char *tmp;

  while(len-- && *s && (tmp = strchr(hexdigit, *s))) {
    retval <<= 4;
    retval |= (int)((tmp - hexdigit) & 15);
    s++;
  }
  *retlen = s - start;
  return retval;
}

static ID
parser_internal_id(rb_parser_state *parser_state)
{
  ID id = (ID)vtable_size(locals_table->args) + (ID)vtable_size(locals_table->vars);
  id += ((tLAST_TOKEN - ID_INTERNAL) >> ID_SCOPE_SHIFT) + 1;
  return ID_INTERNAL | (id << ID_SCOPE_SHIFT);
}

};

