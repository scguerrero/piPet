TEMPLATE = app
TARGET = pipet
QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    CreateWidget.cpp \
    ModeWidget.cpp \
    main.cpp \
    window.cpp

HEADERS += \
    CareWidget.h \
    CreateWidget.h \
    ModeWidget.h \
    window.h
