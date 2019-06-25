#include <utils/file.h>

QString readAllText(QString filePath)
{
    QFile file(filePath);

    if (file.open(QFile::ReadOnly)) {
        QTextStream text(&file);
        QString content = text.readAll();
        file.close();
        return content;
    } else {
        return QString();
    }
}
