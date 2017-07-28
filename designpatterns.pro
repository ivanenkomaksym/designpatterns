TEMPLATE = app
CONFIG += console c++14
CONFIG += debug
CONFIG -= app_bundle
CONFIG -= qt
QMAKE_CXXFLAGS += -std=c++0x


SUBDIRS += \
    designpatterns.pro \
    designpatterns.pro

DISTFILES += \
    abstractfactory/abstractfactory_uml.jpg \
    adapter/adapter_uml.jpg \
    bridge/bridge_uml.jpg \
    builder/builder_uml.jpg \
    chainofresponsibility/chainofresponsibility_uml.jpg \
    composite/composite_uml.jpg \
    decorator/decorator_uml.jpg \
    factory/factory_uml.jpg \
    observer/observer_uml.jpg \
    prototype/prototype_uml.jpg \
    proxy/proxy_uml.jpg \
    state/state_uml.jpg \
    strategy/strategy_uml.jpg \
    templatemethod/templatemethod_uml.jpg \
    .gitignore

HEADERS += \
    abstractfactory/absfact_abstractfactory.h \
    abstractfactory/absfact_baseenemyship.h \
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
    adapter/adapter.h \
    adapter/enemyattacker.h \
    adapter/enemyrobot.h \
    adapter/enemyrobotadapter.h \
    adapter/enemytank.h \
    bridge/bridge.h \
    bridge/dvddevice.h \
    bridge/dvdremote.h \
    bridge/entertainmentdevice.h \
    bridge/remotebutton.h \
    bridge/tvdevice.h \
    bridge/tvremotemute.h \
    bridge/tvremotepause.h \
    builder/builder.h \
    builder/oldrobotbuilder.h \
    builder/robot.h \
    builder/robotbuilder.h \
    builder/robotengineer.h \
    builder/robotplan.h \
    chainofresponsibility/addnumbers.h \
    chainofresponsibility/chain.h \
    chainofresponsibility/chainofresponsibility.h \
    chainofresponsibility/dividenumbers.h \
    chainofresponsibility/multnumbers.h \
    chainofresponsibility/numbers.h \
    chainofresponsibility/subtractnumbers.h \
    composite/composite.h \
    composite/compositediskjokey.h \
    composite/song.h \
    composite/songcomponent.h \
    composite/songgroup.h \
    decorator/decorator.h \
    decorator/mozzarella.h \
    decorator/pizza.h \
    decorator/plainpizza.h \
    decorator/tomatosauce.h \
    decorator/toppingdecorator.h \
    facade/accountnumbercheck.h \
    facade/bankaccountfacade.h \
    facade/facade.h \
    facade/fundscheck.h \
    facade/securitycodecheck.h \
    facade/welcometobank.h \
    factory/bigufoenemyship.h \
    factory/enemyship.h \
    factory/enemyshipfactory.h \
    factory/factory.h \
    factory/rocketenemyship.h \
    factory/shiptype.h \
    factory/ufoenemyship.h \
    flyweight/flyweight.h \
    flyweight/flyweighttest.h \
    flyweight/myrect.h \
    flyweight/myrect2.h \
    flyweight/rectfactory.h \
    iterator/diskjokey.h \
    iterator/iterator.h \
    iterator/songinfo.h \
    iterator/songiterator.h \
    iterator/songsofthe70s.h \
    iterator/songsofthe80s.h \
    iterator/songsofthe90s.h \
    observer/observer.h \
    observer/observerpattern.h \
    observer/stockgrabber.h \
    observer/stockobserver.h \
    observer/subject.h \
    prototype/clonefactory.h \
    prototype/ianimal.h \
    prototype/prototype.h \
    prototype/sheep.h \
    proxy/atmproxy.h \
    proxy/getatmdata.h \
    proxy/proxy.h \
    singleton/singleton.h \
    singleton/singletonpattern.h \
    state/atmmachine.h \
    state/atmstate.h \
    state/hascard.h \
    state/haspin.h \
    state/nocard.h \
    state/nocash.h \
    state/state.h \
    strategy/animal.h \
    strategy/bird.h \
    strategy/dog.h \
    strategy/flys.h \
    strategy/strategy.h \
    templatemethod/hoagie.h \
    templatemethod/italianhoagie.h \
    templatemethod/templatemethod.h \
    templatemethod/veggiehoagie.h

SOURCES += \
    src/abstractfactory/absfact_enemyshipbuilding.cpp \
    src/abstractfactory/absfact_ufoenemyshipbuilding.cpp \
    src/adapter/enemyrobot.cpp \
    src/adapter/enemyrobotadapter.cpp \
    src/adapter/enemytank.cpp \
    src/bridge/dvddevice.cpp \
    src/bridge/dvdremote.cpp \
    src/bridge/entertainmentdevice.cpp \
    src/bridge/remotebutton.cpp \
    src/bridge/tvdevice.cpp \
    src/bridge/tvremotemute.cpp \
    src/bridge/tvremotepause.cpp \
    src/builder/oldrobotbuilder.cpp \
    src/builder/robotengineer.cpp \
    src/chainofresponsibility/addnumbers.cpp \
    src/chainofresponsibility/dividenumbers.cpp \
    src/chainofresponsibility/multnumbers.cpp \
    src/chainofresponsibility/subtractnumbers.cpp \
    src/composite/compositediskjokey.cpp \
    src/composite/song.cpp \
    src/composite/songcomponent.cpp \
    src/composite/songgroup.cpp \
    src/decorator/mozzarella.cpp \
    src/decorator/plainpizza.cpp \
    src/decorator/tomatosauce.cpp \
    src/decorator/toppingdecorator.cpp \
    src/facade/welcometobank.cpp \
    src/factory/enemyship.cpp \
    src/factory/enemyshipfactory.cpp \
    src/iterator/diskjokey.cpp \
    src/iterator/songinfo.cpp \
    src/iterator/songsofthe70s.cpp \
    src/iterator/songsofthe80s.cpp \
    src/iterator/songsofthe90s.cpp \
    src/observer/stockgrabber.cpp \
    src/observer/stockobserver.cpp \
    src/prototype/clonefactory.cpp \
    src/prototype/sheep.cpp \
    src/proxy/atmproxy.cpp \
    src/singleton/singleton.cpp \
    src/state/atmmachine.cpp \
    src/state/hascard.cpp \
    src/state/haspin.cpp \
    src/state/nocard.cpp \
    src/state/nocash.cpp \
    src/strategy/animal.cpp \
    src/strategy/bird.cpp \
    src/strategy/dog.cpp \
    src/templatemethod/hoagie.cpp \
    src/templatemethod/italianhoagie.cpp \
    src/templatemethod/veggiehoagie.cpp \
    main.cpp
