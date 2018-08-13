#include <control/control.h>

Control :: Control()
{
    /***Create Elements***/
    dict = new Dictionary();
    langs = new Languages();
    opts = new Options();
    wmain = new MainWindow();

    //add load dictionary and errors check
    //add set interface (langs->get(EN));

    /***Connect Elements***/
    connect(wmain, SIGNAL(import_signal()), this, SLOT(import_slot()));
    connect(wmain, SIGNAL(exit_signal()), this, SLOT(exit_slot()));
    connect(wmain, SIGNAL(options_signal()), this, SLOT(options_slot()));
    connect(wmain, SIGNAL(about_signal()), this, SLOT(about_slot()));
    connect(wmain, SIGNAL(check_signal()), this, SLOT(check_slot()));
    connect(wmain, SIGNAL(clear_signal()), this, SLOT(clear_slot()));
}

Control :: ~Control()
{
    delete wmain;
    delete opts;
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
    about_info();
}

void Control :: check_slot()
{
  //
}

void Control :: clear_slot()
{
    wmain->set_text("");
}
