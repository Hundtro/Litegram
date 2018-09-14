#include "control/import.h"

Import :: Import(const char* text[])
{
    title = text[9];
    filter = text[10];
}

void Import :: select_txt()
{
    path = QFileDialog::getOpenFileName(nullptr,
                                        title,
                                        QDir::currentPath(),
                                        filter).toStdString();
}

bool Import :: import_txt()
{
    return read_all_text(path.c_str(), text);
}

const char* Import :: get_text()
{
    return text.c_str();
}
