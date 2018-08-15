#include "control/import.h"

void Import :: select_txt()
{
    //
}

void Import :: import_txt()
{
    char* file_text;
    int length;
    std::ifstream file(path);
    //not found?

    file.seekg(0, std::ios::end);
    length = file.tellg();
    file.seekg(0, std::ios::beg);
    file.read(file_text, length);
    file.close();

    text = &file_text[0];
}

const char* Import :: get_text()
{
    return text;
}
