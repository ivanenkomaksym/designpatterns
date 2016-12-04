#ifndef ANIMAL_H
#define ANIMAL_H

class Flys;

class Animal
{
public:
    explicit Animal(std::unique_ptr<Flys> flyingType);
    virtual ~Animal() = default;

    std::string name() const;
    void setName(const std::string &name);

    double height() const;
    void setHeight(double height);

    int weight() const;
    void setWeight(int weight);

    std::string favFood() const;
    void setFavFood(const std::string &favFood);

    double speed() const;
    void setSpeed(double speed);

    std::string sound() const;
    void setSound(const std::string &sound);

    std::string tryToFly() const;
    void setFlyingAbility(std::unique_ptr<Flys> newFlyType);

protected:
    // Instead of using an interface in a traditional way
    // we use an instance variable that is a subclass
    // of the Flys interface.

    // Animal doesn't care what flyingType does, it just
    // knows the behavior is available to its subclasses

    // This is known as Composition : Instead of inheriting
    // an ability through inheritance the class is composed
    // with Objects with the right ability

    // Composition allows you to change the capabilities of
    // objects at run time!

    std::unique_ptr<Flys> m_flys;

private:
    std::string m_name;
    double      m_height;
    int         m_weight;
    std::string m_favFood;
    double      m_speed;
    std::string m_sound;
}

#endif ANIMAL_H
