#-------------------------------------------------
#
# Project created by QtCreator 2017-07-01T21:37:18
#
#-------------------------------------------------

TARGET = ChaoticMaps
TEMPLATE = lib

CONFIG += c++14

DEFINES += CHAOTICMAPS_LIBRARY

SOURCES += \
    baker3dmap.cpp \
    chaoticmap1d.cpp \
    chaoticmap3d.cpp \
    combined3dmap.cpp \
    logisticmap.cpp \
    lorenzmap.cpp \
    pwlcm.cpp \
    tentmap.cpp

HEADERS += \
    baker3dmap.h \
    chaoticmap1d.h \
    chaoticmap3d.h \
    combined3dmap.h \
    logisticmap.h \
    lorenzmap.h \
    pwlcm.h \
    tentmap.h \
    maps.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

SUBDIRS += \
    ChaoticMaps.pro
