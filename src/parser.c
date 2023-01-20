#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 106
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_AMP = 2,
  anon_sym_LPAREN = 3,
  anon_sym_ref = 4,
  anon_sym_RPAREN = 5,
  anon_sym_TILDE = 6,
  anon_sym_deref = 7,
  anon_sym_AT = 8,
  anon_sym_copy = 9,
  aux_sym_quote_token1 = 10,
  anon_sym_quote = 11,
  anon_sym_BQUOTE = 12,
  anon_sym_quasiquote = 13,
  anon_sym_PERCENT_AT = 14,
  anon_sym_unquote_DASHsplicing = 15,
  anon_sym_PERCENT = 16,
  anon_sym_unquote = 17,
  anon_sym_DOLLAR = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_LBRACE = 21,
  anon_sym_RBRACE = 22,
  anon_sym_DOT = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_char = 26,
  sym_string = 27,
  sym_rawstring = 28,
  anon_sym_POUND_DQUOTE = 29,
  anon_sym_DQUOTE = 30,
  anon_sym_CARET = 31,
  aux_sym_internalpattern_token1 = 32,
  anon_sym_BSLASH = 33,
  anon_sym_1 = 34,
  anon_sym_2 = 35,
  anon_sym_3 = 36,
  anon_sym_4 = 37,
  anon_sym_5 = 38,
  anon_sym_6 = 39,
  anon_sym_7 = 40,
  anon_sym_8 = 41,
  anon_sym_9 = 42,
  anon_sym_a = 43,
  anon_sym_c = 44,
  anon_sym_d = 45,
  anon_sym_g = 46,
  anon_sym_l = 47,
  anon_sym_p = 48,
  anon_sym_s = 49,
  anon_sym_u = 50,
  anon_sym_w = 51,
  anon_sym_x = 52,
  anon_sym_n = 53,
  anon_sym_r = 54,
  anon_sym_t = 55,
  anon_sym_STAR = 56,
  anon_sym_DASH = 57,
  anon_sym_BSLASHb = 58,
  aux_sym_patternescaped_token1 = 59,
  anon_sym_BSLASHf = 60,
  aux_sym_bracketclass_token1 = 61,
  sym_range = 62,
  aux_sym_float_token1 = 63,
  sym_floatnoperiod = 64,
  sym_byte = 65,
  sym_long = 66,
  sym_integer = 67,
  sym_comment = 68,
  sym_source = 69,
  sym__sexpr = 70,
  sym_ref = 71,
  sym_deref = 72,
  sym_copy = 73,
  sym_quote = 74,
  sym_quasiquote = 75,
  sym_unquotesplicing = 76,
  sym_unquote = 77,
  sym_list = 78,
  sym_staticarray = 79,
  sym_array = 80,
  sym_dictionary = 81,
  sym_symbol = 82,
  sym_bool = 83,
  sym_pattern = 84,
  sym_internalpattern = 85,
  sym_patternescaped = 86,
  sym_bracketclass = 87,
  sym_capture = 88,
  sym_number = 89,
  sym_float = 90,
  sym_double = 91,
  aux_sym_source_repeat1 = 92,
  aux_sym_symbol_repeat1 = 93,
  aux_sym_internalpattern_repeat1 = 94,
  aux_sym_bracketclass_repeat1 = 95,
  aux_sym_bracketclass_repeat2 = 96,
  aux_sym_capture_repeat1 = 97,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_AMP] = "&",
  [anon_sym_LPAREN] = "(",
  [anon_sym_ref] = "ref",
  [anon_sym_RPAREN] = ")",
  [anon_sym_TILDE] = "~",
  [anon_sym_deref] = "deref",
  [anon_sym_AT] = "@",
  [anon_sym_copy] = "copy",
  [aux_sym_quote_token1] = "quote_token1",
  [anon_sym_quote] = "quote",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_quasiquote] = "quasiquote",
  [anon_sym_PERCENT_AT] = "%@",
  [anon_sym_unquote_DASHsplicing] = "unquote-splicing",
  [anon_sym_PERCENT] = "%",
  [anon_sym_unquote] = "unquote",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DOT] = ".",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_rawstring] = "rawstring",
  [anon_sym_POUND_DQUOTE] = "#\"",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_CARET] = "^",
  [aux_sym_internalpattern_token1] = "internalpattern_token1",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_1] = "1",
  [anon_sym_2] = "2",
  [anon_sym_3] = "3",
  [anon_sym_4] = "4",
  [anon_sym_5] = "5",
  [anon_sym_6] = "6",
  [anon_sym_7] = "7",
  [anon_sym_8] = "8",
  [anon_sym_9] = "9",
  [anon_sym_a] = "a",
  [anon_sym_c] = "c",
  [anon_sym_d] = "d",
  [anon_sym_g] = "g",
  [anon_sym_l] = "l",
  [anon_sym_p] = "p",
  [anon_sym_s] = "s",
  [anon_sym_u] = "u",
  [anon_sym_w] = "w",
  [anon_sym_x] = "x",
  [anon_sym_n] = "n",
  [anon_sym_r] = "r",
  [anon_sym_t] = "t",
  [anon_sym_STAR] = "*",
  [anon_sym_DASH] = "-",
  [anon_sym_BSLASHb] = "\\b",
  [aux_sym_patternescaped_token1] = "patternescaped_token1",
  [anon_sym_BSLASHf] = "\\f",
  [aux_sym_bracketclass_token1] = "bracketclass_token1",
  [sym_range] = "range",
  [aux_sym_float_token1] = "float_token1",
  [sym_floatnoperiod] = "floatnoperiod",
  [sym_byte] = "byte",
  [sym_long] = "long",
  [sym_integer] = "integer",
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__sexpr] = "_sexpr",
  [sym_ref] = "ref",
  [sym_deref] = "deref",
  [sym_copy] = "copy",
  [sym_quote] = "quote",
  [sym_quasiquote] = "quasiquote",
  [sym_unquotesplicing] = "unquotesplicing",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [sym_staticarray] = "staticarray",
  [sym_array] = "array",
  [sym_dictionary] = "dictionary",
  [sym_symbol] = "symbol",
  [sym_bool] = "bool",
  [sym_pattern] = "pattern",
  [sym_internalpattern] = "internalpattern",
  [sym_patternescaped] = "patternescaped",
  [sym_bracketclass] = "bracketclass",
  [sym_capture] = "capture",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_double] = "double",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_symbol_repeat1] = "symbol_repeat1",
  [aux_sym_internalpattern_repeat1] = "internalpattern_repeat1",
  [aux_sym_bracketclass_repeat1] = "bracketclass_repeat1",
  [aux_sym_bracketclass_repeat2] = "bracketclass_repeat2",
  [aux_sym_capture_repeat1] = "capture_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_deref] = anon_sym_deref,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_copy] = anon_sym_copy,
  [aux_sym_quote_token1] = aux_sym_quote_token1,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_quasiquote] = anon_sym_quasiquote,
  [anon_sym_PERCENT_AT] = anon_sym_PERCENT_AT,
  [anon_sym_unquote_DASHsplicing] = anon_sym_unquote_DASHsplicing,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_unquote] = anon_sym_unquote,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_rawstring] = sym_rawstring,
  [anon_sym_POUND_DQUOTE] = anon_sym_POUND_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_CARET] = anon_sym_CARET,
  [aux_sym_internalpattern_token1] = aux_sym_internalpattern_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_3] = anon_sym_3,
  [anon_sym_4] = anon_sym_4,
  [anon_sym_5] = anon_sym_5,
  [anon_sym_6] = anon_sym_6,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_8] = anon_sym_8,
  [anon_sym_9] = anon_sym_9,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_c] = anon_sym_c,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_g] = anon_sym_g,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_s] = anon_sym_s,
  [anon_sym_u] = anon_sym_u,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_x] = anon_sym_x,
  [anon_sym_n] = anon_sym_n,
  [anon_sym_r] = anon_sym_r,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BSLASHb] = anon_sym_BSLASHb,
  [aux_sym_patternescaped_token1] = aux_sym_patternescaped_token1,
  [anon_sym_BSLASHf] = anon_sym_BSLASHf,
  [aux_sym_bracketclass_token1] = aux_sym_bracketclass_token1,
  [sym_range] = sym_range,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [sym_floatnoperiod] = sym_floatnoperiod,
  [sym_byte] = sym_byte,
  [sym_long] = sym_long,
  [sym_integer] = sym_integer,
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__sexpr] = sym__sexpr,
  [sym_ref] = sym_ref,
  [sym_deref] = sym_deref,
  [sym_copy] = sym_copy,
  [sym_quote] = sym_quote,
  [sym_quasiquote] = sym_quasiquote,
  [sym_unquotesplicing] = sym_unquotesplicing,
  [sym_unquote] = sym_unquote,
  [sym_list] = sym_list,
  [sym_staticarray] = sym_staticarray,
  [sym_array] = sym_array,
  [sym_dictionary] = sym_dictionary,
  [sym_symbol] = sym_symbol,
  [sym_bool] = sym_bool,
  [sym_pattern] = sym_pattern,
  [sym_internalpattern] = sym_internalpattern,
  [sym_patternescaped] = sym_patternescaped,
  [sym_bracketclass] = sym_bracketclass,
  [sym_capture] = sym_capture,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_double] = sym_double,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_symbol_repeat1] = aux_sym_symbol_repeat1,
  [aux_sym_internalpattern_repeat1] = aux_sym_internalpattern_repeat1,
  [aux_sym_bracketclass_repeat1] = aux_sym_bracketclass_repeat1,
  [aux_sym_bracketclass_repeat2] = aux_sym_bracketclass_repeat2,
  [aux_sym_capture_repeat1] = aux_sym_capture_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_copy] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quote_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quasiquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote_DASHsplicing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rawstring] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_internalpattern_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_6] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_g] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_x] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_n] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHb] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_patternescaped_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHf] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_bracketclass_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_floatnoperiod] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_long] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__sexpr] = {
    .visible = false,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_deref] = {
    .visible = true,
    .named = true,
  },
  [sym_copy] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_quasiquote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquotesplicing] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_staticarray] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_dictionary] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_internalpattern] = {
    .visible = true,
    .named = true,
  },
  [sym_patternescaped] = {
    .visible = true,
    .named = true,
  },
  [sym_bracketclass] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_double] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_internalpattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracketclass_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bracketclass_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_capture_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 69,
  [73] = 68,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 64,
  [84] = 67,
  [85] = 75,
  [86] = 76,
  [87] = 71,
  [88] = 88,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 103,
  [105] = 102,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 'c'
    ? (c < ';'
      ? (c < 0
        ? c == 0
        : (c <= 31 || (c >= '1' && c <= '9')))
      : (c <= ';' || (c < '['
        ? c == '@'
        : (c <= '^' || (c >= '`' && c <= 'a')))))
    : (c <= 'd' || (c < 'p'
      ? (c < 'l'
        ? c == 'g'
        : (c <= 'l' || c == 'n'))
      : (c <= 'p' || (c < 'w'
        ? (c >= 'r' && c <= 'u')
        : (c <= 'x' || (c >= '{' && c <= 127)))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < ';'
    ? (c < '#'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : c <= '^')
      : (c <= '`' || (c >= '{' && c <= 127)))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= '9' || (c < '['
      ? (c < '@'
        ? c == ';'
        : c <= 'F')
      : (c <= '^' || (c < '{'
        ? (c >= '`' && c <= 'f')
        : c <= 127)))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= '9' || (c < '['
      ? (c < '@'
        ? c == ';'
        : c <= '@')
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= 127)))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : c <= '^')
      : (c <= '`' || (c >= '{' && c <= 127)))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= '9' || (c < '['
      ? (c < '@'
        ? c == ';'
        : c <= 'F')
      : (c <= '^' || (c < '{'
        ? (c >= '`' && c <= 'e')
        : c <= 127)))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < '0'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '.'
        ? c == ','
        : c <= '.')))
    : (c <= '1' || (c < '['
      ? (c < '@'
        ? c == ';'
        : c <= '@')
      : (c <= '^' || (c < '{'
        ? c == '`'
        : c <= 127)))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < ';'
    ? (c < '"'
      ? (c < 0
        ? c == 0
        : c <= ' ')
      : (c <= ')' || (c < '0'
        ? c == ','
        : c <= '9')))
    : (c <= ';' || (c < '`'
      ? (c < '['
        ? c == '@'
        : c <= '^')
      : (c <= '`' || (c >= '{' && c <= 127)))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0)
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '.') ADVANCE(56);
      if (!sym_identifier_character_set_1(lookahead)) ADVANCE(60);
      if (lookahead == '1') ADVANCE(80);
      if (lookahead == '2') ADVANCE(82);
      if (lookahead == '3') ADVANCE(84);
      if (lookahead == '4') ADVANCE(86);
      if (lookahead == '5') ADVANCE(88);
      if (lookahead == '6') ADVANCE(90);
      if (lookahead == '7') ADVANCE(92);
      if (lookahead == '8') ADVANCE(94);
      if (lookahead == '9') ADVANCE(96);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(45);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(1)
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '2') ADVANCE(81);
      if (lookahead == '3') ADVANCE(83);
      if (lookahead == '4') ADVANCE(85);
      if (lookahead == '5') ADVANCE(87);
      if (lookahead == '6') ADVANCE(89);
      if (lookahead == '7') ADVANCE(91);
      if (lookahead == '8') ADVANCE(93);
      if (lookahead == '9') ADVANCE(95);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(119);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(75);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == '^') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == 'b') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(134);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '^') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          lookahead != '[') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(30)
      if (lookahead == ';') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '"' || ')' < lookahead) &&
          lookahead != '.' &&
          lookahead != '@' &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(129);
      if (lookahead == ';') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 39:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(40)
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead > 31 &&
          (lookahead < '1' || '9' < lookahead) &&
          lookahead != '^' &&
          (lookahead < '|' || 127 < lookahead)) ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '$') ADVANCE(51);
      if (lookahead == '%') ADVANCE(50);
      if (lookahead == '&') ADVANCE(42);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(40)
      if (lookahead == '.') ADVANCE(56);
      if (lookahead == ';') ADVANCE(148);
      if (lookahead == '@') ADVANCE(46);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(53);
      if (lookahead == '`') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '{') ADVANCE(54);
      if (lookahead == '}') ADVANCE(55);
      if (lookahead == '~') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead > 31 &&
          lookahead != '^' &&
          (lookahead < '|' || 127 < lookahead)) ADVANCE(60);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_quote_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PERCENT_AT);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '@') ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(5);
      if (!sym_identifier_character_set_2(lookahead)) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_3(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_4(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == '"') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_char);
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_rawstring);
      if (lookahead == '"') ADVANCE(5);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND_DQUOTE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_internalpattern_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_internalpattern_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(75);
      if (lookahead == ';') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_internalpattern_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_1);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_2);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_3);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_3);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_4);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_4);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_5);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_5);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_6);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_6);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_7);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_7);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_8);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_8);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_9);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_9);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_a);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_c);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_c);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_d);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_g);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_g);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_l);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_l);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_p);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_p);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_s);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_w);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_x);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_n);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_r);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_t);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASHb);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_patternescaped_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_patternescaped_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(129);
      if (lookahead == ';') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_patternescaped_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_BSLASHf);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_bracketclass_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_bracketclass_token1);
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_bracketclass_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(134);
      if (lookahead == ';') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '-' &&
          (lookahead < '[' || '^' < lookahead)) ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_bracketclass_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_range);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_floatnoperiod);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_floatnoperiod);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_byte);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_byte);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_long);
      if (!sym_identifier_character_set_5(lookahead)) ADVANCE(60);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(58);
      if (!sym_identifier_character_set_8(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym_identifier_character_set_8(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym_identifier_character_set_7(lookahead)) ADVANCE(60);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'l') ADVANCE(143);
      if (!sym_identifier_character_set_6(lookahead)) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0)
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'q') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(5);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'q') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_copy);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_deref);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 32:
      if (lookahead == 'q') ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_unquote);
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_quasiquote);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_unquote_DASHsplicing);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 39},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 39},
  [4] = {.lex_state = 39},
  [5] = {.lex_state = 39},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 39},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 39},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 39},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 39},
  [16] = {.lex_state = 39},
  [17] = {.lex_state = 39},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 39},
  [24] = {.lex_state = 39},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 39},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 39},
  [31] = {.lex_state = 39},
  [32] = {.lex_state = 39},
  [33] = {.lex_state = 39},
  [34] = {.lex_state = 39},
  [35] = {.lex_state = 39},
  [36] = {.lex_state = 39},
  [37] = {.lex_state = 39},
  [38] = {.lex_state = 39},
  [39] = {.lex_state = 39},
  [40] = {.lex_state = 39},
  [41] = {.lex_state = 39},
  [42] = {.lex_state = 39},
  [43] = {.lex_state = 39},
  [44] = {.lex_state = 39},
  [45] = {.lex_state = 39},
  [46] = {.lex_state = 39},
  [47] = {.lex_state = 39},
  [48] = {.lex_state = 39},
  [49] = {.lex_state = 39},
  [50] = {.lex_state = 39},
  [51] = {.lex_state = 39},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 39},
  [54] = {.lex_state = 39},
  [55] = {.lex_state = 39},
  [56] = {.lex_state = 39},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 29},
  [63] = {.lex_state = 29},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 29},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 29},
  [69] = {.lex_state = 29},
  [70] = {.lex_state = 29},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 29},
  [73] = {.lex_state = 29},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 29},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 29},
  [82] = {.lex_state = 29},
  [83] = {.lex_state = 29},
  [84] = {.lex_state = 29},
  [85] = {.lex_state = 29},
  [86] = {.lex_state = 29},
  [87] = {.lex_state = 29},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 30},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 31},
  [103] = {.lex_state = 31},
  [104] = {.lex_state = 31},
  [105] = {.lex_state = 31},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_deref] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_copy] = ACTIONS(1),
    [aux_sym_quote_token1] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_quasiquote] = ACTIONS(1),
    [anon_sym_PERCENT_AT] = ACTIONS(1),
    [anon_sym_unquote_DASHsplicing] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_unquote] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_POUND_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_2] = ACTIONS(1),
    [anon_sym_3] = ACTIONS(1),
    [anon_sym_4] = ACTIONS(1),
    [anon_sym_5] = ACTIONS(1),
    [anon_sym_6] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_8] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
    [anon_sym_c] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_g] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_s] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_x] = ACTIONS(1),
    [anon_sym_n] = ACTIONS(1),
    [anon_sym_r] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BSLASHb] = ACTIONS(1),
    [anon_sym_BSLASHf] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(100),
    [sym__sexpr] = STATE(9),
    [sym_ref] = STATE(9),
    [sym_deref] = STATE(9),
    [sym_copy] = STATE(9),
    [sym_quote] = STATE(9),
    [sym_quasiquote] = STATE(9),
    [sym_unquotesplicing] = STATE(9),
    [sym_unquote] = STATE(9),
    [sym_list] = STATE(9),
    [sym_staticarray] = STATE(9),
    [sym_array] = STATE(9),
    [sym_dictionary] = STATE(9),
    [sym_symbol] = STATE(9),
    [sym_bool] = STATE(9),
    [sym_pattern] = STATE(9),
    [sym_number] = STATE(9),
    [sym_float] = STATE(45),
    [sym_double] = STATE(45),
    [aux_sym_source_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [aux_sym_quote_token1] = ACTIONS(17),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_PERCENT_AT] = ACTIONS(21),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_char] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_rawstring] = ACTIONS(33),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [sym_floatnoperiod] = ACTIONS(39),
    [sym_byte] = ACTIONS(39),
    [sym_long] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexpr] = STATE(8),
    [sym_ref] = STATE(8),
    [sym_deref] = STATE(8),
    [sym_copy] = STATE(8),
    [sym_quote] = STATE(8),
    [sym_quasiquote] = STATE(8),
    [sym_unquotesplicing] = STATE(8),
    [sym_unquote] = STATE(8),
    [sym_list] = STATE(8),
    [sym_staticarray] = STATE(8),
    [sym_array] = STATE(8),
    [sym_dictionary] = STATE(8),
    [sym_symbol] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_pattern] = STATE(8),
    [sym_number] = STATE(8),
    [sym_float] = STATE(45),
    [sym_double] = STATE(45),
    [aux_sym_source_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_AMP] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(41),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(13),
    [anon_sym_deref] = ACTIONS(45),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_copy] = ACTIONS(47),
    [aux_sym_quote_token1] = ACTIONS(17),
    [anon_sym_quote] = ACTIONS(49),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_quasiquote] = ACTIONS(51),
    [anon_sym_PERCENT_AT] = ACTIONS(21),
    [anon_sym_unquote_DASHsplicing] = ACTIONS(53),
    [anon_sym_PERCENT] = ACTIONS(23),
    [anon_sym_unquote] = ACTIONS(55),
    [anon_sym_DOLLAR] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [sym_char] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_rawstring] = ACTIONS(57),
    [anon_sym_POUND_DQUOTE] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [sym_floatnoperiod] = ACTIONS(39),
    [sym_byte] = ACTIONS(39),
    [sym_long] = ACTIONS(39),
    [sym_integer] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_AMP,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    ACTIONS(70), 1,
      anon_sym_TILDE,
    ACTIONS(73), 1,
      anon_sym_AT,
    ACTIONS(76), 1,
      aux_sym_quote_token1,
    ACTIONS(79), 1,
      anon_sym_BQUOTE,
    ACTIONS(82), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(85), 1,
      anon_sym_PERCENT,
    ACTIONS(88), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
    ACTIONS(103), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_float_token1,
    ACTIONS(97), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(100), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
    ACTIONS(109), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [90] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(114), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(6), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [177] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(118), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [264] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(118), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [351] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(118), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [438] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(118), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [525] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(118), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(3), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [612] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(130), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(5), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [699] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(134), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(7), 17,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
      aux_sym_source_repeat1,
  [786] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(136), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(93), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [869] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(138), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(41), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [952] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(140), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(40), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1035] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(142), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(39), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1118] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(144), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(50), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1201] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(146), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(38), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1284] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(148), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(36), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1367] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(150), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(97), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1450] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(152), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(95), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1533] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(154), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(92), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1616] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(156), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(99), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1699] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(158), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(91), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1782] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_AMP,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_TILDE,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      aux_sym_quote_token1,
    ACTIONS(19), 1,
      anon_sym_BQUOTE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_AT,
    ACTIONS(23), 1,
      anon_sym_PERCENT,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_POUND_DQUOTE,
    ACTIONS(37), 1,
      aux_sym_float_token1,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 2,
      sym_float,
      sym_double,
    ACTIONS(160), 3,
      sym_char,
      sym_string,
      sym_rawstring,
    ACTIONS(39), 4,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    STATE(34), 16,
      sym__sexpr,
      sym_ref,
      sym_deref,
      sym_copy,
      sym_quote,
      sym_quasiquote,
      sym_unquotesplicing,
      sym_unquote,
      sym_list,
      sym_staticarray,
      sym_array,
      sym_dictionary,
      sym_symbol,
      sym_bool,
      sym_pattern,
      sym_number,
  [1865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 33,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_BSLASH,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_a,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_l,
      anon_sym_p,
      anon_sym_s,
      anon_sym_u,
      anon_sym_w,
      anon_sym_x,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_STAR,
      anon_sym_DASH,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 33,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_BSLASH,
      anon_sym_1,
      anon_sym_2,
      anon_sym_3,
      anon_sym_4,
      anon_sym_5,
      anon_sym_6,
      anon_sym_7,
      anon_sym_8,
      anon_sym_9,
      anon_sym_a,
      anon_sym_c,
      anon_sym_d,
      anon_sym_g,
      anon_sym_l,
      anon_sym_p,
      anon_sym_s,
      anon_sym_u,
      anon_sym_w,
      anon_sym_x,
      anon_sym_n,
      anon_sym_r,
      anon_sym_t,
      anon_sym_STAR,
      anon_sym_DASH,
  [1943] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(168), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(166), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [1984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(174), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(172), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2025] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_DOT,
    STATE(28), 1,
      aux_sym_symbol_repeat1,
    ACTIONS(181), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(179), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(172), 20,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DOT,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(183), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(187), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(191), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(195), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(199), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(203), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(207), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(211), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(215), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(219), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(223), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(227), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(231), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2557] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(235), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(239), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(243), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(247), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2697] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(251), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2732] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(255), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(259), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2802] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(263), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2837] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(267), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(271), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(275), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(279), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [2977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 8,
      anon_sym_PERCENT,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_floatnoperiod,
      sym_byte,
      sym_long,
      sym_integer,
    ACTIONS(283), 19,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_AT,
      aux_sym_quote_token1,
      anon_sym_BQUOTE,
      anon_sym_PERCENT_AT,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_char,
      sym_string,
      sym_rawstring,
      anon_sym_POUND_DQUOTE,
      aux_sym_float_token1,
  [3012] = 10,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      aux_sym_internalpattern_token1,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    STATE(59), 4,
      sym_patternescaped,
      sym_bracketclass,
      sym_capture,
      aux_sym_internalpattern_repeat1,
  [3046] = 10,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_CARET,
    ACTIONS(309), 1,
      aux_sym_internalpattern_token1,
    STATE(94), 1,
      sym_internalpattern,
    STATE(57), 4,
      sym_patternescaped,
      sym_bracketclass,
      sym_capture,
      aux_sym_internalpattern_repeat1,
  [3080] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(319), 1,
      aux_sym_internalpattern_token1,
    ACTIONS(322), 1,
      anon_sym_BSLASH,
    ACTIONS(325), 1,
      anon_sym_BSLASHb,
    ACTIONS(328), 1,
      anon_sym_BSLASHf,
    ACTIONS(314), 2,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE,
    STATE(59), 4,
      sym_patternescaped,
      sym_bracketclass,
      sym_capture,
      aux_sym_internalpattern_repeat1,
  [3112] = 10,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(297), 1,
      aux_sym_internalpattern_token1,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
    STATE(59), 4,
      sym_patternescaped,
      sym_bracketclass,
      sym_capture,
      aux_sym_internalpattern_repeat1,
  [3146] = 8,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_internalpattern_token1,
    STATE(60), 4,
      sym_patternescaped,
      sym_bracketclass,
      sym_capture,
      aux_sym_internalpattern_repeat1,
  [3174] = 10,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(349), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(69), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3206] = 10,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      anon_sym_CARET,
    ACTIONS(355), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(72), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3238] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(357), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3253] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(77), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3282] = 8,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    ACTIONS(365), 1,
      aux_sym_internalpattern_token1,
    STATE(78), 3,
      sym_patternescaped,
      sym_bracketclass,
      aux_sym_capture_repeat1,
  [3309] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(367), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3324] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    ACTIONS(371), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(65), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3353] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(361), 1,
      sym_range,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(77), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3382] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(361), 1,
      sym_range,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(77), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3411] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(375), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3426] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(361), 1,
      sym_range,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(77), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3455] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      anon_sym_BSLASHb,
    ACTIONS(345), 1,
      anon_sym_BSLASHf,
    ACTIONS(347), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(70), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3484] = 8,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      anon_sym_BSLASHb,
    ACTIONS(303), 1,
      anon_sym_BSLASHf,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    ACTIONS(383), 1,
      aux_sym_internalpattern_token1,
    STATE(66), 3,
      sym_patternescaped,
      sym_bracketclass,
      aux_sym_capture_repeat1,
  [3511] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3526] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(387), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3541] = 9,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(391), 1,
      anon_sym_BSLASH,
    ACTIONS(394), 1,
      anon_sym_BSLASHb,
    ACTIONS(397), 1,
      anon_sym_BSLASHf,
    ACTIONS(400), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(403), 1,
      sym_range,
    STATE(81), 1,
      aux_sym_bracketclass_repeat1,
    STATE(77), 2,
      sym_patternescaped,
      aux_sym_bracketclass_repeat2,
  [3570] = 8,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    ACTIONS(411), 1,
      aux_sym_internalpattern_token1,
    ACTIONS(414), 1,
      anon_sym_BSLASH,
    ACTIONS(417), 1,
      anon_sym_BSLASHb,
    ACTIONS(420), 1,
      anon_sym_BSLASHf,
    STATE(78), 3,
      sym_patternescaped,
      sym_bracketclass,
      aux_sym_capture_repeat1,
  [3597] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(423), 8,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3611] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(425), 8,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      aux_sym_internalpattern_token1,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3625] = 5,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(429), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(432), 1,
      sym_range,
    STATE(82), 1,
      aux_sym_bracketclass_repeat1,
    ACTIONS(427), 4,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3644] = 5,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(436), 1,
      aux_sym_bracketclass_token1,
    ACTIONS(439), 1,
      sym_range,
    STATE(82), 1,
      aux_sym_bracketclass_repeat1,
    ACTIONS(434), 4,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
  [3663] = 3,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_range,
    ACTIONS(357), 5,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
      aux_sym_bracketclass_token1,
  [3677] = 3,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(443), 1,
      sym_range,
    ACTIONS(367), 5,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
      aux_sym_bracketclass_token1,
  [3691] = 3,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_range,
    ACTIONS(385), 5,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
      aux_sym_bracketclass_token1,
  [3705] = 3,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_range,
    ACTIONS(387), 5,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
      aux_sym_bracketclass_token1,
  [3719] = 3,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(449), 1,
      sym_range,
    ACTIONS(375), 5,
      anon_sym_RBRACK,
      anon_sym_BSLASH,
      anon_sym_BSLASHb,
      anon_sym_BSLASHf,
      aux_sym_bracketclass_token1,
  [3733] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_array,
  [3743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_bracketclass,
  [3753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym_bracketclass,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
  [3777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [3784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_DQUOTE,
  [3791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [3798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_DQUOTE,
  [3805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [3812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_identifier,
  [3819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
  [3826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      ts_builtin_sym_end,
  [3833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
  [3840] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym_patternescaped_token1,
  [3847] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(479), 1,
      aux_sym_patternescaped_token1,
  [3854] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym_patternescaped_token1,
  [3861] = 2,
    ACTIONS(305), 1,
      sym_comment,
    ACTIONS(483), 1,
      aux_sym_patternescaped_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 177,
  [SMALL_STATE(6)] = 264,
  [SMALL_STATE(7)] = 351,
  [SMALL_STATE(8)] = 438,
  [SMALL_STATE(9)] = 525,
  [SMALL_STATE(10)] = 612,
  [SMALL_STATE(11)] = 699,
  [SMALL_STATE(12)] = 786,
  [SMALL_STATE(13)] = 869,
  [SMALL_STATE(14)] = 952,
  [SMALL_STATE(15)] = 1035,
  [SMALL_STATE(16)] = 1118,
  [SMALL_STATE(17)] = 1201,
  [SMALL_STATE(18)] = 1284,
  [SMALL_STATE(19)] = 1367,
  [SMALL_STATE(20)] = 1450,
  [SMALL_STATE(21)] = 1533,
  [SMALL_STATE(22)] = 1616,
  [SMALL_STATE(23)] = 1699,
  [SMALL_STATE(24)] = 1782,
  [SMALL_STATE(25)] = 1865,
  [SMALL_STATE(26)] = 1904,
  [SMALL_STATE(27)] = 1943,
  [SMALL_STATE(28)] = 1984,
  [SMALL_STATE(29)] = 2025,
  [SMALL_STATE(30)] = 2066,
  [SMALL_STATE(31)] = 2102,
  [SMALL_STATE(32)] = 2137,
  [SMALL_STATE(33)] = 2172,
  [SMALL_STATE(34)] = 2207,
  [SMALL_STATE(35)] = 2242,
  [SMALL_STATE(36)] = 2277,
  [SMALL_STATE(37)] = 2312,
  [SMALL_STATE(38)] = 2347,
  [SMALL_STATE(39)] = 2382,
  [SMALL_STATE(40)] = 2417,
  [SMALL_STATE(41)] = 2452,
  [SMALL_STATE(42)] = 2487,
  [SMALL_STATE(43)] = 2522,
  [SMALL_STATE(44)] = 2557,
  [SMALL_STATE(45)] = 2592,
  [SMALL_STATE(46)] = 2627,
  [SMALL_STATE(47)] = 2662,
  [SMALL_STATE(48)] = 2697,
  [SMALL_STATE(49)] = 2732,
  [SMALL_STATE(50)] = 2767,
  [SMALL_STATE(51)] = 2802,
  [SMALL_STATE(52)] = 2837,
  [SMALL_STATE(53)] = 2872,
  [SMALL_STATE(54)] = 2907,
  [SMALL_STATE(55)] = 2942,
  [SMALL_STATE(56)] = 2977,
  [SMALL_STATE(57)] = 3012,
  [SMALL_STATE(58)] = 3046,
  [SMALL_STATE(59)] = 3080,
  [SMALL_STATE(60)] = 3112,
  [SMALL_STATE(61)] = 3146,
  [SMALL_STATE(62)] = 3174,
  [SMALL_STATE(63)] = 3206,
  [SMALL_STATE(64)] = 3238,
  [SMALL_STATE(65)] = 3253,
  [SMALL_STATE(66)] = 3282,
  [SMALL_STATE(67)] = 3309,
  [SMALL_STATE(68)] = 3324,
  [SMALL_STATE(69)] = 3353,
  [SMALL_STATE(70)] = 3382,
  [SMALL_STATE(71)] = 3411,
  [SMALL_STATE(72)] = 3426,
  [SMALL_STATE(73)] = 3455,
  [SMALL_STATE(74)] = 3484,
  [SMALL_STATE(75)] = 3511,
  [SMALL_STATE(76)] = 3526,
  [SMALL_STATE(77)] = 3541,
  [SMALL_STATE(78)] = 3570,
  [SMALL_STATE(79)] = 3597,
  [SMALL_STATE(80)] = 3611,
  [SMALL_STATE(81)] = 3625,
  [SMALL_STATE(82)] = 3644,
  [SMALL_STATE(83)] = 3663,
  [SMALL_STATE(84)] = 3677,
  [SMALL_STATE(85)] = 3691,
  [SMALL_STATE(86)] = 3705,
  [SMALL_STATE(87)] = 3719,
  [SMALL_STATE(88)] = 3733,
  [SMALL_STATE(89)] = 3743,
  [SMALL_STATE(90)] = 3753,
  [SMALL_STATE(91)] = 3763,
  [SMALL_STATE(92)] = 3770,
  [SMALL_STATE(93)] = 3777,
  [SMALL_STATE(94)] = 3784,
  [SMALL_STATE(95)] = 3791,
  [SMALL_STATE(96)] = 3798,
  [SMALL_STATE(97)] = 3805,
  [SMALL_STATE(98)] = 3812,
  [SMALL_STATE(99)] = 3819,
  [SMALL_STATE(100)] = 3826,
  [SMALL_STATE(101)] = 3833,
  [SMALL_STATE(102)] = 3840,
  [SMALL_STATE(103)] = 3847,
  [SMALL_STATE(104)] = 3854,
  [SMALL_STATE(105)] = 3861,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(17),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(15),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(88),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(58),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_repeat1, 2), SHIFT_REPEAT(98),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquotesplicing, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquotesplicing, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deref, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deref, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deref, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deref, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquotesplicing, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquotesplicing, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_staticarray, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_staticarray, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dictionary, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dictionary, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quasiquote, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quasiquote, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_copy, 4),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_float, 1), REDUCE(sym_double, 1),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_float, 1), REDUCE(sym_double, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internalpattern, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(74),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(62),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(59),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(25),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(102),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_internalpattern_repeat1, 2), SHIFT_REPEAT(89),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_internalpattern, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketclass, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketclass, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patternescaped, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracketclass, 4),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patternescaped, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 2),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 2), SHIFT_REPEAT(26),
  [394] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 2), SHIFT_REPEAT(105),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 2), SHIFT_REPEAT(90),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 2), SHIFT_REPEAT(81),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bracketclass_repeat2, 2), SHIFT_REPEAT(77),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(62),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(78),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(25),
  [417] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(102),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_capture_repeat1, 2), SHIFT_REPEAT(89),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 3),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 1),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat2, 1), SHIFT(82),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracketclass_repeat2, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat1, 2),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bracketclass_repeat1, 2), SHIFT_REPEAT(82),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bracketclass_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketclass, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketclass, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracketclass, 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patternescaped, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patternescaped, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internalpattern, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [473] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_internalpattern, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_carp(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
