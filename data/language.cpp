#include "data/language.h"

Language :: Language()
{
    loader = 0;

    for(const char** language : content)
    {	
        language = new const char*[ELEMENTS];
    }
}

~Language :: Language()
{
    for(const char** language : content)
    {	
        delete[] language;
    }
}

bool Language :: load_content(int lang, const char* file)
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

bool Language :: load()
{
    load_content(EN, "language\\EN");
    load_content(PL, "language\\PL");

    if(loader == LANGUAGES)
        return true;
    else
        return false;
}

const char** Language :: get(int lang)
{
    return content[lang];
}

