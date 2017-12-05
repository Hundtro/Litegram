#include <txtfile.h>

QString ImportText(QString path)
{
    QFile file(path);
    file.open(QFile::ReadOnly | QFile::Text);
    QTextStream text(&file);

    return text.readAll();
}
