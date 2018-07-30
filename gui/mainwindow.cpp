#include <gui\mainwindow.h>

MainWindow :: MainWindow(){

    create_elements();
    set_elements();
}

void MainWindow :: create_elements(){

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

    //#ActionGroups
    languageGroup = new QActionGroup(this);

    //#Actions
    polishMenuAction = new QAction();
    englishMenuAction = new QAction();
    importAction = new QAction();
    exitAction = new QAction();
    aboutAction = new QAction();

    //#TextEdits
    textEdit = new QTextEdit();

    //#Buttons
    checkButton = new QPushButton();
    clearButton = new QPushButton();
}

void MainWindow :: set_elements(){

    //#programMenu
    programMenu->addAction(importAction);
    programMenu->addAction(exitAction);

    //#settingsMenu
    settingsMenu->addMenu(languageMenu);

    //#languageMenu
    languageMenu->addAction(englishMenuAction);
    languageMenu->addAction(polishMenuAction);

    //#englishMenuAction
    englishMenuAction->setCheckable(true);

    //#polishMenuAction
    polishMenuAction->setCheckable(true);
    polishMenuAction->setChecked(true);

    //#languageGroup
    languageGroup->addAction(englishMenuAction);
    languageGroup->addAction(polishMenuAction);

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

void MainWindow :: set_menu_title(char* menu_name, char* title){

    if(strcmp(menu_name, "programMenu") == 0)
        programMenu->setTitle(QString(title));

    if(strcmp(menu_name, "settingsMenu") == 0)
        settingsMenu->setTitle(QString(title));

    if(strcmp(menu_name, "helpMenu") == 0)
        helpMenu->setTitle(QString(title));

    if(strcmp(menu_name, "languageMenu") == 0)
        languageMenu->setTitle(QString(title));
}

void MainWindow :: set_action_text(char* action_name, char* text){

    if(strcmp(action_name, "importAction") == 0)
        importAction->setText(QString(text));

    if(strcmp(action_name, "exitAction") == 0)
        exitAction->setText(QString(text));

    if(strcmp(action_name, "aboutAction") == 0)
        aboutAction->setText(QString(text));
}

void MainWindow :: set_button_text(char* button_name, char* text){

    if(strcmp(button_name, "checkButton") == 0)
        checkButton->setText(QString(text));

    if(strcmp(button_name, "clearButton") == 0)
        clearButton->setText(QString(text));
}

void MainWindow :: set_edited_text(char* text){

    textEdit->setText(QString(text));
}

const char* MainWindow :: get_edited_text(){

    QString text = textEdit->toPlainText();
    return text.toStdString().c_str();
}
