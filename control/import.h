#ifndef IMPORT_CONTROL_H
#define IMPORT_CONTROL_H

#include "data/file_operations.h"
#include <QFileDialog>

class Import
{
private:
    std::string path;
    std::string text;

public:
    void select_txt(const char* text[]);
    bool import_txt();
    const char* get_text();
};

#endif // IMPORT_CONTROL_H
