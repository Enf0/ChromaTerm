// This program is protected under the GNU GPL (See COPYING)

#include "defs.h"

struct command_type command_table[] = {
    {"commands", do_commands, TOKEN_TYPE_COMMAND},
    {"config", do_configure, TOKEN_TYPE_COMMAND},
    {"exit", do_exit, TOKEN_TYPE_COMMAND},
    {"help", do_help, TOKEN_TYPE_COMMAND},
    {"highlight", do_highlight, TOKEN_TYPE_COMMAND},
    {"read", do_read, TOKEN_TYPE_COMMAND},
    {"regexp", do_regexp, TOKEN_TYPE_REGEX},
    {"run", do_run, TOKEN_TYPE_COMMAND},
    {"showme", do_showme, TOKEN_TYPE_COMMAND},
    {"unhighlight", do_unhighlight, TOKEN_TYPE_COMMAND},
    {"write", do_write, TOKEN_TYPE_COMMAND},
    {"", NULL, TOKEN_TYPE_COMMAND}};

struct list_type list_table[LIST_MAX] = {
    {"CONFIG", "CONFIGURATIONS", ALPHA, 2},
    {"HIGHLIGHT", "HIGHLIGHTS", PRIORITY, 3}};

struct config_type config_table[] = {
    {"CHARSET", "The character set encoding used", config_charset},
    {"COMMAND CHAR", "The character used for commands", config_commandchar},
    {"CONVERT META", "Convert meta and control characters",
     config_convertmeta}};

struct color_type color_table[] = {{"azure", "<abd>"},
                                   {"ebony", "<g04>"},
                                   {"jade", "<adb>"},
                                   {"lime", "<bda>"},
                                   {"orange", "<dba>"},
                                   {"pink", "<dab>"},
                                   {"silver", "<ccc>"},
                                   {"tan", "<cba>"},
                                   {"violet", "<bad>"},

                                   {"light azure", "<acf>"},
                                   {"light ebony", "<bbb>"},
                                   {"light jade", "<afc>"},
                                   {"light lime", "<cfa>"},
                                   {"light orange", "<fca>"},
                                   {"light pink", "<fac>"},
                                   {"light silver", "<eee>"},
                                   {"light tan", "<eda>"},
                                   {"light violet", "<caf>"},

                                   {"reset", "<088>"},
                                   {"light", "<188>"},
                                   {"bold", "<188>"},
                                   {"faint", "<288>"},
                                   {"dim", "<288>"},
                                   {"dark", "<288>"},
                                   {"underscore", "<488>"},
                                   {"blink", "<588>"},
                                   {"reverse", "<788>"},

                                   {"black", "<808>"},
                                   {"red", "<818>"},
                                   {"green", "<828>"},
                                   {"yellow", "<838>"},
                                   {"blue", "<848>"},
                                   {"magenta", "<858>"},
                                   {"cyan", "<868>"},
                                   {"white", "<878>"},

                                   {"b black", "<880>"},
                                   {"b red", "<881>"},
                                   {"b green", "<882>"},
                                   {"b yellow", "<883>"},
                                   {"b blue", "<884>"},
                                   {"b magenta", "<885>"},
                                   {"b cyan", "<886>"},
                                   {"b white", "<887>"},

                                   {"b azure", "<ABD>"},
                                   {"b ebony", "<G04>"},
                                   {"b jade", "<ADB>"},
                                   {"b lime", "<BDA>"},
                                   {"b orange", "<DBA>"},
                                   {"b pink", "<DAB>"},
                                   {"b silver", "<CCC>"},
                                   {"b tan", "<CBA>"},
                                   {"b violet", "<BAD>"},

                                   {"", "<888>"}};

struct cursor_type cursor_table[] = {
    {"BACKSPACE", "Delete backward character", "", cursor_backspace},
    {"BACKWARD", "Move cursor backward", "", cursor_left},
    {"CLEAR LEFT", "Delete from cursor to start of input", "",
     cursor_clear_left},
    {"CLEAR LINE", "Delete the input line", "", cursor_clear_line},
    {"CLEAR RIGHT", "Delete from cursor to end of input", "",
     cursor_clear_right},
    {"CONVERT META", "Meta convert the next character", "",
     cursor_convert_meta},
    {"CTRL DELETE", "Delete one character, exit on an empty line", "",
     cursor_delete_or_exit},
    {"DELETE", "Delete character at cursor", "[3~", cursor_delete},
    {"DELETE WORD LEFT", "Delete backwards till next space", "",
     cursor_delete_word_left},
    {"DELETE WORD RIGHT", "Delete forwards till next space", "",
     cursor_delete_word_right},
    {"END", "Move cursor to end of input", "", cursor_end},
    {"ENTER", "Process the input line", "", cursor_enter},
    {"EXIT", "Exit current session", "", cursor_exit},
    {"FORWARD", "Move cursor forward", "", cursor_right},
    {"HOME", "Move the cursor to start of input", "", cursor_home},
    {"INSERT", "Turn insert mode on or off", "", cursor_insert},
    {"NEXT WORD", "Move cursor to the next word", "f", cursor_right_word},
    {"PASTE BUFFER", "Paste the previously deleted input text", "",
     cursor_paste_buffer},
    {"PREV WORD", "Move cursor to the previous word", "b", cursor_left_word},
    {"REDRAW INPUT", "Redraw the input line", "", cursor_redraw_input},
    {"SUSPEND", "Suspend program, return with fg", "", cursor_suspend},
    {"TEST", "Print debugging information", "", cursor_test},

    {"", "", "OM", cursor_enter},
    {"", "", "[7~", cursor_home},
    {"", "", "[1~", cursor_home},
    {"", "", "OH", cursor_home},
    {"", "", "[H", cursor_home},
    {"", "", "OD", cursor_left},
    {"", "", "[D", cursor_left},
    {"", "", "[8~", cursor_end},
    {"", "", "[4~", cursor_end},
    {"", "", "OF", cursor_end},
    {"", "", "[F", cursor_end},
    {"", "", "OC", cursor_right},
    {"", "", "[C", cursor_right},
    {"", "", "", cursor_backspace},
    {"", "", "", cursor_delete_word_left},
    {"", "", "d", cursor_delete_word_right},
    {"", "", "", NULL}};
