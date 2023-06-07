#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weaponB(nullptr){}

HumanB::~HumanB() {}

void HumanB::attack() const
{
   std::cout << this->_name << " attacks with their " << this->_weaponB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
   this->_weaponB = &newWeapon;
}l