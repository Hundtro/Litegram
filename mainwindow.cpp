#include <mainwindow.h>
#include <txtfile.h>

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

    connect(importAction, SIGNAL(triggered()), this, SLOT(Import()));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(Close()));
    //...
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

    connect(clearButton, SIGNAL(clicked()), this, SLOT(Clear()));
}

void MainWindow::Import()
{
    QFileDialog* dialog = new QFileDialog(this);

    dialog->setFileMode(QFileDialog::ExistingFile);
    dialog->setNameFilter(tr("text files(*.txt)"));
    dialog->setViewMode(QFileDialog::List);
    dialog->exec();

    QString path = dialog->selectedFiles().first();
    QString text = QString::fromStdString(ImportText(path.toUtf8().constData()));

    this->textEdit->setText(text);

    delete dialog;
}

void MainWindow::Clear()
{
    this->textEdit->clear();
}

void MainWindow::Close()
{
    exit(0);
}
