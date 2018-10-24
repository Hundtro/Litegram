#ifndef GRAMMAR_H
#define GRAMMAR_H

//include grammar_algorithms?
#include <string>

class Grammar
{
private:
    std::string result;

public:
    void check(const char *text);
    const char* get_result();
};

#endif // GRAMMAR_H
