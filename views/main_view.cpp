#include <views/main_view.h>
#include "ui_main_view.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
    connect(ui->actionImport, SIGNAL(triggered(bool)), this, SIGNAL(signal_import()));
    connect(ui->actionExit, SIGNAL(triggered(bool)), this, SIGNAL(signal_exit()));
    connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SIGNAL(signal_about()));
    connect(ui->checkButton, SIGNAL(clicked(bool)), this, SIGNAL(signal_check()));
    connect(ui->clearButton, SIGNAL(clicked(bool)), this, SIGNAL(signal_clear()));
    connect(ui->applyButton, SIGNAL(clicked(bool)), this, SIGNAL(signal_apply()));
}

MainView::~MainView()
{
    delete ui;
}

void MainView::setText(QString text)
{
    ui->textEdit->setText(text);
}

QString MainView::getText()
{
    return ui->textEdit->toPlainText();
}

void MainView::applySettings(Settings &settings)
{
    if (ui->radioButtonEnglish->isChecked()) settings.language = EN;
    if (ui->radioButtonPolish->isChecked()) settings.language = PL;

    if (ui->checkBoxWords->isChecked())
        settings.checkWords = true;
    else
        settings.checkWords = false;
}
