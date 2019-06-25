#ifndef TEXT_H
#define TEXT_H

#include <QFileDialog>
#include <QTextStream>
#include <QFile>

QString readAllText(QString filePath);
QString chooseFilePath();

#endif // TEXT_H
