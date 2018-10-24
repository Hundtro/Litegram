#include "data/message.h"

void show_message(const char *message)
{
    QMessageBox mbox;
	
    mbox.setText(QString(message));
    mbox.exec();
}
