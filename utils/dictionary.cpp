#include <utils/dictionary.h>

void Dictionary :: parsePOSdata(std::string data)
{
    const char separator = '\\';
    std::istringstream text(data);
    std::string line;

    while (std::getline(text, line)) {
        int sprIndex;
        std::string word;
        std::string pos;

        sprIndex = line.find_last_of(separator);
        word = line.substr(0, sprIndex);
        pos = line.substr(sprIndex+1, line.length());
        wordsPOS.insert(std::make_pair(word, pos));
    }
}

std::string Dictionary :: findPOS(std::string word)
{
    auto result = wordsPOS.find(word);

    if(result != wordsPOS.end())
        return wordsPOS[word];
    else
        return std::string();
}
