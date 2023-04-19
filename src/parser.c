#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 16

enum {
  anon_sym_module = 1,
  anon_sym_import = 2,
  anon_sym_DOT = 3,
  anon_sym_as = 4,
  anon_sym_SLASH = 5,
  anon_sym_LBRACE = 6,
  anon_sym_COMMA = 7,
  anon_sym_RBRACE = 8,
  anon_sym_record = 9,
  anon_sym_type = 10,
  anon_sym_EQ = 11,
  anon_sym_PIPE = 12,
  anon_sym_LPAREN = 13,
  anon_sym_RPAREN = 14,
  anon_sym_COLON = 15,
  aux_sym_identifier_token1 = 16,
  sym__discard_name = 17,
  sym__name = 18,
  sym__upname = 19,
  sym_source_file = 20,
  sym_module = 21,
  sym_import = 22,
  sym_module_name = 23,
  sym_unqualified_imports = 24,
  sym_unqualified_import = 25,
  sym_record = 26,
  sym_type = 27,
  sym_type_name = 28,
  sym_type_field = 29,
  sym_identifier = 30,
  sym_type_identifier = 31,
  sym_generic_list = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_source_file_repeat2 = 34,
  aux_sym_module_name_repeat1 = 35,
  aux_sym_unqualified_imports_repeat1 = 36,
  aux_sym_record_repeat1 = 37,
  aux_sym_type_repeat1 = 38,
  aux_sym_return_type_repeat1 = 39,
  aux_sym_type_name_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_record] = "record",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__discard_name] = "_discard_name",
  [sym__name] = "_name",
  [sym__upname] = "_upname",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_import] = "import",
  [sym_module_name] = "module_name",
  [sym_unqualified_imports] = "unqualified_imports",
  [sym_unqualified_import] = "unqualified_import",
  [sym_record] = "record",
  [sym_type] = "type",
  [sym_type_name] = "type_name",
  [sym_type_field] = "type_field",
  [sym_identifier] = "identifier",
  [sym_type_identifier] = "type_identifier",
  [sym_generic_list] = "generic_list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_module_name_repeat1] = "module_name_repeat1",
  [aux_sym_unqualified_imports_repeat1] = "unqualified_imports_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_return_type_repeat1] = "return_type_repeat1",
  [aux_sym_type_name_repeat1] = "type_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__discard_name] = sym__discard_name,
  [sym__name] = sym__name,
  [sym__upname] = sym__upname,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_import] = sym_import,
  [sym_module_name] = sym_module_name,
  [sym_unqualified_imports] = sym_unqualified_imports,
  [sym_unqualified_import] = sym_unqualified_import,
  [sym_record] = sym_record,
  [sym_type] = sym_type,
  [sym_type_name] = sym_type_name,
  [sym_type_field] = sym_type_field,
  [sym_identifier] = sym_identifier,
  [sym_type_identifier] = sym_type_identifier,
  [sym_generic_list] = sym_generic_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_module_name_repeat1] = aux_sym_module_name_repeat1,
  [aux_sym_unqualified_imports_repeat1] = aux_sym_unqualified_imports_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_return_type_repeat1] = aux_sym_return_type_repeat1,
  [aux_sym_type_name_repeat1] = aux_sym_type_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__discard_name] = {
    .visible = false,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym__upname] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_imports] = {
    .visible = true,
    .named = true,
  },
  [sym_unqualified_import] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_field] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unqualified_imports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_return_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_fields = 2,
  field_generics = 3,
  field_imports = 4,
  field_module = 5,
  field_name = 6,
  field_type = 7,
  field_types = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_fields] = "fields",
  [field_generics] = "generics",
  [field_imports] = "imports",
  [field_module] = "module",
  [field_name] = "name",
  [field_type] = "type",
  [field_types] = "types",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 3},
  [8] = {.index = 13, .length = 2},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
  [12] = {.index = 21, .length = 3},
  [13] = {.index = 24, .length = 3},
  [14] = {.index = 27, .length = 4},
  [15] = {.index = 31, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_generics, 2},
    {field_name, 1},
  [4] =
    {field_fields, 2},
    {field_name, 1},
  [6] =
    {field_imports, 3},
    {field_module, 1},
  [8] =
    {field_alias, 3},
    {field_module, 1},
  [10] =
    {field_fields, 3},
    {field_generics, 2},
    {field_name, 1},
  [13] =
    {field_name, 1},
    {field_types, 3},
  [15] =
    {field_name, 0},
  [16] =
    {field_name, 0},
    {field_type, 2},
  [18] =
    {field_name, 1},
    {field_types, 3},
    {field_types, 4},
  [21] =
    {field_generics, 2},
    {field_name, 1},
    {field_types, 4},
  [24] =
    {field_alias, 5},
    {field_imports, 3},
    {field_module, 1},
  [27] =
    {field_generics, 2},
    {field_name, 1},
    {field_types, 4},
    {field_types, 5},
  [31] =
    {field_alias, 2},
    {field_name, 0},
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
  [10] = 7,
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
  [42] = 2,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 66,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(4);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(41);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 22:
      if (eof) ADVANCE(23);
      if (lookahead == '(') ADVANCE(38);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(44);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_record);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__discard_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__upname);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 20},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__discard_name] = ACTIONS(1),
    [sym__upname] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [sym_module] = STATE(3),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 9,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_type,
      anon_sym_RPAREN,
      anon_sym_COLON,
  [12] = 6,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_type,
    STATE(5), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(16), 3,
      sym_record,
      sym_type,
      aux_sym_source_file_repeat2,
  [34] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym_generic_list,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(17), 2,
      anon_sym_record,
      anon_sym_type,
    STATE(11), 2,
      sym_type_field,
      aux_sym_record_repeat1,
  [58] = 6,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(21), 3,
      sym_record,
      sym_type,
      aux_sym_source_file_repeat2,
  [80] = 3,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(25), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [95] = 1,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_record,
      anon_sym_type,
      anon_sym_PIPE,
      anon_sym_LPAREN,
  [106] = 3,
    ACTIONS(27), 1,
      anon_sym_SLASH,
    STATE(6), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [121] = 3,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    STATE(9), 1,
      aux_sym_module_name_repeat1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [136] = 2,
    ACTIONS(38), 3,
      anon_sym_record,
      anon_sym_type,
      aux_sym_identifier_token1,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [149] = 5,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(42), 2,
      anon_sym_record,
      anon_sym_type,
    STATE(13), 2,
      sym_type_field,
      aux_sym_record_repeat1,
  [167] = 5,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(46), 2,
      anon_sym_record,
      anon_sym_type,
    STATE(15), 2,
      sym_type_field,
      aux_sym_record_repeat1,
  [185] = 5,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym_identifier_token1,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(50), 2,
      anon_sym_record,
      anon_sym_type,
    STATE(13), 2,
      sym_type_field,
      aux_sym_record_repeat1,
  [203] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_DOT,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_record,
      anon_sym_type,
  [213] = 5,
    ACTIONS(21), 1,
      aux_sym_identifier_token1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_identifier,
    ACTIONS(57), 2,
      anon_sym_record,
      anon_sym_type,
    STATE(13), 2,
      sym_type_field,
      aux_sym_record_repeat1,
  [231] = 4,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_record,
      sym_type,
      aux_sym_source_file_repeat2,
  [246] = 3,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(63), 1,
      anon_sym_as,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_type,
  [259] = 2,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(67), 3,
      anon_sym_record,
      anon_sym_type,
      aux_sym_identifier_token1,
  [270] = 6,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(73), 1,
      sym__upname,
    STATE(46), 1,
      sym_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(60), 1,
      sym_unqualified_import,
  [289] = 3,
    ACTIONS(77), 1,
      anon_sym_import,
    STATE(20), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [302] = 4,
    ACTIONS(11), 1,
      anon_sym_record,
    ACTIONS(13), 1,
      anon_sym_type,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_record,
      sym_type,
      aux_sym_source_file_repeat2,
  [317] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_record,
    ACTIONS(87), 1,
      anon_sym_type,
    STATE(22), 3,
      sym_record,
      sym_type,
      aux_sym_source_file_repeat2,
  [332] = 6,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(73), 1,
      sym__upname,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(70), 1,
      sym_unqualified_import,
  [351] = 6,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(73), 1,
      sym__upname,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(70), 1,
      sym_unqualified_import,
  [370] = 3,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_type_repeat1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [382] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [390] = 3,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    STATE(25), 1,
      aux_sym_type_repeat1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [402] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(104), 3,
      anon_sym_record,
      anon_sym_type,
      aux_sym_identifier_token1,
  [412] = 5,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    ACTIONS(73), 1,
      sym__upname,
    STATE(46), 1,
      sym_type_identifier,
    STATE(56), 1,
      sym_identifier,
    STATE(70), 1,
      sym_unqualified_import,
  [428] = 3,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_type_repeat1,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [440] = 3,
    ACTIONS(110), 1,
      anon_sym_PIPE,
    STATE(31), 1,
      aux_sym_type_repeat1,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [452] = 3,
    ACTIONS(96), 1,
      anon_sym_PIPE,
    STATE(30), 1,
      aux_sym_type_repeat1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
  [464] = 2,
    ACTIONS(117), 1,
      anon_sym_as,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_type,
  [474] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_EQ,
    ACTIONS(121), 3,
      anon_sym_record,
      anon_sym_type,
      aux_sym_identifier_token1,
  [484] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [492] = 2,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
      anon_sym_PIPE,
  [502] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [510] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
      anon_sym_record,
      anon_sym_type,
  [518] = 1,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
      anon_sym_PIPE,
  [525] = 1,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_type,
  [532] = 1,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_type,
  [539] = 2,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 3,
      anon_sym_record,
      anon_sym_type,
      aux_sym_identifier_token1,
  [548] = 1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
      anon_sym_PIPE,
  [555] = 1,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_record,
      anon_sym_type,
  [562] = 1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_record,
      anon_sym_type,
      anon_sym_PIPE,
  [569] = 2,
    ACTIONS(145), 1,
      anon_sym_as,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [577] = 3,
    ACTIONS(149), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_return_type_repeat1,
  [587] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_type_name_repeat1,
  [597] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      aux_sym_return_type_repeat1,
  [607] = 3,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_return_type_repeat1,
  [617] = 3,
    ACTIONS(165), 1,
      sym__upname,
    STATE(36), 1,
      sym_type_identifier,
    STATE(39), 1,
      sym_type_name,
  [627] = 3,
    ACTIONS(165), 1,
      sym__upname,
    STATE(27), 1,
      sym_type_name,
    STATE(36), 1,
      sym_type_identifier,
  [637] = 3,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(61), 1,
      sym_type_field,
    STATE(67), 1,
      sym_identifier,
  [647] = 3,
    ACTIONS(165), 1,
      sym__upname,
    STATE(32), 1,
      sym_type_name,
    STATE(36), 1,
      sym_type_identifier,
  [657] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_type_name_repeat1,
  [667] = 2,
    ACTIONS(171), 1,
      anon_sym_as,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [675] = 3,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_unqualified_imports_repeat1,
  [685] = 3,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(79), 1,
      sym_type_field,
    STATE(85), 1,
      sym_identifier,
  [695] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_unqualified_imports_repeat1,
  [705] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_unqualified_imports_repeat1,
  [715] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_type_name_repeat1,
  [725] = 3,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_EQ,
    STATE(81), 1,
      sym_generic_list,
  [735] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(40), 1,
      sym_identifier,
  [742] = 2,
    ACTIONS(188), 1,
      sym__upname,
    STATE(73), 1,
      sym_type_identifier,
  [749] = 2,
    ACTIONS(190), 1,
      sym__name,
    STATE(44), 1,
      sym_module_name,
  [756] = 2,
    ACTIONS(192), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_identifier,
  [763] = 2,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      anon_sym_COLON,
  [770] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(18), 1,
      sym_identifier,
  [777] = 2,
    ACTIONS(188), 1,
      sym__upname,
    STATE(62), 1,
      sym_type_identifier,
  [784] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [789] = 2,
    ACTIONS(188), 1,
      sym__upname,
    STATE(4), 1,
      sym_type_identifier,
  [796] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [801] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [806] = 2,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_unqualified_imports,
  [813] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(73), 1,
      sym_identifier,
  [820] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(49), 1,
      sym_identifier,
  [827] = 2,
    ACTIONS(190), 1,
      sym__name,
    STATE(17), 1,
      sym_module_name,
  [834] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(41), 1,
      sym_identifier,
  [841] = 1,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [846] = 2,
    ACTIONS(71), 1,
      aux_sym_identifier_token1,
    STATE(72), 1,
      sym_identifier,
  [853] = 1,
    ACTIONS(200), 1,
      anon_sym_EQ,
  [857] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [861] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [865] = 1,
    ACTIONS(206), 1,
      sym__name,
  [869] = 1,
    ACTIONS(194), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 12,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 121,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 167,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 203,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 317,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 440,
  [SMALL_STATE(32)] = 452,
  [SMALL_STATE(33)] = 464,
  [SMALL_STATE(34)] = 474,
  [SMALL_STATE(35)] = 484,
  [SMALL_STATE(36)] = 492,
  [SMALL_STATE(37)] = 502,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 518,
  [SMALL_STATE(40)] = 525,
  [SMALL_STATE(41)] = 532,
  [SMALL_STATE(42)] = 539,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 555,
  [SMALL_STATE(45)] = 562,
  [SMALL_STATE(46)] = 569,
  [SMALL_STATE(47)] = 577,
  [SMALL_STATE(48)] = 587,
  [SMALL_STATE(49)] = 597,
  [SMALL_STATE(50)] = 607,
  [SMALL_STATE(51)] = 617,
  [SMALL_STATE(52)] = 627,
  [SMALL_STATE(53)] = 637,
  [SMALL_STATE(54)] = 647,
  [SMALL_STATE(55)] = 657,
  [SMALL_STATE(56)] = 667,
  [SMALL_STATE(57)] = 675,
  [SMALL_STATE(58)] = 685,
  [SMALL_STATE(59)] = 695,
  [SMALL_STATE(60)] = 705,
  [SMALL_STATE(61)] = 715,
  [SMALL_STATE(62)] = 725,
  [SMALL_STATE(63)] = 735,
  [SMALL_STATE(64)] = 742,
  [SMALL_STATE(65)] = 749,
  [SMALL_STATE(66)] = 756,
  [SMALL_STATE(67)] = 763,
  [SMALL_STATE(68)] = 770,
  [SMALL_STATE(69)] = 777,
  [SMALL_STATE(70)] = 784,
  [SMALL_STATE(71)] = 789,
  [SMALL_STATE(72)] = 796,
  [SMALL_STATE(73)] = 801,
  [SMALL_STATE(74)] = 806,
  [SMALL_STATE(75)] = 813,
  [SMALL_STATE(76)] = 820,
  [SMALL_STATE(77)] = 827,
  [SMALL_STATE(78)] = 834,
  [SMALL_STATE(79)] = 841,
  [SMALL_STATE(80)] = 846,
  [SMALL_STATE(81)] = 853,
  [SMALL_STATE(82)] = 857,
  [SMALL_STATE(83)] = 861,
  [SMALL_STATE(84)] = 865,
  [SMALL_STATE(85)] = 869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, .production_id = 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_name, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_name_repeat1, 2), SHIFT_REPEAT(84),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_identifier, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 4),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, .production_id = 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, .production_id = 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_record_repeat1, 2), SHIFT_REPEAT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, .production_id = 7),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4, .production_id = 7),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_field, 3, .production_id = 10),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_field, 3, .production_id = 10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(71),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(69),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 6, .production_id = 14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 12),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_list, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 5, .production_id = 11),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(51),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_list, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 9),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_imports, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 6, .production_id = 13),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 4, .production_id = 9),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 5, .production_id = 9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 1, .production_id = 9),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_return_type_repeat1, 2), SHIFT_REPEAT(80),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_return_type_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2), SHIFT_REPEAT(58),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_name_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2), SHIFT_REPEAT(29),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unqualified_imports_repeat1, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unqualified_import, 3, .production_id = 15),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_palm(void) {
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
