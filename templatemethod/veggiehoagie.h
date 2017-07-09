#ifndef VEGGIEHOAGIE_H
#define VEGGIEHOAGIE_H

#include "templatemethod/hoagie.h"

#include <string>
#include <vector>

class VeggieHoagie : public Hoagie
{
public:
    explicit VeggieHoagie() = default;
    virtual ~VeggieHoagie() = default;

    virtual void addMeat() override;
    virtual void addCheese() override;
    virtual void addVegetables() override;
    virtual void addCondiments() override;
    virtual bool customerWantsMeat() override { return false; }
    virtual bool customerWantsCheese() override { return false; }

private:
    std::vector<std::string> m_veggiesUsed = {"Lettuce", "Tomatoes", "Onions", "Sweet Peppers"};
    std::vector<std::string> m_condimentsUsed = {"Oil", "Vinegar"};
};

#endif // VEGGIEHOAGIE_H
