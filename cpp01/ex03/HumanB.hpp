#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
class HumanB
{
    private:

    Weapon *_weaponB;
    std::string _name;

    public:

    HumanB(const std::string &name);
    ~HumanB();
    void setWeapon(Weapon &newWeapon);
    void attack(void) const;


};

#endif