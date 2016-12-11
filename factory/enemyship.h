#ifndef ENEMYSHIP_H
#define ENEMYSHIP_H

#include <string>

class EnemyShip
{
public:
    explicit EnemyShip() = default;
    ~EnemyShip() = default;

    std::string name() const;
    void setName(const std::string &name);

    double damage() const;
    void setDamage(double damage);

    void followHeroShip() const;
    void displayEnemyShip() const;
    void enemyShipShoots() const;

private:
    std::string m_name;
    double m_speed;
    double m_directionX;
    double m_directionY;
    double m_damage;
};

#endif // ENEMYSHIP_H
