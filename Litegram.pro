TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    interface/mainwindow.cpp \
    control/control.cpp \
    data/data.cpp \
    data/wmain_data.cpp \
    data/dictionary.cpp

HEADERS += \
    interface/mainwindow.h \
    control/control.h \
    control/import_control.h
    data/data.h \
    data/wmain_data.h \
    data/dictionary.h
