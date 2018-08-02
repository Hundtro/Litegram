TARGET = Litegram
TEMPLATE = app

QT += core gui widgets

SOURCES += \
    main.cpp \
    interface/mainwindow.cpp \
    data/wmain_data.cpp

HEADERS += \
    interface/mainwindow.h \
    control.h \
    data/wmain_data.h \
    data/dictionary.h \
    import_control.h
