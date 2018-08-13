#include <control/control.h>

Control :: Control()
{
    dict = new Dictionary();
    langs = new Languages();
    wmain = new MainWindow();

    //add load dictionary and errors check
    //add set interface (langs->get(EN));

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
    delete langs;
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
