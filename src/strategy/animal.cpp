#include "strategy/animal.h"

#include "strategy/flys.h"

Animal::Animal(std::unique_ptr<Flys> flyingType)
    : m_flys(std::move(flyingType))
{
}

std::string Animal::name() const
{
return m_name;
}

void Animal::setName(const std::string &name)
{
m_name = name;
}

double Animal::height() const
{
return m_height;
}

void Animal::setHeight(double height)
{
m_height = height;
}

int Animal::weight() const
{
return m_weight;
}

void Animal::setWeight(int weight)
{
m_weight = weight;
}

std::string Animal::favFood() const
{
return m_favFood;
}

void Animal::setFavFood(const std::string &favFood)
{
m_favFood = favFood;
}

double Animal::speed() const
{
return m_speed;
}

void Animal::setSpeed(double speed)
{
m_speed = speed;
}

std::string Animal::sound() const
{
return m_sound;
}

void Animal::setSound(const std::string &sound)
{
m_sound = sound;
}

std::string Animal::tryToFly() const
{
return m_flys->fly();
}

void Animal::setFlyingAbility(std::unique_ptr<Flys> newFlyingType)
{
m_flys = std::move(newFlyingType);
}
