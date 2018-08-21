TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    interface/mainwindow.cpp \
    control/control.cpp \
    control/import.cpp \
    data/dictionary.cpp \
    data/messages.cpp \
    data/file_operations.cpp \
    language/languages.cpp \
    language/lang_english.cpp \
    language/lang_polish.cpp

HEADERS += \
    interface/mainwindow.h \
    control/control.h \
    control/import.h \
    data/data.h \
    data/dictionary.h \
    data/messages.h \
    data/file_operations.h \
    language/languages.h \
    language/lang_english.h \
    language/lang_polish.h
