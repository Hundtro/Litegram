#include "data/grammar.h"

void Grammar :: check(const char *text)
{
    //check operations on text
    result = text;
}

const char* Grammar :: get_result()
{
    return result.c_str();
}
