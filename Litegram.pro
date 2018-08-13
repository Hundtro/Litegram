TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    interface/mainwindow.cpp \
    control/control.cpp \
    control/import.cpp \
    data/dictionary.cpp \
    data/language.cpp \
    data/messages.cpp

HEADERS += \
    interface/mainwindow.h \
    control/control.h \
    control/import.h \
    data/data.h \
    data/dictionary.h \
    data/language.h \ 
    data/messages.h
