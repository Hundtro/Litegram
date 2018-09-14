#ifndef IMPORT_CONTROL_H
#define IMPORT_CONTROL_H

#include "data/file_operations.h"
#include <QFileDialog>

class Import
{
private:
    const char* title;
    const char* filter;
    std::string path;
    std::string text;

public:
    Import(const char* text[]);
    void select_txt();
    bool import_txt();
    const char* get_text();
};

#endif // IMPORT_CONTROL_H
