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
    src/factory/enemyshipfactory.cpp \
    src/abstractfactory/absfact_enemyshipbuilding.cpp \
    src/abstractfactory/absfact_ufoenemyshipbuilding.cpp

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
    factory/enemyshipfactory.h \
    factory/shiptype.h \
    abstractfactory/absfact_baseenemyship.h \
    abstractfactory/absfact_abstractfactory.h \
    abstractfactory/absfact_enemyshipbuilding.h \
    abstractfactory/absfact_enemyshipfactory.h \
    abstractfactory/absfact_esengine.h \
    abstractfactory/absfact_esufobossengine.h \
    abstractfactory/absfact_esufobossgun.h \
    abstractfactory/absfact_esufoengine.h \
    abstractfactory/absfact_esufogun.h \
    abstractfactory/absfact_esweapon.h \
    abstractfactory/absfact_ufobossenemyship.h \
    abstractfactory/absfact_ufobossenemyshipfactory.h \
    abstractfactory/absfact_ufoenemyship.h \
    abstractfactory/absfact_ufoenemyshipbuilding.h \
    abstractfactory/absfact_ufoenemyshipfactory.h
