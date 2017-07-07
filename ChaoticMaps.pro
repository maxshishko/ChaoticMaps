#-------------------------------------------------
#
# Project created by QtCreator 2017-07-01T21:37:18
#
#-------------------------------------------------

TARGET = ChaoticMaps
TEMPLATE = lib

DEFINES += CHAOTICMAPS_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

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
        chaoticmaps_global.h \ 
    baker3dmap.h \
    chaoticmap1d.h \
    chaoticmap3d.h \
    chaoticmaps_global.h \
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
