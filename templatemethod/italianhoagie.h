#ifndef ITALIANHOAGIE_H
#define ITALIANHOAGIE_H

#include "templatemethod/hoagie.h"

#include <string>
#include <vector>

class ItalianHoagie : public Hoagie
{
public:
    explicit ItalianHoagie() = default;
    virtual ~ItalianHoagie() = default;

    virtual void addMeat() override;
    virtual void addCheese() override;
    virtual void addVegetables() override;
    virtual void addCondiments() override;

private:
    std::vector<std::string> m_meatUsed = {"Salami", "Pepperoni", "Capicola Ham"};
    std::vector<std::string> m_cheeseUsed = {"Provolone"};
    std::vector<std::string> m_veggiesUsed = {"Lettuce", "Tomatoes", "Onions", "Sweet Peppers"};
    std::vector<std::string> m_condimentsUsed = {"Oil", "Vinegar"};
};

#endif // ITALIANHOAGIE_H
