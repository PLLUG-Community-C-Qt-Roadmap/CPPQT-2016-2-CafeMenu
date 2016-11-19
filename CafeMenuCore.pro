TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    abstractmenuitem.cpp \
    menuitem.cpp \
    menu.cpp

HEADERS += \
    abstractmenuitem.h \
    menuitem.h \
    menu.h
