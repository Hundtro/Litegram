#ifndef MAIN_VIEW_H
#define MAIN_VIEW_H

#include <settings.h>
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
    void applySettings(Settings &settings);

private:
    Ui::MainView *ui;

signals:
    void signal_exit();
    void signal_import();
    void signal_about();
    void signal_check();
    void signal_clear();
    void signal_apply();
};

#endif // MAIN_VIEW_H
