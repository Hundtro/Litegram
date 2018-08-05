#ifndef LANGUAGE_H
#define LANGUAGE_H

enum
{
    EN,
    PL
};

enum
{
    WMAIN_PROGRAM,
    WMAIN_IMPORT_TEXT,
    WMAIN_EXIT,
    WMAIN_SETTINGS,
    WMAIN_OPTIONS,
    WMAIN_HELP,
    WMAIN_ABOUT,
    WMAIN_CHECK,
    WMAIN_CLEAR
};

extern const char* lang_en[];
extern const char* lang_pl[];
extern const char** langs[];

#endif
