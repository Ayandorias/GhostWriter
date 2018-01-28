#-------------------------------------------------
#
# Project created by QtCreator 2017-12-19T22:42:26
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ghostwriter
TEMPLATE = app

INCLUDEPATH += \
    include \
    ../ghost-sdk/include

LIBS += \
    -L$$OUT_PWD/../ghost-sdk \
    -lghost-sdk


# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    src/ghostwriter.cpp \
    src/binder.cpp \
    src/basetexteditor.cpp \
    src/projectmodel.cpp \
    src/projectitem.cpp

HEADERS += \
    include/binder.h \
    include/basetexteditor.h \
    include/ghostwriter.h \
    include/projectmodel.h \
    include/projectitem.h

FORMS += \
    form/ghostwriter.ui \
    form/binder.ui \
    form/basetexteditor.ui

RESOURCES += \
    rsc/resource.qrc
