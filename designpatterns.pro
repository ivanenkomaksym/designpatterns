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
    src/abstractfactory/absfact_ufoenemyshipbuilding.cpp \
    src/singleton/singleton.cpp \
    src/builder/oldrobotbuilder.cpp \
    src/builder/robotengineer.cpp \
    src/prototype/sheep.cpp \
    src/prototype/clonefactory.cpp \
    src/decorator/plainpizza.cpp \
    src/decorator/toppingdecorator.cpp \
    src/decorator/mozzarella.cpp \
    src/decorator/tomatosauce.cpp \
    src/adapter/enemytank.cpp \
    src/adapter/enemyrobot.cpp \
    src/adapter/enemyrobotadapter.cpp \
    src/bridge/entertainmentdevice.cpp \
    src/bridge/tvdevice.cpp \
    src/bridge/remotebutton.cpp \
    src/bridge/tvremotemute.cpp \
    src/bridge/tvremotepause.cpp \
    src/bridge/dvddevice.cpp \
    src/bridge/dvdremote.cpp \
    src/templatemethod/hoagie.cpp \
    src/templatemethod/italianhoagie.cpp \
    src/templatemethod/veggiehoagie.cpp \
    src/iterator/songinfo.cpp \
    src/iterator/songsofthe70s.cpp \
    src/iterator/songsofthe80s.cpp \
    src/iterator/songsofthe90s.cpp \
    src/iterator/diskjokey.cpp \
    src/facade/welcometobank.cpp

DISTFILES += \
    .gitignore \
    strategy/strategy_uml.jpg \
    observer/observer_uml.jpg \
    factory/factory_uml.jpg \
    abstractfactory/abstractfactory_uml.jpg \
    builder/builder_uml.jpg \
    prototype/prototype_uml.jpg \
    decorator/decorator_uml.jpg \
    adapter/adapter_uml.jpg \
    bridge/bridge_uml.jpg \
    templatemethod/New Text Document.txt \
    templatemethod/templatemethod_uml.jpg \
    .gitignore

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
    abstractfactory/absfact_ufoenemyshipfactory.h \
    singleton/singleton.h \
    singleton/singletonpattern.h \
    builder/builder.h \
    builder/robotplan.h \
    builder/robot.h \
    builder/robotbuilder.h \
    builder/oldrobotbuilder.h \
    builder/robotengineer.h \
    prototype/prototype.h \
    prototype/sheep.h \
    prototype/clonefactory.h \
    prototype/ianimal.h \
    src/decorator/decorator.h \
    decorator/decorator.h \
    decorator/pizza.h \
    decorator/plainpizza.h \
    decorator/toppingdecorator.h \
    decorator/mozzarella.h \
    decorator/tomatosauce.h \
    adapter/adapter.h \
    adapter/enemyattacker.h \
    adapter/enemytank.h \
    adapter/enemyrobot.h \
    adapter/enemyrobotadapter.h \
    bridge/bridge.h \
    bridge/entertainmentdevice.h \
    bridge/tvdevice.h \
    bridge/remotebutton.h \
    bridge/tvremotemute.h \
    bridge/tvremotepause.h \
    bridge/dvddevice.h \
    bridge/dvdremote.h \
    templatemethod/templatemethod.h \
    templatemethod/italianhoagie.h \
    templatemethod/hoagie.h \
    templatemethod/veggiehoagie.h \
    iterator/iterator.h \
    iterator/songinfo.h \
    iterator/songsofthe70s.h \
    iterator/songsofthe80s.h \
    iterator/songsofthe90s.h \
    iterator/diskjokey.h \
    iterator/songiterator.h \
    facade/facade.h \
    facade/welcometobank.h \
    facade/accountnumbercheck.h \
    facade/securitycodecheck.h \
    facade/fundscheck.h \
    facade/bankaccountfacade.h \
    flyweight/flyweight.h \
    flyweight/myrect.h \
    flyweight/flyweighttest.h \
    flyweight/myrect2.h \
    flyweight/rectfactory.h

SUBDIRS += \
    designpatterns.pro
