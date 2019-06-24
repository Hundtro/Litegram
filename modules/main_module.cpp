#include <modules/main_module.h>

MainModule :: MainModule()
{
    dictionary = new Dictionary();
    mainView = new MainView();

    connect(mainView, SIGNAL(signal_import()), this, SLOT(slot_import()));
    connect(mainView, SIGNAL(signal_exit()), this, SLOT(slot_exit()));
    connect(mainView, SIGNAL(signal_options()), this, SLOT(slot_options()));
    connect(mainView, SIGNAL(signal_about()), this, SLOT(slot_about()));
    connect(mainView, SIGNAL(signal_check()), this, SLOT(slot_check()));
    connect(mainView, SIGNAL(signal_clear()), this, SLOT(slot_clear()));
}

MainModule :: ~MainModule()
{
    delete dictionary;
    delete mainView;
}

void MainModule :: run()
{
    QString posData = readAllText("pos.db");
    if (posData.isEmpty())
        showMessage(tr("Can not read dictionary file!"));
    else
        dictionary->parsePOSdata(posData.toStdString());

    mainView->show();
}

void MainModule :: slot_import()
{

}

void MainModule :: slot_exit()
{
    std::exit(0);
}

void MainModule :: slot_options()
{

}

void MainModule :: slot_about()
{

}

void MainModule :: slot_check()
{

}

void MainModule :: slot_clear()
{

}
