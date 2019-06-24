#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <sstream>
#include <utility>
#include <string>
#include <map>

class Dictionary
{
private:
    std::map<std::string, std::string> wordsPOS;

public:
    void parsePOSdata(std::string data);
    std::string findPOS(std::string word);
};

#endif // DICTIONARY_H
