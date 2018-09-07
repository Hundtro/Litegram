#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <map>
#include <utility>
#include "data/file_operations.h"

class Dictionary
{
private:
    std::map<std::string, std::string> words;

    void parse_line(std::string line);

public:
    bool load();
    std::string find_pos(std::string word);
};

#endif //DICTIONARY_H
