SOURCES += \
    main.cpp \
    LeapUtilGL.cpp \
    LeapUtil.cpp \
    LeapScene.cpp \
    balle.cpp \
    barre.cpp \
    fenetre_jeu.cpp \
    LeapStart.cpp

HEADERS += \
    LeapUtilGL.h \
    LeapUtil.h \
    LeapScene.h \
    LeapMath.h \
    Leap.h \
    Maxi_includes.h \
    balle.h \
    fenetre_jeu.h \
    fenetre_start.h \
    barre.h

LIBS += Leapd.lib


QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Leap
TEMPLATE = app

FORMS +=
