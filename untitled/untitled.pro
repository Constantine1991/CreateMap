#-------------------------------------------------
#
# Project created by QtCreator 2015-01-27T20:44:43
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app


SOURCES += main.cpp\
    gamescene.cpp \
    mainwindow.cpp \
    ../../Engine/geometry.cpp \
    ../../Engine/keyboard.cpp \
    ../../Engine/mesh.cpp \
    ../../Engine/mouse.cpp \
    ../../Engine/shader.cpp \
    ../../Engine/texture.cpp

HEADERS  += \
    gamescene.h \
    mainwindow.h \
    ../../Engine/geometry.h \
    ../../Engine/keyboard.h \
    ../../Engine/mesh.h \
    ../../Engine/mouse.h \
    ../../Engine/shader.h \
    ../../Engine/texture.h

FORMS    += \
    mainwindow.ui

RESOURCES += \
    res.qrc
