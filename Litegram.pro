TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    gui/mainwindow.cpp \
    data/tools.cpp \
    data/language.cpp \
    data/import_txt.cpp

HEADERS += \
    gui/mainwindow.h \
    data/tools.h \
    data/language.h \
    data/import_txt.h
