TEMPLATE = app
TARGET = pipet
QT = core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    createWindow.cpp \
    main.cpp \
    mainWindow.cpp \
    modeSelectWindow.cpp \
    nameBankWindow.cpp \
    paletteWindow.cpp \
    speciesWindow.cpp

HEADERS += \
    createWindow.h \
    mainWindow.h \
    mainWindow.h \
    modeSelectWindow.h \
    nameBankWindow.h \
    paletteWindow.h \
    speciesWindow.h


HEADERS += \
    mainWindow.h
