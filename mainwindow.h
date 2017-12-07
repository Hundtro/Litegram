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
#include <language.h>

class MainWindow : public QWidget
{
private:
    Q_OBJECT

    Language interfaceLanguage;

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

    QFileDialog* importDialog;

    void CreateMenuBar();
    void CreateTextLayout();
    void CreateButtonsLayout();
    void SetMenuBar();
    void SetTextLayout();
    void SetButtonsLayout();
    void CreateSetMainLayout();
    void SetLanguage();
    void SetInterfaceText(lang l);
    QString OpenFile(lang l);

public:
    explicit MainWindow();

private slots:
    void Import();
    void Clear();
    void Close();
};

#endif // MAINWINDOW_H
