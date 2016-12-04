#ifndef FLYS_H
#define FLYS_H

#include<string>

// The interface is implemented by many other
// subclasses that allow for many types of flying
// without effecting Animal, or Flys.

// Classes that implement new Flys interface
// subclasses can allow other classes to use
// that code eliminating code duplication

// I'm decoupling : encapsulating the concept that varies

class Flys
{
public:
    virtual ~Flys() = default;

    virtual std::string fly() = 0;
};

class ItFlys : public Flys
{
public:
    virtual ~ItFlys() = default;

    virtual std::string fly() override
    {
        return "Flying High";
    }
};


class CantFly : public Flys
{
public:
    virtual ~CantFly() = default;

    virtual std::string fly() override
    {
        return "I can't fly";
    }
};
#endif // FLYS_H
