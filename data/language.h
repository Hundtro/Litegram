#ifndef LANGUAGE_H
#define LANGUAGE_H

#include <string>
#include <fstream>

enum { EN, PL };

const int LANGUAGES = 2;
const int ELEMENTS = 11;

class Languages
{
private:
    const char** content[LANGUAGES];
    short int loader;

    bool load_content(int lang, const char* file);

public:
    Languages();
    ~Languages();
    bool load();
    const char** get(int lang);
};

#endif
