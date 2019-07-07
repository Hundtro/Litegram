TARGET = Litegram
TEMPLATE = app

QT += core gui widgets
DEFINES += QT_DEPRECATED_WARNINGS
CONFIG += c++11

SOURCES += \
    main.cpp \
    views/main_view.cpp \
    modules/main_module.cpp \
    utils/message.cpp \
    utils/dictionary.cpp \
    utils/file.cpp

HEADERS += \
    views/main_view.h \
    modules/main_module.h \
    utils/message.h \
    utils/dictionary.h \
    utils/file.h \
    utils/settings.h

FORMS += \
    views/main_view.ui

# Default rules for deployment.
#qnx: target.path = /tmp/$${TARGET}/bin
#else: unix:!android: target.path = /opt/$${TARGET}/bin
#!isEmpty(target.path): INSTALLS += target
