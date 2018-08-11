TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    interface/mainwindow.cpp \
    control/control.cpp \
    data/data.cpp \
    data/dictionary.cpp \
    data/language.cpp \
    data/messages.cpp

HEADERS += \
    interface/mainwindow.h \
    control/control.h \
    control/import_control.h \
    data/data.h \
    data/dictionary.h \
    data/language.h \ 
    data/messages.h
