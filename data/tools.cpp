#include <data/tools.h>

MainWindow* ui::mainwindow;

void ui::create_mainwindow(){

    ui::mainwindow = new MainWindow();//delete_mainwindow()
    ui::mainwindow->show();
}

void ui::delete_mainwindow(){

    delete ui::mainwindow;
}
