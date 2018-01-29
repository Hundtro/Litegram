#include <QApplication>
#include <data/tools.h> //t

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    ui::create_mainwindow();

    return app.exec();
}
