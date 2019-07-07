#include <modules/main_module.h>

MainModule::MainModule()
{
    dictionary = new Dictionary();
    mainView = new MainView();
    settings = new Settings();

    connect(mainView, SIGNAL(signal_import()), this, SLOT(slot_import()));
    connect(mainView, SIGNAL(signal_exit()), this, SLOT(slot_exit()));
    //connect(mainView, SIGNAL(signal_options()), this, SLOT(slot_options()));
    connect(mainView, SIGNAL(signal_about()), this, SLOT(slot_about()));
    connect(mainView, SIGNAL(signal_check()), this, SLOT(slot_check()));
    connect(mainView, SIGNAL(signal_clear()), this, SLOT(slot_clear()));
    connect(mainView, SIGNAL(signal_apply()), this, SLOT(slot_apply()));
}

MainModule::~MainModule()
{
    delete dictionary;
    delete mainView;
    delete settings;
}

void MainModule::run()
{
    QString posData = readAllText("pos.db");
    if (posData.isEmpty()) {
        showMessage(tr("Can not read dictionary file!"));
        exit(1);
    } else {
        dictionary->parsePOSdata(posData.toStdString());
    }

    settings->language = EN;
    settings->checkWords = true;

    mainView->show();
}

void MainModule::slot_import()
{
    QString filePath = chooseFilePath();
    if (!filePath.isEmpty()) {
        QString fileText = readAllText(filePath);
        if (fileText.isEmpty())
            showMessage(tr("Can not import text file!"));
        else
            mainView->setText(fileText);
    }
}

void MainModule::slot_exit()
{
    std::exit(0);
}

void MainModule::slot_about()
{
    showMessage(tr("Lietegram - in progress"));
}

void MainModule::slot_check()
{

}

void MainModule::slot_clear()
{
    mainView->setText(QString());
}

void MainModule::slot_apply()
{
    mainView->applySettings(*settings);
    //retranslate()
}
