QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    card.cpp \
    deck.cpp \
    game.cpp \
    l.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    roulette.cpp

HEADERS += \
    card.h \
    deck.h \
    game.h \
    global.h \
    l.h \
    mainwindow.h \
    player.h \
    roulette.h

FORMS += \
    game.ui \
    l.ui \
    mainwindow.ui \
    roulette.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    cards.qrc

DISTFILES += \
    imagesWheel/Spin0.png \
    imagesWheel/Spin1.png \
    imagesWheel/Spin10.png \
    imagesWheel/Spin11.png \
    imagesWheel/Spin12.png \
    imagesWheel/Spin13.png \
    imagesWheel/Spin14.png \
    imagesWheel/Spin15.png \
    imagesWheel/Spin16.png \
    imagesWheel/Spin17.png \
    imagesWheel/Spin18.png \
    imagesWheel/Spin19.png \
    imagesWheel/Spin2.png \
    imagesWheel/Spin20.png \
    imagesWheel/Spin21.png \
    imagesWheel/Spin22.png \
    imagesWheel/Spin23.png \
    imagesWheel/Spin24.png \
    imagesWheel/Spin25.png \
    imagesWheel/Spin26.png \
    imagesWheel/Spin27.png \
    imagesWheel/Spin28.png \
    imagesWheel/Spin29.png \
    imagesWheel/Spin3.png \
    imagesWheel/Spin30.png \
    imagesWheel/Spin31.png \
    imagesWheel/Spin32.png \
    imagesWheel/Spin33.png \
    imagesWheel/Spin34.png \
    imagesWheel/Spin35.png \
    imagesWheel/Spin36.png \
    imagesWheel/Spin4.png \
    imagesWheel/Spin5.png \
    imagesWheel/Spin6.png \
    imagesWheel/Spin7.png \
    imagesWheel/Spin8.png \
    imagesWheel/Spin9.png \
    imagesWheel/Wheel.png \
    imagesWheel/roulette-online-casino-game-gambling-casino-wheel.png
