#include <mainwindow.h>

MainWindow :: MainWindow()
{
    CreateMenuBar();
    CreateTextLayout();
    CreateButtonsLayout();

    mainLayout = new QVBoxLayout();
    mainLayout->setMenuBar(menuBar);
    mainLayout->addLayout(textLayout);
    mainLayout->addLayout(buttonsLayout);

    this->setLayout(mainLayout);
}

void MainWindow::CreateMenuBar()
{
    menuBar= new QMenuBar();

    programMenu = new QMenu(tr("&Program"), this);
    settingsMenu = new QMenu(tr("&Settings"), this);
    helpMenu = new QMenu(tr("&Help"), this);

    importAction = new QAction(tr("&Import txt file..."));

    exitAction = new QAction(tr("&Exit"));

    languageAction = new QAction(tr("&Language"));

    aboutAction = new QAction(tr("&About"));

    programMenu->addAction(importAction);

    programMenu->addAction(exitAction);

    settingsMenu->addAction(languageAction);

    helpMenu->addAction(aboutAction);

    menuBar->addMenu(programMenu);
    menuBar->addMenu(settingsMenu);
    menuBar->addMenu(helpMenu);

    //connects...
}

void MainWindow::CreateTextLayout()
{
    textLayout = new QGridLayout();
    textEdit = new QTextEdit();

    textLayout->addWidget(textEdit);
}

void MainWindow::CreateButtonsLayout()
{
    buttonsLayout = new QHBoxLayout();
    checkButton = new QPushButton();
    clearButton = new QPushButton();

    checkButton->setText("Check text");
    clearButton->setText("Clear text");

    buttonsLayout->addWidget(checkButton);
    buttonsLayout->addWidget(clearButton);
}
