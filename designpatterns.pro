TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    src/strategy/animal.cpp \
    src/strategy/bird.cpp \
    src/strategy/dog.cpp \
    src/observer/stockgrabber.cpp \
    src/observer/stockobserver.cpp \
    src/factory/enemyship.cpp \
    src/factory/enemyshipfactory.cpp

DISTFILES += \
    .gitignore \
    strategy/strategy_uml.jpg \
    observer/observer_uml.jpg \
    factory/factory_uml.jpg

HEADERS += \
    strategy/animal.h \
    strategy/bird.h \
    strategy/dog.h \
    strategy/flys.h \
    strategy/strategy.h \
    observer/subject.h \
    observer/observer.h \
    observer/stockgrabber.h \
    observer/stockobserver.h \
    observer/observerpattern.h \
    factory/factory.h \
    factory/enemyship.h \
    factory/ufoenemyship.h \
    factory/rocketenemyship.h \
    factory/bigufoenemyship.h \
    factory/enemyshipfactory.h
