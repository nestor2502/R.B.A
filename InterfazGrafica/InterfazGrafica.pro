#-------------------------------------------------
#
# Project created by QtCreator 2019-09-08T12:15:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = InterfazGrafica
TEMPLATE = app
INCLUDEPATH += ../Filters
INCLUDEPATH += /usr/local/include/opencv
LIBS +=  -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc

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
        gui.cpp \
    filemanager.cpp \
    mosaicoform.cpp \
    driver.cpp \
    ../Filters/RedFilter.cpp \
    ../Filters/GreenFilter.cpp \
    ../Filters/Filter.cpp \
    ../Filters/TileFilter.cpp \
    ../Filters/BlueFilter.cpp

HEADERS += \
        gui.h \
    mosaicoform.h \
    driver.h \
    ../Filters/RedFilter.h \
    ../Filters/GreenFilter.h \
    ../Filters/Filter.h \
    ../Filters/TileFilter.h \
    ../Filters/BlueFilter.h

FORMS += \
        gui.ui \
    mosaicoform.ui

RESOURCES += \
    logo.qrc
