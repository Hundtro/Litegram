#include <control/control.h>

Control :: Control()
{
    wmain = new MainWindow();
    dict = new Dictionary();

    //add load dictionary and errors check
    //add set interface

    //import
    connect(wmain, SIGNAL(exit_signal()), this, SLOT(exit_slot()));
    //options
    //about
    //check
    connect(wmain, SIGNAL(clear_signal()), this, SLOT(clear_slot()));
}

Control :: ~Control()
{
    delete wmain;
    delete dict;
}

void Control :: begin()
{
    wmain->show();
}

void Control :: import_slot()
{
  //
}

void Control :: exit_slot()
{
    std::exit(0);
}

void Control :: options_slot()
{
  //
}

void Control :: about_slot()
{
  //
}

void Control :: check_slot()
{
  //
}

void Control :: clear_slot()
{
        wmain->set_text("");
}
