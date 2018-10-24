#ifndef SETTINGS_WINDOW_H
#define SETTINGS_WINDOW_H

#include <QWidget>
#include "language/languages.h"
#include "data/data.h"

class SettingsWindow : public QWidget
{
private:
    Q_OBJECT

public:
    explicit SettingsWindow();
};

#endif // SETTINGS_WINDOW_H
