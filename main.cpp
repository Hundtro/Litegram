#include <QApplication>
#include "control/control.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    Control controller;

    return app.exec();
}

