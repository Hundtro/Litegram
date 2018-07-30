#include <interface/mainwindow.h>

MainWindow :: MainWindow()
{
    create_elements();
    set_elements();
    set_interface(wmain_en);

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

void MainWindow :: set_interface(WMainText wmt)
{
    programMenu->setTitle(QString(wmt.program));
    settingsMenu->setTitle(QString(wmt.settings));
    helpMenu->setTitle(QString(wmt.help));
    importAction->setText(QString(wmt.import_txt));
    exitAction->setText(QString(wmt.exit));
    optionsAction->setText(QString(wmt.options));
    aboutAction->setText(QString(wmt.about));
    checkButton->setText(QString(wmt.check));
    clearButton->setText(QString(wmt.clear));
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
