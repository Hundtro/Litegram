#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QTextEdit>
#include <QPushButton>
#include <QFileDialog>

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
    QMenu* helpMenu;

    QAction* importAction;
    QAction* exitAction;
    QAction* languageAction;
    QAction* aboutAction;

    QTextEdit* textEdit;
    QPushButton* checkButton;
    QPushButton* clearButton;

    void CreateMenuBar();
    void CreateTextLayout();
    void CreateButtonsLayout();

public:
    explicit MainWindow();

private slots:
    void Close();
    void Import();
    void Clear();
};

#endif // MAINWINDOW_H
