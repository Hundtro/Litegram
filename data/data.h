#ifndef DATA_H
#define DATA_H

enum Language = {english, polish};

struct Settings
{
    Language lang;
    bool check1;
    bool check2;
    bool check3;
};

extern Settings settings;

#endif // DATA_H
