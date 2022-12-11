#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_assert = 1,
  anon_sym_SEMI = 2,
  anon_sym_report = 3,
  anon_sym_COLON = 4,
  sym_identifier = 5,
  sym_integer = 6,
  sym_real = 7,
  sym_character = 8,
  sym_string = 9,
  sym_bit_string = 10,
  sym_null = 11,
  aux_sym_comment_token1 = 12,
  aux_sym_comment_token2 = 13,
  sym_design_file = 14,
  sym__sequential_stmt = 15,
  sym_assert_stmt = 16,
  sym_report_stmt = 17,
  sym__label = 18,
  sym__name = 19,
  sym__expr = 20,
  sym__condition = 21,
  sym__literal = 22,
  sym__number = 23,
  sym__abstract_literal = 24,
  sym_physical = 25,
  sym_comment = 26,
  aux_sym_design_file_repeat1 = 27,
  alias_sym_label = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_assert] = "assert",
  [anon_sym_SEMI] = ";",
  [anon_sym_report] = "report",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_real] = "real",
  [sym_character] = "character",
  [sym_string] = "string",
  [sym_bit_string] = "bit_string",
  [sym_null] = "null",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_design_file] = "design_file",
  [sym__sequential_stmt] = "_sequential_stmt",
  [sym_assert_stmt] = "assert_stmt",
  [sym_report_stmt] = "report_stmt",
  [sym__label] = "_label",
  [sym__name] = "_name",
  [sym__expr] = "_expr",
  [sym__condition] = "_condition",
  [sym__literal] = "_literal",
  [sym__number] = "_number",
  [sym__abstract_literal] = "_abstract_literal",
  [sym_physical] = "physical",
  [sym_comment] = "comment",
  [aux_sym_design_file_repeat1] = "design_file_repeat1",
  [alias_sym_label] = "label",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_report] = anon_sym_report,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_real] = sym_real,
  [sym_character] = sym_character,
  [sym_string] = sym_string,
  [sym_bit_string] = sym_bit_string,
  [sym_null] = sym_null,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_design_file] = sym_design_file,
  [sym__sequential_stmt] = sym__sequential_stmt,
  [sym_assert_stmt] = sym_assert_stmt,
  [sym_report_stmt] = sym_report_stmt,
  [sym__label] = sym__label,
  [sym__name] = sym__name,
  [sym__expr] = sym__expr,
  [sym__condition] = sym__condition,
  [sym__literal] = sym__literal,
  [sym__number] = sym__number,
  [sym__abstract_literal] = sym__abstract_literal,
  [sym_physical] = sym_physical,
  [sym_comment] = sym_comment,
  [aux_sym_design_file_repeat1] = aux_sym_design_file_repeat1,
  [alias_sym_label] = alias_sym_label,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_report] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_design_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sequential_stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_assert_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_report_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__abstract_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_physical] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_design_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_label] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_abstract = 1,
  field_condition = 2,
  field_unit = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_abstract] = "abstract",
  [field_condition] = "condition",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 0},
  [1] =
    {field_condition, 1, .inherited = true},
  [2] =
    {field_abstract, 0},
    {field_unit, 1},
  [4] =
    {field_condition, 2, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_label,
  },
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 'U' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 'U' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(74);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(4);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ';') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'S' ||
          lookahead == 'U' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_assert);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_report);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_report);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(18);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      if (lookahead == 'S' ||
          lookahead == 'U' ||
          lookahead == 's' ||
          lookahead == 'u') ADVANCE(31);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'O' ||
          lookahead == 'X' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'o' ||
          lookahead == 'x') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_character);
      if (lookahead == '\'') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_bit_string);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_null);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_report] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_bit_string] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [1] = {
    [sym_design_file] = STATE(21),
    [sym__sequential_stmt] = STATE(8),
    [sym_assert_stmt] = STATE(11),
    [sym_report_stmt] = STATE(11),
    [sym__label] = STATE(16),
    [sym_comment] = STATE(1),
    [aux_sym_design_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_assert] = ACTIONS(9),
    [anon_sym_report] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [2] = {
    [sym__name] = STATE(18),
    [sym__expr] = STATE(28),
    [sym__condition] = STATE(25),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(29),
    [sym__abstract_literal] = STATE(14),
    [sym_physical] = STATE(19),
    [sym_comment] = STATE(2),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_real] = ACTIONS(19),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_bit_string] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [3] = {
    [sym__name] = STATE(18),
    [sym__expr] = STATE(28),
    [sym__condition] = STATE(20),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(29),
    [sym__abstract_literal] = STATE(14),
    [sym_physical] = STATE(19),
    [sym_comment] = STATE(3),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_real] = ACTIONS(19),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_bit_string] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [4] = {
    [sym__name] = STATE(18),
    [sym__expr] = STATE(28),
    [sym__condition] = STATE(27),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(29),
    [sym__abstract_literal] = STATE(14),
    [sym_physical] = STATE(19),
    [sym_comment] = STATE(4),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_real] = ACTIONS(19),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_bit_string] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
  [5] = {
    [sym__name] = STATE(18),
    [sym__expr] = STATE(28),
    [sym__condition] = STATE(26),
    [sym__literal] = STATE(18),
    [sym__number] = STATE(29),
    [sym__abstract_literal] = STATE(14),
    [sym_physical] = STATE(19),
    [sym_comment] = STATE(5),
    [sym_identifier] = ACTIONS(15),
    [sym_integer] = ACTIONS(17),
    [sym_real] = ACTIONS(19),
    [sym_character] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_bit_string] = ACTIONS(21),
    [sym_null] = ACTIONS(23),
    [aux_sym_comment_token1] = ACTIONS(3),
    [aux_sym_comment_token2] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(9), 1,
      anon_sym_assert,
    ACTIONS(11), 1,
      anon_sym_report,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_design_file_repeat1,
    STATE(8), 1,
      sym__sequential_stmt,
    STATE(16), 1,
      sym__label,
    STATE(11), 2,
      sym_assert_stmt,
      sym_report_stmt,
  [35] = 10,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_assert,
    ACTIONS(32), 1,
      anon_sym_report,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(8), 1,
      sym__sequential_stmt,
    STATE(16), 1,
      sym__label,
    STATE(7), 2,
      sym_comment,
      aux_sym_design_file_repeat1,
    STATE(11), 2,
      sym_assert_stmt,
      sym_report_stmt,
  [68] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    ACTIONS(40), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [86] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    ACTIONS(44), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [104] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(48), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [122] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    ACTIONS(52), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [140] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    ACTIONS(56), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [158] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
    ACTIONS(60), 3,
      anon_sym_assert,
      anon_sym_report,
      sym_identifier,
  [176] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      sym_identifier,
    STATE(14), 1,
      sym_comment,
    STATE(24), 1,
      sym__name,
  [195] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(15), 1,
      sym_comment,
    ACTIONS(66), 2,
      anon_sym_assert,
      anon_sym_report,
  [209] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(68), 1,
      anon_sym_assert,
    ACTIONS(70), 1,
      anon_sym_report,
    STATE(16), 1,
      sym_comment,
  [225] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    STATE(17), 1,
      sym_comment,
    ACTIONS(72), 2,
      anon_sym_SEMI,
      sym_identifier,
  [239] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
  [252] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(62), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
  [265] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(76), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
  [278] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_comment,
  [291] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(80), 1,
      anon_sym_COLON,
    STATE(22), 1,
      sym_comment,
  [304] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
  [317] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(84), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
  [330] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
  [343] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
  [356] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
  [369] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
  [382] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(5), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym_comment,
  [395] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 35,
  [SMALL_STATE(8)] = 68,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 104,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 140,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 209,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 239,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 265,
  [SMALL_STATE(21)] = 278,
  [SMALL_STATE(22)] = 291,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 317,
  [SMALL_STATE(25)] = 330,
  [SMALL_STATE(26)] = 343,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 382,
  [SMALL_STATE(30)] = 395,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_design_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_design_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_design_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_design_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_design_file_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_design_file_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_design_file_repeat1, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_design_file_repeat1, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report_stmt, 4, .production_id = 5),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_report_stmt, 4, .production_id = 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_stmt, 4, .production_id = 5),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_stmt, 4, .production_id = 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sequential_stmt, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sequential_stmt, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_report_stmt, 3, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_report_stmt, 3, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_stmt, 3, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_stmt, 3, .production_id = 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__abstract_literal, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_physical, 2, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, .production_id = 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_vhdl(void) {
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
