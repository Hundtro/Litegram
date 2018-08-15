#include <interface/mainwindow.h>

MainWindow :: MainWindow()
{
    /***Create Elements***/
    //Layouts:
    mainLayout = new QVBoxLayout();
    textLayout = new QGridLayout();
    buttonsLayout = new QHBoxLayout();
    //MenuBars:
    menuBar = new QMenuBar();
    //Menus:
    programMenu = new QMenu();
    settingsMenu = new QMenu();
    languageMenu = new QMenu();
    helpMenu = new QMenu();
    //Actions:
    importAction = new QAction();
    exitAction = new QAction();
    optionsAction = new QAction();
    aboutAction = new QAction();
    //TextEdits:
    textEdit = new QTextEdit();
    //Buttons:
    checkButton = new QPushButton();
    clearButton = new QPushButton();

    /***Set Elements***/
    //programMenu:
    programMenu->addAction(importAction);
    programMenu->addAction(exitAction);
    //settingsMenu:
    settingsMenu->addAction(optionsAction);
    //helpMenu:
    helpMenu->addAction(aboutAction);
    //menuBar:
    menuBar->addMenu(programMenu);
    menuBar->addMenu(settingsMenu);
    menuBar->addMenu(helpMenu);
    //textLayout:
    textLayout->addWidget(textEdit);
    //buttonsLayout:
    buttonsLayout->addWidget(checkButton);
    buttonsLayout->addWidget(clearButton);
    //mainLayout:
    mainLayout->setMenuBar(menuBar);
    mainLayout->addLayout(textLayout);
    mainLayout->addLayout(buttonsLayout);
    //this:
    setLayout(mainLayout);

    /***Connect Elements***/
    connect(importAction, SIGNAL(triggered(bool)), this, SIGNAL(import_signal()));
    connect(exitAction, SIGNAL(triggered(bool)), this, SIGNAL(exit_signal()));
    connect(optionsAction, SIGNAL(triggered(bool)), this, SIGNAL(options_signal()));
    connect(aboutAction, SIGNAL(triggered(bool)), this, SIGNAL(about_signal()));
    connect(clearButton, SIGNAL(clicked(bool)), this, SIGNAL(check_signal()));
    connect(clearButton, SIGNAL(clicked(bool)), this, SIGNAL(clear_signal()));
}

void MainWindow :: set_interface(const char* lang[])
{
    programMenu->setTitle(QString(lang[0]));
    settingsMenu->setTitle(QString(lang[1]));
    helpMenu->setTitle(QString(lang[2]));
    importAction->setText(QString(lang[3]));
    exitAction->setText(QString(lang[4]));
    optionsAction->setText(QString(lang[5]));
    aboutAction->setText(QString(lang[6]));
    checkButton->setText(QString(lang[7]));
    clearButton->setText(QString(lang[8]));
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
