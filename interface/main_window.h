#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTextEdit>
#include <QPushButton>
#include "language/languages.h"

class MainWindow : public QWidget
{
private:
    Q_OBJECT

    QVBoxLayout *mainLayout;
    QGridLayout *textLayout;
    QHBoxLayout *buttonsLayout;
    QMenuBar *menuBar;
    QMenu *programMenu;
    QMenu *settingsMenu;
    QMenu *languageMenu;
    QMenu *helpMenu;
    QAction *optionsAction;
    QAction *importAction;
    QAction *exitAction;
    QAction *aboutAction;
    QTextEdit *textEdit;
    QPushButton *checkButton;
    QPushButton *clearButton;

public:
    explicit MainWindow();
    void set_interface(short int language);
    void set_text(const char *text);
    const char* get_text();

signals:
    void import_signal();
    void exit_signal();
    void options_signal();
    void about_signal();
    void check_signal();
    void clear_signal();
};

#endif // MAINWINDOW_H
