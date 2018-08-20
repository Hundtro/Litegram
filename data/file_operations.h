#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include <fstream>
#include <string>
#include <sstream>

bool read_from_file(const char* path, std::string& where);
void text_to_lines(std::string text, std::string lines[]);

#endif // FILE_OPERATIONS_H
