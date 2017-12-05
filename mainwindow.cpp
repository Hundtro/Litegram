#include <mainwindow.h>
#include <txtfile.h>

MainWindow :: MainWindow()
{
    interfaceLanguage = english;
    CreateMenuBar();
    CreateTextLayout();
    CreateButtonsLayout();
    SetMenuBar();
    SetTextLayout();
    SetButtonsLayout();
    CreateSetMainLayout();
    SetLanguage();
}

void MainWindow::CreateMenuBar(){

    menuBar= new QMenuBar();
    programMenu = new QMenu();
    settingsMenu = new QMenu();
    helpMenu = new QMenu();

    importAction = new QAction();
    exitAction = new QAction();
    languageAction = new QAction();
    aboutAction = new QAction();
}

void MainWindow::CreateTextLayout(){

    textLayout = new QGridLayout();
    textEdit = new QTextEdit();
}

void MainWindow::CreateButtonsLayout(){

    buttonsLayout = new QHBoxLayout();
    checkButton = new QPushButton();
    clearButton = new QPushButton();
}

void MainWindow::SetMenuBar(){

    programMenu->addAction(importAction);
    programMenu->addAction(exitAction);
    settingsMenu->addAction(languageAction);
    helpMenu->addAction(aboutAction);

    menuBar->addMenu(programMenu);
    menuBar->addMenu(settingsMenu);
    menuBar->addMenu(helpMenu);

    connect(importAction, SIGNAL(triggered()), this, SLOT(Import()));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(Close()));
    //...
}

void MainWindow::SetTextLayout(){

    textLayout->addWidget(textEdit);
}

void MainWindow::SetButtonsLayout(){

    buttonsLayout->addWidget(checkButton);
    buttonsLayout->addWidget(clearButton);

    connect(clearButton, SIGNAL(clicked()), this, SLOT(Clear()));
}

void MainWindow::CreateSetMainLayout(){

    mainLayout = new QVBoxLayout();
    mainLayout->setMenuBar(menuBar);
    mainLayout->addLayout(textLayout);
    mainLayout->addLayout(buttonsLayout);

    this->setLayout(mainLayout);
}

void MainWindow::SetLanguage(){

    switch(interfaceLanguage)
    {
        case english:
            SetInterfaceText(en);
            break;

        case polish:
            SetInterfaceText(pl);
            break;
    }
}

void MainWindow::SetInterfaceText(lang l){

    programMenu->setTitle(l.menu_program);
    settingsMenu->setTitle(l.menu_settings);
    helpMenu->setTitle(l.menu_help);

    importAction->setText(l.menu_import_txt);
    exitAction->setText(l.menu_exit);
    languageAction->setText(l.menu_language);
    aboutAction->setText(l.menu_about);

    checkButton->setText(l.buttom_check);
    clearButton->setText(l.buttom_clear);
}

void MainWindow::Import()
{
    //
    QString path;

    switch(this->interfaceLanguage)
    {
        case english:
            path = QFileDialog::getOpenFileName(this, en.title_import_txt, "", en.filter_import_txt);
            break;
        case polish:
            path = QFileDialog::getOpenFileName(this, pl.title_import_txt, "", pl.filter_import_txt);
            break;
    }

    QString text = ImportText(path);
    textEdit->setText(text);
}

void MainWindow::Clear()
{
    textEdit->clear();
}
