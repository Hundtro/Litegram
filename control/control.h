#ifndef CONTROL_H
#define CONTROL_H

#include "data/dictionary.h"
#include "interface/mainwindow.h"

class Control : public QObject
{
private:
    Q_OBJECT
    Dictionary* dict;
    MainWindow* wmain;

public:
    Control()
    {
        wmain = new MainWindow();
        dict = new Dictionary();
        //add load dictionary and errors check

        //import
        connect(wmain, SIGNAL(exit_signal()), this, SLOT(exit_slot()));
        //options
        //about
        //check
        connect(wmain, SIGNAL(clear_signal()), this, SLOT(clear_slot()));

        wmain->show();
    }

    ~Control()
    {
        delete wmain;
        delete dict;
    }

public slots:
    void import_slot()
    {
      //
    }

    void exit_slot()
    {
        std::exit(0);
    }

    void options_slot()
    {
      //
    }

    void about_slot()
    {
      //
    }

    void check_slot()
    {
      //
    }

    void clear_slot()
    {
        wmain->set_text("");
    }
};

#endif // CONTROL_H
