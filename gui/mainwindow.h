#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QActionGroup>
#include <QAction>
#include <QTextEdit>
#include <QPushButton>

class MainWindow : public QWidget
{
private:
    Q_OBJECT

    QVBoxLayout* mainLayout;
    QGridLayout* textLayout;
    QHBoxLayout* buttonsLayout;
    QMenuBar* menuBar;
    QMenu* programMenu;
    QMenu* settingsMenu;
    QMenu* languageMenu;
    QMenu* helpMenu;
    QActionGroup* languageGroup;
    QAction* polishMenuAction;
    QAction* englishMenuAction;
    QAction* importAction;
    QAction* exitAction;
    QAction* aboutAction;
    QTextEdit* textEdit;
    QPushButton* checkButton;
    QPushButton* clearButton;

    void create_elements();
    void set_elements();

public:
    explicit MainWindow();

    void set_menu_title(char* menu_name, char* title);
    void set_action_text(char* action_name, char* text);
    void set_button_text(char* button_name, char* text);
    void set_edited_text(char* text);
    const char* get_edited_text();
};

#endif // MAINWINDOW_H
