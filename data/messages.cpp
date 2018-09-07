#include "data/messages.h"

//add language support

void errors::load_dictionary()
{
    QMessageBox message;
    message.setText(QString(error[EN][0]));
    message.exec();
    std::exit(1);
}

void errors::import_txt()
{
    QMessageBox message;
    message.setText(QString(error[EN][1]));
    message.exec();
}

void info::about()
{
    //show box
}
