TEMPLATE = app
TARGET = pipet
QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    CreateWidget.cpp \
    main.cpp \
    window.cpp

HEADERS += \
    CreateWidget.h \
    window.h
