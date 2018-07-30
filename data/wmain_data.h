#ifndef WMAIN_DATA_H
#define WMAIN_DATA_H

struct WMainText
{
    const char* program;
    const char* import_txt;
    const char* exit;
    const char* settings;
    const char* options;
    const char* help;
    const char* about;
    const char* check;
    const char* clear;
};

extern WMainText wmain_en;
extern WMainText wmain_pl;

#endif // WMAIN_DATA_H
