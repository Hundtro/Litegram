#include "control/import.h"

void Import :: select_txt(const char* text[])
{
    path = QFileDialog::getOpenFileName(nullptr,
                                        text[9],
                                        QDir::currentPath(),
                                        text[10]).toStdString();
}

bool Import :: import_txt()
{
    return read_all_text(path.c_str(), text);
}

const char* Import :: get_text()
{
    return text.c_str();
}
