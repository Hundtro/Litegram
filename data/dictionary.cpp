#include "data/dictionary.h"

void Dictionary :: parse_line(std::string line)
{
    const char separator = 92;
    int s_index = line.find_last_of(separator);

    std::string word = line.substr(0, s_index);
    std::string pos = line.substr(s_index+1, line.length());

    words.insert(std::make_pair(word, pos));
}

bool Dictionary :: load()
{
    std::string content;

    if(read_all_text("pos.db", content))
    {
        std::istringstream text(content);
        std::string line;

        while(std::getline(text, line))
        {
            parse_line(line);
        }

        return true;
    }
    else
    {
        return false;
    }
}

std::string Dictionary :: find_pos(std::string word)
{
    std::map<std::string, std::string>::iterator result = words.find(word); // use auto??

    if(result != words.end())
        return words[word];
    else
        return std::string();
}
