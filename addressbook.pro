QT += core gui sql widgets

CONFIG += c++17

TARGET = addressbook
TEMPLATE = app

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \
    src/contact.cpp \
    src/database.cpp

HEADERS += \
    src/mainwindow.h \
    src/contact.h \
    src/database.h

FORMS += \
    ui/mainwindow.ui