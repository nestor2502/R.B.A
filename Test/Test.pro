TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
INCLUDEPATH += ../Filters
INCLUDEPATH += /usr/local/include/opencv
LIBS +=  -lopencv_core -lopencv_imgcodecs -lopencv_highgui -lopencv_imgproc
LIBS += -lcppunit
SOURCES += \
        main.cpp \
    ../Filters/RedFilter.cpp \
    ../Filters/GreenFilter.cpp \
    ../Filters/Filter.cpp \
    ../Filters/TileFilter.cpp \
    ../Filters/BlueFilter.cpp \
    ../Filters/PlusFilter.cpp \
    TestRedFilter.cpp \
    TestFileManager.cpp \
    TestGreenFilter.cpp \
    TestTileFilter.cpp \
    TestBlueFilter.cpp
HEADERS += \
    ../Filters/Filter.h \
    ../Filters/RedFilter.h \
    ../Filters/GreenFilter.h \
    ../Filters/BlueFilter.h \
    ../Filters/TileFilter.h \
    ../Filters/PlusFilter.h \
    TestRedFilter.h \
    include.h \
    TestFileManager.h \
    TestGreenFilter.h \
    TestTileFilter.h \
    TestBlueFilter.h
