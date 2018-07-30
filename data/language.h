#ifndef LANGUAGE_H
#define LANGUAGE_H

struct lang{

    const char* mainwindow_menu_program;
    const char* mainwindow_menu_import_txt;
    const char* mainwindow_menu_exit;
    const char* mainwindow_menu_settings;
    const char* mainwindow_menu_language;
    const char* mainwindow_menu_english;
    const char* mainwindow_menu_polish;
    const char* mainwindow_menu_help;
    const char* mainwindow_menu_about;
    const char* mainwindow_buttom_check;
    const char* mainwindow_buttom_clear;

    const char* importdialog_title;
    const char* importdialog_filter_txt;
};

enum Language { english, polish };

extern lang en;
extern lang pl;

#endif // LANGUAGE_H
