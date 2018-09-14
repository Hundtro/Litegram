#ifndef IMPORT_CONTROL_H
#define IMPORT_CONTROL_H

#include <QFileDialog>
#include "data/file_operations.h"
#include "language/languages.h"

class Import
{
private:
    short int language;
    std::string path;
    std::string content;

public:
    Import(short int language);
    void select_txt();
    bool import_txt();
    const char* get_text();
};

#endif // IMPORT_CONTROL_H
