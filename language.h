#ifndef LANGUAGE_H
#define LANGUAGE_H

enum Language { english, polish };

struct lang{

    const char* menu_program;
    const char* menu_import_txt;
    const char* menu_exit;
    const char* menu_settings;
    const char* menu_language;
    const char* menu_help;
    const char* menu_about;
    const char* buttom_check;
    const char* buttom_clear;
    const char* title_import_txt;
    const char* filter_import_txt;
};

extern lang en;
extern lang pl;

#endif // LANGUAGE_H
