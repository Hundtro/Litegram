#include <control/control.h>

Control :: Control()
{
    /***Create Elements***/
    dictionary = new Dictionary();
    options = new Options();
    wmain = new MainWindow();

    /***Set Elements***/
    //dictionary:
    if(!dictionary->load())
    {
        //error
        std::exit(1);
    }
    //options:
    options->lang = EN;
    options->check1 = false;
    options->check2 = false;
    options->check3 = false;
    //wmain:
    wmain->set_interface(language[options->lang]);

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
    //Grammar gram;
    //add check + options check!
    //add html=true and set_html!
}

void Control :: clear_slot()
{
    wmain->set_text("");
}
