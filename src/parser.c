#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 269
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 91
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum ts_symbol_identifiers {
  aux_sym_text_token1 = 1,
  aux_sym_text_token2 = 2,
  anon_sym_if = 3,
  anon_sym_elseif = 4,
  anon_sym_else = 5,
  anon_sym_end = 6,
  anon_sym_COMMA = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_range = 9,
  anon_sym_template = 10,
  anon_sym_define = 11,
  anon_sym_block = 12,
  anon_sym_with = 13,
  anon_sym_EQ = 14,
  anon_sym_PIPE = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_SPACE = 18,
  sym_pipeline_stub = 19,
  anon_sym_DOT = 20,
  anon_sym_DOT2 = 21,
  anon_sym_DOLLAR = 22,
  sym_identifier = 23,
  sym_int_literal = 24,
  sym_float_literal = 25,
  sym_imaginary_literal = 26,
  sym_rune_literal = 27,
  sym_true = 28,
  sym_false = 29,
  sym_nil = 30,
  sym_raw_string_literal = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_interpreted_string_literal_token1 = 33,
  sym_escape_sequence = 34,
  sym_comment = 35,
  anon_sym_LBRACE_LBRACE = 36,
  anon_sym_LBRACE_LBRACE_DASH = 37,
  anon_sym_RBRACE_RBRACE = 38,
  anon_sym_DASH_RBRACE_RBRACE = 39,
  sym_template = 40,
  sym__block = 41,
  sym_text = 42,
  sym__action = 43,
  sym_comment_action = 44,
  sym_pipeline_action = 45,
  sym_if_start = 46,
  sym_if_action = 47,
  sym_else_if_action = 48,
  sym_else_if_start = 49,
  sym_else_action = 50,
  sym_else_start = 51,
  sym_if_end = 52,
  sym_range_variable_definition = 53,
  sym_range_action = 54,
  sym_range_start = 55,
  sym_range_end = 56,
  sym_template_action = 57,
  sym_define_action = 58,
  sym_define_start = 59,
  sym_define_end = 60,
  sym_block_action = 61,
  sym_block_start = 62,
  sym_block_end = 63,
  sym_with_action = 64,
  sym_with_start = 65,
  sym_with_end = 66,
  sym__pipeline = 67,
  sym_variable_definition = 68,
  sym_assignment = 69,
  sym_chained_pipeline = 70,
  sym_parenthesized_pipeline = 71,
  sym_method_call = 72,
  sym_function_call = 73,
  sym_argument_list = 74,
  sym__expression = 75,
  sym_selector_expression = 76,
  sym__field_identifier = 77,
  sym_field = 78,
  sym_variable = 79,
  sym__literal = 80,
  sym__boolean_literal = 81,
  sym_dot = 82,
  sym__string_literal = 83,
  sym_interpreted_string_literal = 84,
  sym__left_delimiter = 85,
  sym__right_delimiter = 86,
  aux_sym_template_repeat1 = 87,
  aux_sym_if_action_repeat1 = 88,
  aux_sym_argument_list_repeat1 = 89,
  aux_sym_interpreted_string_literal_repeat1 = 90,
  alias_sym_field_identifier = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_range] = "range",
  [anon_sym_template] = "template",
  [anon_sym_define] = "define",
  [anon_sym_block] = "block",
  [anon_sym_with] = "with",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SPACE] = " ",
  [sym_pipeline_stub] = "pipeline_stub",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT2] = ".",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_rune_literal] = "rune_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym_text] = "text",
  [sym__action] = "_action",
  [sym_comment_action] = "comment_action",
  [sym_pipeline_action] = "action",
  [sym_if_start] = "if_start",
  [sym_if_action] = "if_action",
  [sym_else_if_action] = "else_if_action",
  [sym_else_if_start] = "else_if_start",
  [sym_else_action] = "else_action",
  [sym_else_start] = "else_start",
  [sym_if_end] = "if_end",
  [sym_range_variable_definition] = "range_variable_definition",
  [sym_range_action] = "range_action",
  [sym_range_start] = "range_start",
  [sym_range_end] = "range_end",
  [sym_template_action] = "template_action",
  [sym_define_action] = "define_action",
  [sym_define_start] = "define_start",
  [sym_define_end] = "define_end",
  [sym_block_action] = "block_action",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [sym_with_action] = "with_action",
  [sym_with_start] = "with_start",
  [sym_with_end] = "with_end",
  [sym__pipeline] = "_pipeline",
  [sym_variable_definition] = "variable_definition",
  [sym_assignment] = "assignment",
  [sym_chained_pipeline] = "chained_pipeline",
  [sym_parenthesized_pipeline] = "parenthesized_pipeline",
  [sym_method_call] = "method_call",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym__field_identifier] = "_field_identifier",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym__literal] = "_literal",
  [sym__boolean_literal] = "_boolean_literal",
  [sym_dot] = "dot",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_if_action_repeat1] = "if_action_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_pipeline_stub] = sym_pipeline_stub,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_rune_literal] = sym_rune_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_nil] = sym_nil,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym_text] = sym_text,
  [sym__action] = sym__action,
  [sym_comment_action] = sym_comment_action,
  [sym_pipeline_action] = sym_pipeline_action,
  [sym_if_start] = sym_if_start,
  [sym_if_action] = sym_if_action,
  [sym_else_if_action] = sym_else_if_action,
  [sym_else_if_start] = sym_else_if_start,
  [sym_else_action] = sym_else_action,
  [sym_else_start] = sym_else_start,
  [sym_if_end] = sym_if_end,
  [sym_range_variable_definition] = sym_range_variable_definition,
  [sym_range_action] = sym_range_action,
  [sym_range_start] = sym_range_start,
  [sym_range_end] = sym_range_end,
  [sym_template_action] = sym_template_action,
  [sym_define_action] = sym_define_action,
  [sym_define_start] = sym_define_start,
  [sym_define_end] = sym_define_end,
  [sym_block_action] = sym_block_action,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [sym_with_action] = sym_with_action,
  [sym_with_start] = sym_with_start,
  [sym_with_end] = sym_with_end,
  [sym__pipeline] = sym__pipeline,
  [sym_variable_definition] = sym_variable_definition,
  [sym_assignment] = sym_assignment,
  [sym_chained_pipeline] = sym_chained_pipeline,
  [sym_parenthesized_pipeline] = sym_parenthesized_pipeline,
  [sym_method_call] = sym_method_call,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym__field_identifier] = sym__field_identifier,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym__literal] = sym__literal,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym_dot] = sym_dot,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_if_action_repeat1] = aux_sym_if_action_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_pipeline_stub] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym_comment_action] = {
    .visible = true,
    .named = true,
  },
  [sym_pipeline_action] = {
    .visible = true,
    .named = true,
  },
  [sym_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym_if_action] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_action] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_start] = {
    .visible = true,
    .named = true,
  },
  [sym_else_action] = {
    .visible = true,
    .named = true,
  },
  [sym_else_start] = {
    .visible = true,
    .named = true,
  },
  [sym_if_end] = {
    .visible = true,
    .named = true,
  },
  [sym_range_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_range_action] = {
    .visible = true,
    .named = true,
  },
  [sym_range_start] = {
    .visible = true,
    .named = true,
  },
  [sym_range_end] = {
    .visible = true,
    .named = true,
  },
  [sym_template_action] = {
    .visible = true,
    .named = true,
  },
  [sym_define_action] = {
    .visible = true,
    .named = true,
  },
  [sym_define_start] = {
    .visible = true,
    .named = true,
  },
  [sym_define_end] = {
    .visible = true,
    .named = true,
  },
  [sym_block_action] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [sym_with_action] = {
    .visible = true,
    .named = true,
  },
  [sym_with_start] = {
    .visible = true,
    .named = true,
  },
  [sym_with_end] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_chained_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__right_delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_element = 7,
  field_field = 8,
  field_function = 9,
  field_index = 10,
  field_method = 11,
  field_name = 12,
  field_operand = 13,
  field_option = 14,
  field_range = 15,
  field_value = 16,
  field_variable = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_method] = "method",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_option] = "option",
  [field_range] = "range",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 1},
  [13] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_option, 1},
  [2] =
    {field_alternative, 1},
  [3] =
    {field_consequence, 1},
  [4] =
    {field_body, 1},
  [5] =
    {field_name, 1},
  [6] =
    {field_arguments, 1},
    {field_function, 0},
  [8] =
    {field_arguments, 1},
    {field_method, 0},
  [10] =
    {field_condition, 2},
  [11] =
    {field_range, 2},
  [12] =
    {field_name, 2},
  [13] =
    {field_field, 2},
    {field_operand, 0},
  [15] =
    {field_value, 2},
    {field_variable, 0},
  [17] =
    {field_argument, 3},
    {field_name, 2},
  [19] =
    {field_alternative, 4},
  [20] =
    {field_alternative, 5},
    {field_body, 1},
  [22] =
    {field_alternative, 5},
    {field_consequence, 1},
  [24] =
    {field_element, 2},
    {field_index, 0},
    {field_range, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 12,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 23,
  [28] = 26,
  [29] = 25,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 34,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 39,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 48,
  [50] = 47,
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
  [62] = 58,
  [63] = 63,
  [64] = 64,
  [65] = 54,
  [66] = 66,
  [67] = 67,
  [68] = 51,
  [69] = 57,
  [70] = 70,
  [71] = 63,
  [72] = 64,
  [73] = 56,
  [74] = 74,
  [75] = 53,
  [76] = 76,
  [77] = 52,
  [78] = 66,
  [79] = 76,
  [80] = 67,
  [81] = 60,
  [82] = 59,
  [83] = 55,
  [84] = 61,
  [85] = 85,
  [86] = 86,
  [87] = 74,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 90,
  [94] = 92,
  [95] = 91,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 101,
  [103] = 98,
  [104] = 104,
  [105] = 105,
  [106] = 105,
  [107] = 107,
  [108] = 104,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 110,
  [116] = 116,
  [117] = 116,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 113,
  [125] = 125,
  [126] = 109,
  [127] = 111,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 96,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 97,
  [161] = 143,
  [162] = 162,
  [163] = 163,
  [164] = 136,
  [165] = 120,
  [166] = 121,
  [167] = 122,
  [168] = 123,
  [169] = 125,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 128,
  [175] = 129,
  [176] = 132,
  [177] = 133,
  [178] = 134,
  [179] = 137,
  [180] = 119,
  [181] = 181,
  [182] = 156,
  [183] = 151,
  [184] = 184,
  [185] = 158,
  [186] = 157,
  [187] = 155,
  [188] = 152,
  [189] = 150,
  [190] = 147,
  [191] = 144,
  [192] = 192,
  [193] = 193,
  [194] = 159,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 139,
  [201] = 201,
  [202] = 130,
  [203] = 131,
  [204] = 135,
  [205] = 140,
  [206] = 163,
  [207] = 145,
  [208] = 146,
  [209] = 148,
  [210] = 149,
  [211] = 153,
  [212] = 154,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 138,
  [217] = 217,
  [218] = 170,
  [219] = 219,
  [220] = 220,
  [221] = 118,
  [222] = 192,
  [223] = 223,
  [224] = 171,
  [225] = 219,
  [226] = 184,
  [227] = 220,
  [228] = 228,
  [229] = 228,
  [230] = 230,
  [231] = 231,
  [232] = 231,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 233,
  [237] = 237,
  [238] = 234,
  [239] = 239,
  [240] = 240,
  [241] = 239,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 235,
  [249] = 242,
  [250] = 244,
  [251] = 251,
  [252] = 246,
  [253] = 237,
  [254] = 243,
  [255] = 255,
  [256] = 247,
  [257] = 257,
  [258] = 240,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 260,
  [263] = 259,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 267,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6480
    ? (c < 2949
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'o' || (c < 'x'
                ? (c < 's'
                  ? c == 'q'
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66864
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6512
    ? (c < 2958
      ? (c < 2088
        ? (c < 910
          ? (c < 192
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'q' || (c < 170
                ? (c < 'u'
                  ? c == 's'
                  : (c <= 'v' || (c >= 'x' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))))
            : (c <= 214 || (c < 880
              ? (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))
              : (c <= 884 || (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))))))
          : (c <= 929 || (c < 1774
            ? (c < 1488
              ? (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))
              : (c <= 1514 || (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))))
            : (c <= 1775 || (c < 1994
              ? (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))
              : (c <= 2026 || (c < 2048
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))))))))
        : (c <= 2088 || (c < 2613
          ? (c < 2474
            ? (c < 2365
              ? (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : c <= 2361)))
              : (c <= 2365 || (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))))
            : (c <= 2480 || (c < 2544
              ? (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))
              : (c <= 2545 || (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))))))
          : (c <= 2614 || (c < 2809
            ? (c < 2707
              ? (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))
              : (c <= 2728 || (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))))
            : (c <= 2809 || (c < 2877
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))))))))))
      : (c <= 2960 || (c < 3904
        ? (c < 3342
          ? (c < 3160
            ? (c < 2990
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))
              : (c <= 3001 || (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))))
            : (c <= 3162 || (c < 3242
              ? (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))))))
          : (c <= 3344 || (c < 3648
            ? (c < 3461
              ? (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))))
            : (c <= 3654 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3782
                ? (c < 3776
                  ? c == 3773
                  : c <= 3780)
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3911 || (c < 4808
          ? (c < 4301
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43250
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6988 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12549
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12445
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6480
    ? (c < 2949
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'j'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'g'
                  ? c == 'e'
                  : c <= 'h')))
              : (c <= 'm' || (c < 'x'
                ? (c < 's'
                  ? (c >= 'o' && c <= 'q')
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66864
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 's'
                  ? (c >= 'f' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 'o'
                  ? c == 'm'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'b' || (c < 170
                  ? (c >= 'd' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'e' || (c < 170
                  ? (c >= 'g' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'g' || (c < 170
                  ? (c >= 'i' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'h' || (c < 170
                  ? (c >= 'j' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'j' || (c < 170
                  ? (c >= 'l' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'l' || (c < 170
                  ? (c >= 'n' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'o' || (c < 170
                  ? (c >= 'q' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_22(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_23(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_24(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_25(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_26(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_rune_literal_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(156);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 15:
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(155);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(167);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 34:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 35:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(14);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(38);
      END_STATE();
    case 41:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(14);
      if (lookahead == 'U') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(55);
      if (lookahead == 'x') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(40);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(82);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '{') ADVANCE(69);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '{') ADVANCE(164);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(29);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_end);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_template);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_define);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_block);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_with);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(140);
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(140);
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(140);
      if (lookahead == 'f') ADVANCE(70);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(140);
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(140);
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(140);
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(140);
      if (lookahead == 'k') ADVANCE(80);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(140);
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(140);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(140);
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(140);
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(140);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(140);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(140);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(140);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(33);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_nil);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 65},
  [48] = {.lex_state = 65},
  [49] = {.lex_state = 65},
  [50] = {.lex_state = 65},
  [51] = {.lex_state = 65},
  [52] = {.lex_state = 65},
  [53] = {.lex_state = 65},
  [54] = {.lex_state = 65},
  [55] = {.lex_state = 65},
  [56] = {.lex_state = 65},
  [57] = {.lex_state = 65},
  [58] = {.lex_state = 65},
  [59] = {.lex_state = 65},
  [60] = {.lex_state = 65},
  [61] = {.lex_state = 65},
  [62] = {.lex_state = 65},
  [63] = {.lex_state = 65},
  [64] = {.lex_state = 65},
  [65] = {.lex_state = 65},
  [66] = {.lex_state = 65},
  [67] = {.lex_state = 65},
  [68] = {.lex_state = 65},
  [69] = {.lex_state = 65},
  [70] = {.lex_state = 65},
  [71] = {.lex_state = 65},
  [72] = {.lex_state = 65},
  [73] = {.lex_state = 65},
  [74] = {.lex_state = 65},
  [75] = {.lex_state = 65},
  [76] = {.lex_state = 65},
  [77] = {.lex_state = 65},
  [78] = {.lex_state = 65},
  [79] = {.lex_state = 65},
  [80] = {.lex_state = 65},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 65},
  [83] = {.lex_state = 65},
  [84] = {.lex_state = 65},
  [85] = {.lex_state = 65},
  [86] = {.lex_state = 65},
  [87] = {.lex_state = 65},
  [88] = {.lex_state = 65},
  [89] = {.lex_state = 65},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 65},
  [121] = {.lex_state = 65},
  [122] = {.lex_state = 65},
  [123] = {.lex_state = 65},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 65},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 65},
  [129] = {.lex_state = 65},
  [130] = {.lex_state = 65},
  [131] = {.lex_state = 65},
  [132] = {.lex_state = 65},
  [133] = {.lex_state = 65},
  [134] = {.lex_state = 65},
  [135] = {.lex_state = 65},
  [136] = {.lex_state = 65},
  [137] = {.lex_state = 65},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 65},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 65},
  [144] = {.lex_state = 65},
  [145] = {.lex_state = 65},
  [146] = {.lex_state = 65},
  [147] = {.lex_state = 65},
  [148] = {.lex_state = 65},
  [149] = {.lex_state = 65},
  [150] = {.lex_state = 65},
  [151] = {.lex_state = 65},
  [152] = {.lex_state = 65},
  [153] = {.lex_state = 65},
  [154] = {.lex_state = 65},
  [155] = {.lex_state = 65},
  [156] = {.lex_state = 65},
  [157] = {.lex_state = 65},
  [158] = {.lex_state = 65},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 65},
  [162] = {.lex_state = 65},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 65},
  [165] = {.lex_state = 65},
  [166] = {.lex_state = 65},
  [167] = {.lex_state = 65},
  [168] = {.lex_state = 65},
  [169] = {.lex_state = 65},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 65},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 65},
  [175] = {.lex_state = 65},
  [176] = {.lex_state = 65},
  [177] = {.lex_state = 65},
  [178] = {.lex_state = 65},
  [179] = {.lex_state = 65},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 65},
  [183] = {.lex_state = 65},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 65},
  [186] = {.lex_state = 65},
  [187] = {.lex_state = 65},
  [188] = {.lex_state = 65},
  [189] = {.lex_state = 65},
  [190] = {.lex_state = 65},
  [191] = {.lex_state = 65},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 65},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 65},
  [196] = {.lex_state = 65},
  [197] = {.lex_state = 65},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 65},
  [203] = {.lex_state = 65},
  [204] = {.lex_state = 65},
  [205] = {.lex_state = 65},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 65},
  [208] = {.lex_state = 65},
  [209] = {.lex_state = 65},
  [210] = {.lex_state = 65},
  [211] = {.lex_state = 65},
  [212] = {.lex_state = 65},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 65},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 65},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 65},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 15},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 15},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pipeline_stub] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT2] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [sym_rune_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(266),
    [sym__block] = STATE(70),
    [sym_text] = STATE(70),
    [sym__action] = STATE(70),
    [sym_comment_action] = STATE(70),
    [sym_pipeline_action] = STATE(70),
    [sym_if_start] = STATE(48),
    [sym_if_action] = STATE(70),
    [sym_range_action] = STATE(70),
    [sym_range_start] = STATE(57),
    [sym_template_action] = STATE(70),
    [sym_define_action] = STATE(70),
    [sym_define_start] = STATE(51),
    [sym_block_action] = STATE(70),
    [sym_block_start] = STATE(80),
    [sym_with_action] = STATE(70),
    [sym_with_start] = STATE(78),
    [sym__left_delimiter] = STATE(22),
    [aux_sym_template_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(17), 1,
      anon_sym_end,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [82] = 21,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [164] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_else,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [243] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_else,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [322] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_end,
    ACTIONS(55), 1,
      anon_sym_else,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [401] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_end,
    ACTIONS(57), 1,
      anon_sym_else,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [480] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [559] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [638] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_else,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [717] = 20,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(69), 1,
      anon_sym_else,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [796] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [872] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [948] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1024] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1100] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1176] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1252] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1328] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1404] = 14,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_SPACE,
    ACTIONS(85), 1,
      anon_sym_DOT,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(119), 1,
      sym_argument_list,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(79), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(93), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(115), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1469] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1542] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_template,
    ACTIONS(103), 1,
      sym_comment,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(101), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(99), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(220), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1615] = 13,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_SPACE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(159), 1,
      sym_argument_list,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(105), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(93), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(115), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1677] = 14,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(180), 1,
      sym_argument_list,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(117), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(83), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(115), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(110), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1741] = 12,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_SPACE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(121), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(125), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(142), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1800] = 12,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(89), 1,
      anon_sym_DOLLAR,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_SPACE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(127), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(125), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(142), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1859] = 13,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(194), 1,
      sym_argument_list,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(117), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(107), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(115), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(110), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1920] = 12,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(131), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(129), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(125), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1978] = 12,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(131), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(123), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(125), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2036] = 13,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(143), 1,
      sym__right_delimiter,
    ACTIONS(137), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(135), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(133), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(222), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2095] = 13,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(195), 1,
      sym__right_delimiter,
    ACTIONS(143), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(141), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(139), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(181), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2154] = 13,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(161), 1,
      sym__right_delimiter,
    ACTIONS(149), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(147), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(145), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(192), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2213] = 12,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(255), 1,
      sym_range_variable_definition,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(153), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(151), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(201), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2268] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(157), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(155), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(139), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2320] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(161), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(159), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(173), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2372] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(165), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(163), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2424] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(131), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(125), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(142), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2476] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(169), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(167), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(213), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2528] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(173), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(171), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(221), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2580] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(177), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(175), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(216), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2632] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(181), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(179), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(200), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2684] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(185), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(183), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(198), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2736] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(189), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(187), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(259), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2788] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(193), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(191), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(138), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2840] = 11,
    ACTIONS(87), 1,
      anon_sym_DOT2,
    ACTIONS(91), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      sym_variable,
    STATE(111), 1,
      sym_parenthesized_pipeline,
    STATE(20), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(197), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(195), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(118), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2892] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(108), 1,
      sym_variable,
    STATE(127), 1,
      sym_parenthesized_pipeline,
    STATE(24), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(201), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(199), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(263), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2944] = 15,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(129), 1,
      sym_if_end,
    STATE(228), 1,
      sym_else_action,
    ACTIONS(207), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(98), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3003] = 15,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(120), 1,
      sym_if_end,
    STATE(170), 1,
      sym_else_action,
    ACTIONS(207), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(101), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
    STATE(47), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3062] = 15,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(165), 1,
      sym_if_end,
    STATE(218), 1,
      sym_else_action,
    ACTIONS(209), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(102), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
    STATE(50), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3121] = 15,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(175), 1,
      sym_if_end,
    STATE(229), 1,
      sym_else_action,
    ACTIONS(209), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(103), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3180] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(122), 1,
      sym_define_end,
    ACTIONS(211), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(71), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3226] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(212), 1,
      sym_with_end,
    ACTIONS(213), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3272] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(210), 1,
      sym_with_end,
    ACTIONS(213), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(52), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3318] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(204), 1,
      sym_with_end,
    ACTIONS(213), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3364] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(203), 1,
      sym_range_end,
    ACTIONS(215), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(82), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3410] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(209), 1,
      sym_with_end,
    ACTIONS(213), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3456] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(11), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(121), 1,
      sym_range_end,
    ACTIONS(217), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(72), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3502] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(16), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(134), 1,
      sym_block_end,
    ACTIONS(219), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3548] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(145), 1,
      sym_range_end,
    ACTIONS(221), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3594] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(179), 1,
      sym_with_end,
    ACTIONS(223), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3640] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(146), 1,
      sym_range_end,
    ACTIONS(221), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(76), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3686] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(17), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(178), 1,
      sym_block_end,
    ACTIONS(225), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3732] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(177), 1,
      sym_define_end,
    ACTIONS(227), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3778] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(8), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(176), 1,
      sym_range_end,
    ACTIONS(229), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3824] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(135), 1,
      sym_with_end,
    ACTIONS(231), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(73), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3870] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(6), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(169), 1,
      sym_with_end,
    ACTIONS(233), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(60), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3916] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(17), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(168), 1,
      sym_block_end,
    ACTIONS(225), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(62), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [3962] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(167), 1,
      sym_define_end,
    ACTIONS(227), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(63), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4008] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(10), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(166), 1,
      sym_range_end,
    ACTIONS(235), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(64), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4054] = 11,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym__left_delimiter,
    STATE(48), 1,
      sym_if_start,
    STATE(51), 1,
      sym_define_start,
    STATE(57), 1,
      sym_range_start,
    STATE(78), 1,
      sym_with_start,
    STATE(80), 1,
      sym_block_start,
    ACTIONS(9), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(74), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4100] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(18), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(133), 1,
      sym_define_end,
    ACTIONS(211), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4146] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(9), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(132), 1,
      sym_range_end,
    ACTIONS(239), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4192] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(148), 1,
      sym_with_end,
    ACTIONS(231), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4238] = 11,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 1,
      aux_sym_text_token1,
    ACTIONS(246), 1,
      aux_sym_text_token2,
    STATE(22), 1,
      sym__left_delimiter,
    STATE(48), 1,
      sym_if_start,
    STATE(51), 1,
      sym_define_start,
    STATE(57), 1,
      sym_range_start,
    STATE(78), 1,
      sym_with_start,
    STATE(80), 1,
      sym_block_start,
    ACTIONS(249), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(74), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4284] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(149), 1,
      sym_with_end,
    ACTIONS(231), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(77), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4330] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(153), 1,
      sym_range_end,
    ACTIONS(221), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4376] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(154), 1,
      sym_with_end,
    ACTIONS(231), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4422] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(7), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(125), 1,
      sym_with_end,
    ACTIONS(252), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(81), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4468] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(211), 1,
      sym_range_end,
    ACTIONS(215), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4514] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(16), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(123), 1,
      sym_block_end,
    ACTIONS(219), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(58), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4560] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(137), 1,
      sym_with_end,
    ACTIONS(254), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4606] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(207), 1,
      sym_range_end,
    ACTIONS(215), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4652] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(131), 1,
      sym_range_end,
    ACTIONS(221), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(59), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4698] = 11,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    STATE(208), 1,
      sym_range_end,
    ACTIONS(215), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(79), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4744] = 10,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    ACTIONS(256), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(89), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4787] = 10,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    ACTIONS(259), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(88), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4830] = 10,
    ACTIONS(262), 1,
      aux_sym_text_token1,
    ACTIONS(265), 1,
      aux_sym_text_token2,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    ACTIONS(268), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4873] = 10,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    ACTIONS(271), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4916] = 10,
    ACTIONS(203), 1,
      aux_sym_text_token1,
    ACTIONS(205), 1,
      aux_sym_text_token2,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(49), 1,
      sym_if_start,
    STATE(66), 1,
      sym_with_start,
    STATE(67), 1,
      sym_block_start,
    STATE(68), 1,
      sym_define_start,
    STATE(69), 1,
      sym_range_start,
    ACTIONS(274), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(87), 12,
      sym__block,
      sym_text,
      sym__action,
      sym_comment_action,
      sym_pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [4959] = 2,
    ACTIONS(279), 1,
      anon_sym_SPACE,
    ACTIONS(277), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [4983] = 2,
    ACTIONS(283), 1,
      anon_sym_SPACE,
    ACTIONS(281), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5007] = 2,
    ACTIONS(287), 1,
      anon_sym_SPACE,
    ACTIONS(285), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5031] = 2,
    ACTIONS(277), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(279), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5054] = 2,
    ACTIONS(285), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(287), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5077] = 2,
    ACTIONS(281), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(283), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5100] = 2,
    ACTIONS(291), 7,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(289), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5122] = 2,
    ACTIONS(295), 7,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(293), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5144] = 8,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(157), 1,
      sym_if_end,
    STATE(171), 1,
      sym_else_action,
    STATE(238), 1,
      sym__left_delimiter,
    STATE(114), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
  [5170] = 3,
    ACTIONS(305), 1,
      sym_identifier,
    ACTIONS(303), 2,
      anon_sym_SPACE,
      anon_sym_DOT,
    ACTIONS(301), 6,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5186] = 2,
    ACTIONS(307), 1,
      sym_identifier,
    ACTIONS(303), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5200] = 8,
    ACTIONS(297), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(128), 1,
      sym_if_end,
    STATE(232), 1,
      sym_else_action,
    STATE(238), 1,
      sym__left_delimiter,
    STATE(114), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
  [5226] = 8,
    ACTIONS(309), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(174), 1,
      sym_if_end,
    STATE(231), 1,
      sym_else_action,
    STATE(234), 1,
      sym__left_delimiter,
    STATE(114), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
  [5252] = 8,
    ACTIONS(309), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym_else_if_start,
    STATE(86), 1,
      sym_else_start,
    STATE(186), 1,
      sym_if_end,
    STATE(224), 1,
      sym_else_action,
    STATE(234), 1,
      sym__left_delimiter,
    STATE(114), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
  [5278] = 5,
    ACTIONS(83), 1,
      anon_sym_SPACE,
    ACTIONS(313), 1,
      anon_sym_COLON_EQ,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(79), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5297] = 1,
    ACTIONS(319), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5308] = 2,
    ACTIONS(319), 2,
      anon_sym_SPACE,
      anon_sym_DOT,
    ACTIONS(321), 6,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5321] = 5,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_COLON_EQ,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(83), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5339] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON_EQ,
    ACTIONS(327), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(83), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5355] = 3,
    ACTIONS(333), 1,
      anon_sym_SPACE,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(331), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5368] = 4,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(341), 1,
      anon_sym_SPACE,
    STATE(116), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(339), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5383] = 3,
    ACTIONS(317), 1,
      anon_sym_DOT,
    ACTIONS(345), 1,
      anon_sym_SPACE,
    ACTIONS(343), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5396] = 3,
    ACTIONS(349), 1,
      anon_sym_SPACE,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(347), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5409] = 2,
    ACTIONS(354), 2,
      anon_sym_SPACE,
      anon_sym_DOT,
    ACTIONS(352), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5420] = 5,
    ACTIONS(356), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(359), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(85), 1,
      sym_else_if_start,
    STATE(265), 1,
      sym__left_delimiter,
    STATE(114), 2,
      sym_else_if_action,
      aux_sym_if_action_repeat1,
  [5437] = 4,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_SPACE,
    STATE(117), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(339), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5452] = 3,
    ACTIONS(364), 1,
      anon_sym_SPACE,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(127), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5465] = 3,
    ACTIONS(366), 1,
      anon_sym_SPACE,
    STATE(112), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(127), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5478] = 3,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(370), 1,
      anon_sym_SPACE,
    ACTIONS(368), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5490] = 2,
    ACTIONS(374), 1,
      anon_sym_SPACE,
    ACTIONS(372), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5500] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(378), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5510] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(382), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5520] = 2,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(386), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5530] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(390), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5540] = 1,
    ACTIONS(354), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5548] = 2,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(394), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5558] = 2,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(333), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5568] = 2,
    ACTIONS(329), 1,
      anon_sym_DOT,
    ACTIONS(345), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5578] = 2,
    ACTIONS(398), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(400), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5588] = 2,
    ACTIONS(402), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(404), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5598] = 2,
    ACTIONS(406), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(408), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5608] = 2,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(412), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5618] = 2,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(416), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5628] = 2,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(420), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5638] = 2,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(424), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5648] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(428), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5658] = 2,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(432), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5668] = 2,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(436), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5678] = 3,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(440), 1,
      anon_sym_SPACE,
    ACTIONS(438), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5690] = 2,
    ACTIONS(444), 1,
      anon_sym_SPACE,
    ACTIONS(442), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5700] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(448), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5710] = 2,
    ACTIONS(289), 1,
      anon_sym_SPACE,
    ACTIONS(291), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5720] = 3,
    ACTIONS(337), 1,
      anon_sym_PIPE,
    ACTIONS(450), 1,
      anon_sym_SPACE,
    ACTIONS(347), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5732] = 2,
    ACTIONS(452), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(454), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5742] = 2,
    ACTIONS(456), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(458), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5752] = 2,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(462), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5762] = 2,
    ACTIONS(464), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(466), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5772] = 2,
    ACTIONS(468), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(470), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5782] = 2,
    ACTIONS(472), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(474), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5792] = 2,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(478), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5802] = 2,
    ACTIONS(480), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(482), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5812] = 2,
    ACTIONS(484), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(486), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5822] = 2,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(490), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5832] = 2,
    ACTIONS(492), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(494), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5842] = 2,
    ACTIONS(496), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(498), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5852] = 2,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(502), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5862] = 2,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(506), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5872] = 2,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(510), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5882] = 2,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(514), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5892] = 2,
    ACTIONS(518), 1,
      anon_sym_SPACE,
    ACTIONS(516), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5902] = 2,
    ACTIONS(293), 1,
      anon_sym_SPACE,
    ACTIONS(295), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [5912] = 2,
    ACTIONS(452), 1,
      aux_sym_text_token1,
    ACTIONS(454), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5921] = 2,
    ACTIONS(520), 1,
      aux_sym_text_token1,
    ACTIONS(522), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5930] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_raw_string_literal,
    STATE(32), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5941] = 2,
    ACTIONS(430), 1,
      aux_sym_text_token1,
    ACTIONS(432), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5950] = 2,
    ACTIONS(376), 1,
      aux_sym_text_token1,
    ACTIONS(378), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5959] = 2,
    ACTIONS(380), 1,
      aux_sym_text_token1,
    ACTIONS(382), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5968] = 2,
    ACTIONS(384), 1,
      aux_sym_text_token1,
    ACTIONS(386), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5977] = 2,
    ACTIONS(388), 1,
      aux_sym_text_token1,
    ACTIONS(390), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5986] = 2,
    ACTIONS(392), 1,
      aux_sym_text_token1,
    ACTIONS(394), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [5995] = 4,
    ACTIONS(526), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(128), 1,
      sym_if_end,
    STATE(268), 1,
      sym__left_delimiter,
  [6008] = 4,
    ACTIONS(526), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(130), 1,
      sym_if_end,
    STATE(268), 1,
      sym__left_delimiter,
  [6021] = 2,
    ACTIONS(530), 1,
      aux_sym_text_token1,
    ACTIONS(532), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6030] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(223), 1,
      sym__right_delimiter,
    ACTIONS(536), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6041] = 2,
    ACTIONS(398), 1,
      aux_sym_text_token1,
    ACTIONS(400), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6050] = 2,
    ACTIONS(402), 1,
      aux_sym_text_token1,
    ACTIONS(404), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6059] = 2,
    ACTIONS(414), 1,
      aux_sym_text_token1,
    ACTIONS(416), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6068] = 2,
    ACTIONS(418), 1,
      aux_sym_text_token1,
    ACTIONS(420), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6077] = 2,
    ACTIONS(422), 1,
      aux_sym_text_token1,
    ACTIONS(424), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6086] = 2,
    ACTIONS(434), 1,
      aux_sym_text_token1,
    ACTIONS(436), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6095] = 1,
    ACTIONS(374), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6102] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(197), 1,
      sym__right_delimiter,
    ACTIONS(538), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6113] = 2,
    ACTIONS(504), 1,
      aux_sym_text_token1,
    ACTIONS(506), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6122] = 2,
    ACTIONS(484), 1,
      aux_sym_text_token1,
    ACTIONS(486), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6131] = 3,
    ACTIONS(540), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(542), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6142] = 2,
    ACTIONS(512), 1,
      aux_sym_text_token1,
    ACTIONS(514), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6151] = 2,
    ACTIONS(508), 1,
      aux_sym_text_token1,
    ACTIONS(510), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6160] = 2,
    ACTIONS(500), 1,
      aux_sym_text_token1,
    ACTIONS(502), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6169] = 2,
    ACTIONS(488), 1,
      aux_sym_text_token1,
    ACTIONS(490), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6178] = 2,
    ACTIONS(480), 1,
      aux_sym_text_token1,
    ACTIONS(482), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6187] = 2,
    ACTIONS(468), 1,
      aux_sym_text_token1,
    ACTIONS(470), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6196] = 2,
    ACTIONS(456), 1,
      aux_sym_text_token1,
    ACTIONS(458), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6205] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(205), 1,
      sym__right_delimiter,
    ACTIONS(544), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6216] = 2,
    ACTIONS(546), 1,
      aux_sym_text_token1,
    ACTIONS(548), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6225] = 1,
    ACTIONS(518), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6232] = 2,
    ACTIONS(550), 1,
      aux_sym_text_token1,
    ACTIONS(552), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6241] = 2,
    ACTIONS(554), 1,
      aux_sym_text_token1,
    ACTIONS(556), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6250] = 2,
    ACTIONS(558), 1,
      aux_sym_text_token1,
    ACTIONS(560), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6259] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(196), 1,
      sym__right_delimiter,
    ACTIONS(562), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6270] = 3,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(566), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6281] = 1,
    ACTIONS(444), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6288] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(230), 1,
      sym__right_delimiter,
    ACTIONS(569), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6299] = 2,
    ACTIONS(406), 1,
      aux_sym_text_token1,
    ACTIONS(408), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6308] = 2,
    ACTIONS(410), 1,
      aux_sym_text_token1,
    ACTIONS(412), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6317] = 2,
    ACTIONS(426), 1,
      aux_sym_text_token1,
    ACTIONS(428), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6326] = 2,
    ACTIONS(446), 1,
      aux_sym_text_token1,
    ACTIONS(448), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6335] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(571), 1,
      sym_raw_string_literal,
    STATE(30), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6346] = 2,
    ACTIONS(460), 1,
      aux_sym_text_token1,
    ACTIONS(462), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6355] = 2,
    ACTIONS(464), 1,
      aux_sym_text_token1,
    ACTIONS(466), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6364] = 2,
    ACTIONS(472), 1,
      aux_sym_text_token1,
    ACTIONS(474), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6373] = 2,
    ACTIONS(476), 1,
      aux_sym_text_token1,
    ACTIONS(478), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6382] = 2,
    ACTIONS(492), 1,
      aux_sym_text_token1,
    ACTIONS(494), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6391] = 2,
    ACTIONS(496), 1,
      aux_sym_text_token1,
    ACTIONS(498), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6400] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(162), 1,
      sym__right_delimiter,
    ACTIONS(573), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6411] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(575), 1,
      sym_raw_string_literal,
    STATE(257), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6422] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(577), 1,
      sym_raw_string_literal,
    STATE(31), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [6433] = 2,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    ACTIONS(440), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6442] = 2,
    ACTIONS(579), 1,
      aux_sym_text_token1,
    ACTIONS(581), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6451] = 4,
    ACTIONS(583), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(174), 1,
      sym_if_end,
    STATE(267), 1,
      sym__left_delimiter,
  [6464] = 3,
    ACTIONS(587), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(589), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6475] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      sym__right_delimiter,
    ACTIONS(591), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6486] = 2,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    ACTIONS(370), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6495] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(140), 1,
      sym__right_delimiter,
    ACTIONS(593), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6506] = 2,
    ACTIONS(595), 1,
      aux_sym_text_token1,
    ACTIONS(597), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6515] = 4,
    ACTIONS(583), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(202), 1,
      sym_if_end,
    STATE(267), 1,
      sym__left_delimiter,
  [6528] = 3,
    ACTIONS(599), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(601), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6539] = 3,
    ACTIONS(603), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(542), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [6550] = 3,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym__right_delimiter,
    ACTIONS(605), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6561] = 4,
    ACTIONS(526), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(157), 1,
      sym_if_end,
    STATE(268), 1,
      sym__left_delimiter,
  [6574] = 4,
    ACTIONS(583), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(186), 1,
      sym_if_end,
    STATE(267), 1,
      sym__left_delimiter,
  [6587] = 2,
    ACTIONS(607), 1,
      aux_sym_text_token1,
    ACTIONS(609), 3,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [6596] = 4,
    ACTIONS(583), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(187), 1,
      sym_if_end,
    STATE(267), 1,
      sym__left_delimiter,
  [6609] = 4,
    ACTIONS(526), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(528), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(155), 1,
      sym_if_end,
    STATE(268), 1,
      sym__left_delimiter,
  [6622] = 2,
    STATE(147), 1,
      sym__right_delimiter,
    ACTIONS(611), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6630] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(613), 1,
      anon_sym_end,
  [6640] = 2,
    STATE(189), 1,
      sym__right_delimiter,
    ACTIONS(615), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6648] = 2,
    STATE(190), 1,
      sym__right_delimiter,
    ACTIONS(617), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6656] = 2,
    STATE(191), 1,
      sym__right_delimiter,
    ACTIONS(619), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6664] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(15), 1,
      anon_sym_else,
    ACTIONS(621), 1,
      anon_sym_end,
  [6674] = 2,
    STATE(185), 1,
      sym__right_delimiter,
    ACTIONS(623), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6682] = 2,
    STATE(53), 1,
      sym__right_delimiter,
    ACTIONS(625), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6690] = 2,
    STATE(158), 1,
      sym__right_delimiter,
    ACTIONS(627), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6698] = 2,
    STATE(182), 1,
      sym__right_delimiter,
    ACTIONS(629), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6706] = 2,
    STATE(84), 1,
      sym__right_delimiter,
    ACTIONS(631), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6714] = 2,
    STATE(83), 1,
      sym__right_delimiter,
    ACTIONS(633), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6722] = 2,
    STATE(172), 1,
      sym__right_delimiter,
    ACTIONS(635), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6730] = 2,
    STATE(54), 1,
      sym__right_delimiter,
    ACTIONS(637), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6738] = 2,
    STATE(152), 1,
      sym__right_delimiter,
    ACTIONS(639), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6746] = 2,
    STATE(150), 1,
      sym__right_delimiter,
    ACTIONS(641), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6754] = 2,
    STATE(156), 1,
      sym__right_delimiter,
    ACTIONS(643), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6762] = 2,
    STATE(55), 1,
      sym__right_delimiter,
    ACTIONS(645), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6770] = 2,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    ACTIONS(647), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6778] = 2,
    STATE(65), 1,
      sym__right_delimiter,
    ACTIONS(649), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6786] = 2,
    STATE(144), 1,
      sym__right_delimiter,
    ACTIONS(651), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6794] = 2,
    STATE(61), 1,
      sym__right_delimiter,
    ACTIONS(653), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6802] = 2,
    STATE(217), 1,
      sym__right_delimiter,
    ACTIONS(655), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6810] = 2,
    STATE(188), 1,
      sym__right_delimiter,
    ACTIONS(657), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6818] = 2,
    STATE(193), 1,
      sym__right_delimiter,
    ACTIONS(659), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6826] = 2,
    STATE(75), 1,
      sym__right_delimiter,
    ACTIONS(661), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [6834] = 2,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
  [6841] = 2,
    ACTIONS(665), 1,
      sym_identifier,
    STATE(93), 1,
      sym__field_identifier,
  [6848] = 2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    STATE(264), 1,
      sym_variable,
  [6855] = 2,
    ACTIONS(667), 1,
      sym_identifier,
    STATE(90), 1,
      sym__field_identifier,
  [6862] = 2,
    ACTIONS(534), 1,
      anon_sym_PIPE,
    ACTIONS(669), 1,
      anon_sym_RPAREN,
  [6869] = 1,
    ACTIONS(671), 1,
      anon_sym_COLON_EQ,
  [6873] = 1,
    ACTIONS(13), 1,
      anon_sym_elseif,
  [6877] = 1,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
  [6881] = 1,
    ACTIONS(613), 1,
      anon_sym_end,
  [6885] = 1,
    ACTIONS(621), 1,
      anon_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 243,
  [SMALL_STATE(6)] = 322,
  [SMALL_STATE(7)] = 401,
  [SMALL_STATE(8)] = 480,
  [SMALL_STATE(9)] = 559,
  [SMALL_STATE(10)] = 638,
  [SMALL_STATE(11)] = 717,
  [SMALL_STATE(12)] = 796,
  [SMALL_STATE(13)] = 872,
  [SMALL_STATE(14)] = 948,
  [SMALL_STATE(15)] = 1024,
  [SMALL_STATE(16)] = 1100,
  [SMALL_STATE(17)] = 1176,
  [SMALL_STATE(18)] = 1252,
  [SMALL_STATE(19)] = 1328,
  [SMALL_STATE(20)] = 1404,
  [SMALL_STATE(21)] = 1469,
  [SMALL_STATE(22)] = 1542,
  [SMALL_STATE(23)] = 1615,
  [SMALL_STATE(24)] = 1677,
  [SMALL_STATE(25)] = 1741,
  [SMALL_STATE(26)] = 1800,
  [SMALL_STATE(27)] = 1859,
  [SMALL_STATE(28)] = 1920,
  [SMALL_STATE(29)] = 1978,
  [SMALL_STATE(30)] = 2036,
  [SMALL_STATE(31)] = 2095,
  [SMALL_STATE(32)] = 2154,
  [SMALL_STATE(33)] = 2213,
  [SMALL_STATE(34)] = 2268,
  [SMALL_STATE(35)] = 2320,
  [SMALL_STATE(36)] = 2372,
  [SMALL_STATE(37)] = 2424,
  [SMALL_STATE(38)] = 2476,
  [SMALL_STATE(39)] = 2528,
  [SMALL_STATE(40)] = 2580,
  [SMALL_STATE(41)] = 2632,
  [SMALL_STATE(42)] = 2684,
  [SMALL_STATE(43)] = 2736,
  [SMALL_STATE(44)] = 2788,
  [SMALL_STATE(45)] = 2840,
  [SMALL_STATE(46)] = 2892,
  [SMALL_STATE(47)] = 2944,
  [SMALL_STATE(48)] = 3003,
  [SMALL_STATE(49)] = 3062,
  [SMALL_STATE(50)] = 3121,
  [SMALL_STATE(51)] = 3180,
  [SMALL_STATE(52)] = 3226,
  [SMALL_STATE(53)] = 3272,
  [SMALL_STATE(54)] = 3318,
  [SMALL_STATE(55)] = 3364,
  [SMALL_STATE(56)] = 3410,
  [SMALL_STATE(57)] = 3456,
  [SMALL_STATE(58)] = 3502,
  [SMALL_STATE(59)] = 3548,
  [SMALL_STATE(60)] = 3594,
  [SMALL_STATE(61)] = 3640,
  [SMALL_STATE(62)] = 3686,
  [SMALL_STATE(63)] = 3732,
  [SMALL_STATE(64)] = 3778,
  [SMALL_STATE(65)] = 3824,
  [SMALL_STATE(66)] = 3870,
  [SMALL_STATE(67)] = 3916,
  [SMALL_STATE(68)] = 3962,
  [SMALL_STATE(69)] = 4008,
  [SMALL_STATE(70)] = 4054,
  [SMALL_STATE(71)] = 4100,
  [SMALL_STATE(72)] = 4146,
  [SMALL_STATE(73)] = 4192,
  [SMALL_STATE(74)] = 4238,
  [SMALL_STATE(75)] = 4284,
  [SMALL_STATE(76)] = 4330,
  [SMALL_STATE(77)] = 4376,
  [SMALL_STATE(78)] = 4422,
  [SMALL_STATE(79)] = 4468,
  [SMALL_STATE(80)] = 4514,
  [SMALL_STATE(81)] = 4560,
  [SMALL_STATE(82)] = 4606,
  [SMALL_STATE(83)] = 4652,
  [SMALL_STATE(84)] = 4698,
  [SMALL_STATE(85)] = 4744,
  [SMALL_STATE(86)] = 4787,
  [SMALL_STATE(87)] = 4830,
  [SMALL_STATE(88)] = 4873,
  [SMALL_STATE(89)] = 4916,
  [SMALL_STATE(90)] = 4959,
  [SMALL_STATE(91)] = 4983,
  [SMALL_STATE(92)] = 5007,
  [SMALL_STATE(93)] = 5031,
  [SMALL_STATE(94)] = 5054,
  [SMALL_STATE(95)] = 5077,
  [SMALL_STATE(96)] = 5100,
  [SMALL_STATE(97)] = 5122,
  [SMALL_STATE(98)] = 5144,
  [SMALL_STATE(99)] = 5170,
  [SMALL_STATE(100)] = 5186,
  [SMALL_STATE(101)] = 5200,
  [SMALL_STATE(102)] = 5226,
  [SMALL_STATE(103)] = 5252,
  [SMALL_STATE(104)] = 5278,
  [SMALL_STATE(105)] = 5297,
  [SMALL_STATE(106)] = 5308,
  [SMALL_STATE(107)] = 5321,
  [SMALL_STATE(108)] = 5339,
  [SMALL_STATE(109)] = 5355,
  [SMALL_STATE(110)] = 5368,
  [SMALL_STATE(111)] = 5383,
  [SMALL_STATE(112)] = 5396,
  [SMALL_STATE(113)] = 5409,
  [SMALL_STATE(114)] = 5420,
  [SMALL_STATE(115)] = 5437,
  [SMALL_STATE(116)] = 5452,
  [SMALL_STATE(117)] = 5465,
  [SMALL_STATE(118)] = 5478,
  [SMALL_STATE(119)] = 5490,
  [SMALL_STATE(120)] = 5500,
  [SMALL_STATE(121)] = 5510,
  [SMALL_STATE(122)] = 5520,
  [SMALL_STATE(123)] = 5530,
  [SMALL_STATE(124)] = 5540,
  [SMALL_STATE(125)] = 5548,
  [SMALL_STATE(126)] = 5558,
  [SMALL_STATE(127)] = 5568,
  [SMALL_STATE(128)] = 5578,
  [SMALL_STATE(129)] = 5588,
  [SMALL_STATE(130)] = 5598,
  [SMALL_STATE(131)] = 5608,
  [SMALL_STATE(132)] = 5618,
  [SMALL_STATE(133)] = 5628,
  [SMALL_STATE(134)] = 5638,
  [SMALL_STATE(135)] = 5648,
  [SMALL_STATE(136)] = 5658,
  [SMALL_STATE(137)] = 5668,
  [SMALL_STATE(138)] = 5678,
  [SMALL_STATE(139)] = 5690,
  [SMALL_STATE(140)] = 5700,
  [SMALL_STATE(141)] = 5710,
  [SMALL_STATE(142)] = 5720,
  [SMALL_STATE(143)] = 5732,
  [SMALL_STATE(144)] = 5742,
  [SMALL_STATE(145)] = 5752,
  [SMALL_STATE(146)] = 5762,
  [SMALL_STATE(147)] = 5772,
  [SMALL_STATE(148)] = 5782,
  [SMALL_STATE(149)] = 5792,
  [SMALL_STATE(150)] = 5802,
  [SMALL_STATE(151)] = 5812,
  [SMALL_STATE(152)] = 5822,
  [SMALL_STATE(153)] = 5832,
  [SMALL_STATE(154)] = 5842,
  [SMALL_STATE(155)] = 5852,
  [SMALL_STATE(156)] = 5862,
  [SMALL_STATE(157)] = 5872,
  [SMALL_STATE(158)] = 5882,
  [SMALL_STATE(159)] = 5892,
  [SMALL_STATE(160)] = 5902,
  [SMALL_STATE(161)] = 5912,
  [SMALL_STATE(162)] = 5921,
  [SMALL_STATE(163)] = 5930,
  [SMALL_STATE(164)] = 5941,
  [SMALL_STATE(165)] = 5950,
  [SMALL_STATE(166)] = 5959,
  [SMALL_STATE(167)] = 5968,
  [SMALL_STATE(168)] = 5977,
  [SMALL_STATE(169)] = 5986,
  [SMALL_STATE(170)] = 5995,
  [SMALL_STATE(171)] = 6008,
  [SMALL_STATE(172)] = 6021,
  [SMALL_STATE(173)] = 6030,
  [SMALL_STATE(174)] = 6041,
  [SMALL_STATE(175)] = 6050,
  [SMALL_STATE(176)] = 6059,
  [SMALL_STATE(177)] = 6068,
  [SMALL_STATE(178)] = 6077,
  [SMALL_STATE(179)] = 6086,
  [SMALL_STATE(180)] = 6095,
  [SMALL_STATE(181)] = 6102,
  [SMALL_STATE(182)] = 6113,
  [SMALL_STATE(183)] = 6122,
  [SMALL_STATE(184)] = 6131,
  [SMALL_STATE(185)] = 6142,
  [SMALL_STATE(186)] = 6151,
  [SMALL_STATE(187)] = 6160,
  [SMALL_STATE(188)] = 6169,
  [SMALL_STATE(189)] = 6178,
  [SMALL_STATE(190)] = 6187,
  [SMALL_STATE(191)] = 6196,
  [SMALL_STATE(192)] = 6205,
  [SMALL_STATE(193)] = 6216,
  [SMALL_STATE(194)] = 6225,
  [SMALL_STATE(195)] = 6232,
  [SMALL_STATE(196)] = 6241,
  [SMALL_STATE(197)] = 6250,
  [SMALL_STATE(198)] = 6259,
  [SMALL_STATE(199)] = 6270,
  [SMALL_STATE(200)] = 6281,
  [SMALL_STATE(201)] = 6288,
  [SMALL_STATE(202)] = 6299,
  [SMALL_STATE(203)] = 6308,
  [SMALL_STATE(204)] = 6317,
  [SMALL_STATE(205)] = 6326,
  [SMALL_STATE(206)] = 6335,
  [SMALL_STATE(207)] = 6346,
  [SMALL_STATE(208)] = 6355,
  [SMALL_STATE(209)] = 6364,
  [SMALL_STATE(210)] = 6373,
  [SMALL_STATE(211)] = 6382,
  [SMALL_STATE(212)] = 6391,
  [SMALL_STATE(213)] = 6400,
  [SMALL_STATE(214)] = 6411,
  [SMALL_STATE(215)] = 6422,
  [SMALL_STATE(216)] = 6433,
  [SMALL_STATE(217)] = 6442,
  [SMALL_STATE(218)] = 6451,
  [SMALL_STATE(219)] = 6464,
  [SMALL_STATE(220)] = 6475,
  [SMALL_STATE(221)] = 6486,
  [SMALL_STATE(222)] = 6495,
  [SMALL_STATE(223)] = 6506,
  [SMALL_STATE(224)] = 6515,
  [SMALL_STATE(225)] = 6528,
  [SMALL_STATE(226)] = 6539,
  [SMALL_STATE(227)] = 6550,
  [SMALL_STATE(228)] = 6561,
  [SMALL_STATE(229)] = 6574,
  [SMALL_STATE(230)] = 6587,
  [SMALL_STATE(231)] = 6596,
  [SMALL_STATE(232)] = 6609,
  [SMALL_STATE(233)] = 6622,
  [SMALL_STATE(234)] = 6630,
  [SMALL_STATE(235)] = 6640,
  [SMALL_STATE(236)] = 6648,
  [SMALL_STATE(237)] = 6656,
  [SMALL_STATE(238)] = 6664,
  [SMALL_STATE(239)] = 6674,
  [SMALL_STATE(240)] = 6682,
  [SMALL_STATE(241)] = 6690,
  [SMALL_STATE(242)] = 6698,
  [SMALL_STATE(243)] = 6706,
  [SMALL_STATE(244)] = 6714,
  [SMALL_STATE(245)] = 6722,
  [SMALL_STATE(246)] = 6730,
  [SMALL_STATE(247)] = 6738,
  [SMALL_STATE(248)] = 6746,
  [SMALL_STATE(249)] = 6754,
  [SMALL_STATE(250)] = 6762,
  [SMALL_STATE(251)] = 6770,
  [SMALL_STATE(252)] = 6778,
  [SMALL_STATE(253)] = 6786,
  [SMALL_STATE(254)] = 6794,
  [SMALL_STATE(255)] = 6802,
  [SMALL_STATE(256)] = 6810,
  [SMALL_STATE(257)] = 6818,
  [SMALL_STATE(258)] = 6826,
  [SMALL_STATE(259)] = 6834,
  [SMALL_STATE(260)] = 6841,
  [SMALL_STATE(261)] = 6848,
  [SMALL_STATE(262)] = 6855,
  [SMALL_STATE(263)] = 6862,
  [SMALL_STATE(264)] = 6869,
  [SMALL_STATE(265)] = 6873,
  [SMALL_STATE(266)] = 6877,
  [SMALL_STATE(267)] = 6881,
  [SMALL_STATE(268)] = 6885,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(136),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(136),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(22),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_action, 1, .dynamic_precedence = 1), SHIFT(21),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_action, 1, .dynamic_precedence = 2), SHIFT(21),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(164),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(164),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(21),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_action, 2, .dynamic_precedence = 2, .production_id = 3), SHIFT(21),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_else_if_action, 2, .dynamic_precedence = 1, .production_id = 2), SHIFT(21),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 13),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 13),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 6),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 6),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 6),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 6),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(37),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pipeline, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pipeline, 3),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 2), SHIFT_REPEAT(265),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2), SHIFT_REPEAT(265),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 14),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 14),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 2, .production_id = 8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 8),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 2),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 3, .production_id = 4),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 3, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 5, .production_id = 4),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 5, .production_id = 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 5),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 3, .production_id = 5),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 3, .production_id = 5),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 3, .production_id = 5),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 3, .production_id = 5),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 3, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 3, .production_id = 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 5),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 3, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 3, .production_id = 4),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 14),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 14),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_pipeline, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_pipeline, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 15),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 15),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 11),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 11),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_end, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_end, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 6, .production_id = 16),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 6, .production_id = 16),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 6, .production_id = 5),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 6, .production_id = 5),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_end, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_end, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 6, .production_id = 16),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 6, .production_id = 16),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 6, .production_id = 4),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 6, .production_id = 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_end, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_end, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pipeline_action, 3),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pipeline_action, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_end, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_end, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 17),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 17),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 18),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 18),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 4),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_action, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment_action, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 4, .production_id = 4),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 4, .production_id = 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_end, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_end, 3),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 7),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_start, 4, .production_id = 9),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_start, 4, .production_id = 9),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_start, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_start, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_start, 4, .production_id = 11),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_start, 4, .production_id = 11),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 4, .production_id = 11),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 4, .production_id = 11),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_start, 4, .production_id = 9),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_start, 4, .production_id = 9),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_start, 5, .production_id = 15),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_start, 5, .production_id = 15),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(199),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_start, 4),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_start, 4),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_start, 4, .production_id = 9),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_start, 4, .production_id = 9),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_start, 4, .production_id = 10),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_start, 4, .production_id = 10),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_variable_definition, 5, .production_id = 19),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gotmpl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
