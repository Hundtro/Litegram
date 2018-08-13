#include <control/control.h>

Control :: Control()
{
    /***Create Elements***/
    dictionary = new Dictionary();
    languages = new Languages();
    options = new Options();
    wmain = new MainWindow();

    /***Set Elements***/
    if(!dictionary.load())
    {
        //error
        std::exit(1);
    }

    if(!languages.load())
    {
        //error
        std::exit(2);
    }

    options.lang = EN;
    //add set default options

    wmain->set_interface(languages->get(EN));

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
    delete options;
    delete languages;
    delete dictionary;
}

void Control :: begin()
{
    wmain->show();
}

void Control :: import_slot()
{
    Import import;

    import.select_txt();
    import.import_txt();
    wmain->set_text(import.get_text());
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
