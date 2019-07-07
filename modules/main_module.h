#ifndef MAIN_MODULE_H
#define MAIN_MODULE_H

#include <utils/settings.h>
#include <utils/dictionary.h>
#include <utils/message.h>
#include <utils/file.h>
#include <views/main_view.h>
#include <QApplication>

class MainModule : public QObject
{
private:
    Q_OBJECT

    MainView* mainView;
    Dictionary* dictionary;
    Settings* settings;

public:
    MainModule();
    ~MainModule();
    void run();

public slots:
    void slot_import();
    void slot_exit();
    void slot_about();
    void slot_check();
    void slot_clear();
    void slot_apply();
};

#endif // MAIN_MODULE_H
