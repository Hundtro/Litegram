#include "control/import.h"

Import :: Import(short int language)
{
    this->language = language;
}

void Import :: select_txt()
{
    path = QFileDialog::getOpenFileName(nullptr,
                                        text[language][9],
                                        QDir::currentPath(),
                                        text[language][10]).toStdString();
}

bool Import :: import_txt()
{
    return read_all_text(path.c_str(), content);
}

const char* Import :: get_text()
{
    return content.c_str();
}
