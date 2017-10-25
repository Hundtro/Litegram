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
    QMenu* helpMenu;

    QAction* importAction;
    QAction* exitAction;

    QAction* languageAction;

    QAction* aboutAction;
    //++
    QTextEdit* textEdit;
    QPushButton* checkButton;
    QPushButton* clearButton;

    void CreateMenuBar();
    void CreateTextLayout();
    void CreateButtonsLayout();

public:
    explicit MainWindow();
};

#endif // MAINWINDOW_H
