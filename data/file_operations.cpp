#include "data/file_operations.h"

bool read_all_text(const char *path, std::string &where)
{
    std::ifstream file(path);
    std::stringstream temp;

    if (file.is_open()) {
        temp << file.rdbuf();
        where = temp.str();
        file.close();
		
        return true;
    } else {
		
        return false;
    }
}
