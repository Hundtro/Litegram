#include <modules/main_module.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainModule mainModule;
    mainModule.run();

    return a.exec();
}
