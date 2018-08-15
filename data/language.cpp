#include "data/language.h"

Languages :: Languages()
{
    loader = 0;

    for(const char** language : content)//Unused??
    {	
        language = new const char*[ELEMENTS];
    }
}

Languages :: ~Languages()
{
    for(const char** language : content)
    {	
        delete[] language;
    }
}

bool Languages :: load_content(int lang, const char* file)
{
    std::ifstream stream(file);

    if(stream)
    {
        int index = 0;
        std::string line;

        while(std::getline(stream, line))
        {
            content[lang][index] = line.c_str();
            index++;
        }

        loader++;
        return true;
    }
    else
    {
        return false;
    }
}

bool Languages :: load()
{
    load_content(EN, "language\\EN");
    load_content(PL, "language\\PL");

    if(loader == LANGUAGES)
        return true;
    else
        return false;
}

const char** Languages :: get(int lang)
{
    return content[lang];
}

