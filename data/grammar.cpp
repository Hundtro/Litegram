#include "data/grammar.h"

void Grammar :: check(const char* text)
{
    result = text;
}

const char* Grammar :: get_result()
{
    return result.c_str();
}
