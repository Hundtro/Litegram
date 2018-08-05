#include <interface/mainwindow.h>

MainWindow :: MainWindow()
{
    create_elements();
    set_elements();
    /*set_interface(wmain_en);*/

    //import
    connect(exitAction, SIGNAL(triggered(bool)), this, SIGNAL(exit_signal()));
    //options
    //about
    //check
    connect(clearButton, SIGNAL(clicked(bool)), this, SIGNAL(clear_signal()));
}

void MainWindow :: create_elements()
{
    //#Layouts
    mainLayout = new QVBoxLayout();
    textLayout = new QGridLayout();
    buttonsLayout = new QHBoxLayout();

    //#MenuBars
    menuBar = new QMenuBar();

    //#Menus
    programMenu = new QMenu();
    settingsMenu = new QMenu();
    languageMenu = new QMenu();
    helpMenu = new QMenu();

    //#Actions
    importAction = new QAction();
    exitAction = new QAction();
    optionsAction = new QAction();
    aboutAction = new QAction();

    //#TextEdits
    textEdit = new QTextEdit();

    //#Buttons
    checkButton = new QPushButton();
    clearButton = new QPushButton();
}

void MainWindow :: set_elements()
{
    //#programMenu
    programMenu->addAction(importAction);
    programMenu->addAction(exitAction);

    //#settingsMenu
    settingsMenu->addAction(optionsAction);

    //#helpMenu
    helpMenu->addAction(aboutAction);

    //#menuBar
    menuBar->addMenu(programMenu);
    menuBar->addMenu(settingsMenu);
    menuBar->addMenu(helpMenu);

    //#textLayout
    textLayout->addWidget(textEdit);

    //#buttonsLayout
    buttonsLayout->addWidget(checkButton);
    buttonsLayout->addWidget(clearButton);

    //#mainLayout
    mainLayout->setMenuBar(menuBar);
    mainLayout->addLayout(textLayout);
    mainLayout->addLayout(buttonsLayout);

    //#MainWindow
    setLayout(mainLayout);
}

void MainWindow :: set_interface(const char* lang[])
{

    programMenu->setTitle(QString(lang[WMAIN_PROGRAM]));

    settingsMenu->setTitle(QString(lang[WMAIN_SETTINGS]));
    helpMenu->setTitle(QString(lang[WMAIN_HELP]));
    importAction->setText(QString(lang[WMAIN_IMPORT_TEXT]));
    exitAction->setText(QString(lang[WMAIN_EXIT]));
    optionsAction->setText(QString(lang[WMAIN_OPTIONS]));
    aboutAction->setText(QString(lang[WMAIN_ABOUT]));
    checkButton->setText(QString(lang[WMAIN_CHECK]));
    clearButton->setText(QString(lang[WMAIN_CLEAR]));

}

void MainWindow :: set_text(const char *text)
{
    textEdit->setText(QString(text));
}

const char* MainWindow :: get_text()
{
    QString text = textEdit->toPlainText();
    return text.toStdString().c_str();
}
