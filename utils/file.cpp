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

QString chooseFilePath()
{
    return QFileDialog::getOpenFileName(nullptr,
                                        QObject::tr("Choose txt file"),
                                        QDir::currentPath(),
                                        QObject::tr("Txt Files (*.txt)"));
}
