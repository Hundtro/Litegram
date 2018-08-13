#ifndef IMPORT_CONTROL_H
#define IMPORT_CONTROL_H

#include <fstream>
//#include qt file dialog..

class Import
{
private:
    const char* path;
    const char* text;

public:
    void select_txt();
    void import_txt();
    const char* get_text();
};

#endif // IMPORT_CONTROL_H
