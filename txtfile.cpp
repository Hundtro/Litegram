#include <txtfile.h>

std::string ImportText(std::string path)
{
    std::ifstream file;
    std::string result;

    file.open(path, std::ios_base::in);
    while(file.peek()!=-1)
    {
        result += file.get();
    }
    file.close();

    return result;
}
