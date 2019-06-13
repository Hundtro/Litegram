#ifndef MAIN_MODULE_H
#define MAIN_MODULE_H

#include <views/main_view.h>
#include <utils/message.h>
#include <QApplication>

class MainModule : public QObject
{
private:
    Q_OBJECT

    MainView* mainView;

public:
    MainModule();
    ~MainModule();
    void run();

public slots:
    void slot_import();
    void slot_exit();
    void slot_options();
    void slot_about();
    void slot_check();
    void slot_clear();
};

#endif // MAIN_MODULE_H
