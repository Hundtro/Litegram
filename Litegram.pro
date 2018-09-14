TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    control/control.cpp \
    control/import.cpp \
    data/dictionary.cpp \
    data/file_operations.cpp \
    language/languages.cpp \
    language/lang_english.cpp \
    language/lang_polish.cpp \
    data/message.cpp \
    interface/main_window.cpp \
    interface/settings_window.cpp

HEADERS += \
    control/control.h \
    control/import.h \
    data/data.h \
    data/dictionary.h \
    data/file_operations.h \
    language/languages.h \
    language/lang_english.h \
    language/lang_polish.h \
    data/message.h \
    interface/main_window.h \
    interface/settings_window.h
