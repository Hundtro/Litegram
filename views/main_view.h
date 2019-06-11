#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <QMainWindow>

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = nullptr);
    ~MainView();
    void setText(QString text);
    QString getText();

private:
    Ui::MainView *ui;

signals:
    void signal_exit();
    void signal_import();
    void signal_options();
    void signal_about();
    void signal_check();
    void signal_clear();
};

#endif // MAIN_VIEW_H
