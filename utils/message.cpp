#include <message.h>

void showMessage(QString message)
{
    QMessageBox mBox;
    mBox.setText(message);
    mBox.exec();
}
