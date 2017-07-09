#ifndef HOAGIE_H
#define HOAGIE_H

class Hoagie
{
public:
    virtual ~Hoagie() = default;

    virtual void addMeat() = 0;
    virtual void addCheese() = 0;
    virtual void addVegetables() = 0;
    virtual void addCondiments() = 0;
    virtual bool customerWantsMeat() { return true; }
    virtual bool customerWantsCheese() { return true; }
    virtual bool customerWantsVegetables() { return true; }
    virtual bool customerWantsCondiments() { return true; }

    void makeSandwich();
    void cutBun();
    void wrapTheHoagie();
};

#endif // HOAGIE_H
