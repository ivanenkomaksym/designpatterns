TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/strategy/animal.cpp \
    src/strategy/bird.cpp \
    src/strategy/dog.cpp

DISTFILES += \
    .gitignore

HEADERS += \
    strategy/animal.h \
    strategy/bird.h \
    strategy/dog.h \
    strategy/flys.h \
    strategy/strategy.h
