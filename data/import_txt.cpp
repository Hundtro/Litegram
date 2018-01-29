#include <data/import_txt.h>

char *read_file(char* file_name){

    char* text;
    int length;
    std::ifstream file;

    file.open(file_name);
    file.seekg(0, std::ios::end);
    length = file.tellg();
    file.seekg(0, std::ios::beg);

    file.read(text, length);
    file.close();

    return text;
}
