#include "data/file_operations.h"

bool read_all_text(const char* path, std::string& where)
{
    std::ifstream file(path);
    std::stringstream temp;

    if(file.is_open())
    {
        temp << file.rdbuf();
        where = temp.str();

        file.close();
        return true;
    }
    else
    {
        return false;
    }
}

void text_to_lines(std::string text, std::string lines[])
{
    int index = 0;

    for(int i=0; i<text.size(); i++)
    {
        if(text[i] != '\n')
            lines[index] += text[i];
        else
            index++;
    }

    //if more lines than array cells??
}
