#ifndef CONTROL_H
#define CONTROL_H

#include "data/data.h"
#include "data/dictionary.h"
#include "interface/mainwindow.h"

class Control : public QObject
{
private:
    Q_OBJECT
    Dictionary* dict;
    MainWindow* wmain;

public:
    Control();
    ~Control();
    void begin();

public slots:
    void import_slot();
    void exit_slot();
    void options_slot();
    void about_slot();
    void check_slot();
    void clear_slot();
};

#endif // CONTROL_H
