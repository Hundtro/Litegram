#ifndef DATA_H
#define DATA_H

#include "data/language.h"

/*this is a test struct*/

struct Settings
{
    short int lang;
    bool check1;
    bool check2;
    bool check3;
};

extern Settings options;

#endif // DATA_H
