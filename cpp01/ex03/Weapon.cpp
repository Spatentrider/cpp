#include "Weapon.hpp"

Weapon::Weapon(const std::string &type) : _type(type)
{
}

Weapon::~Weapon(void)
{
}

void Weapon::setType(const std::string &name)
{
    this->_type = name;
}

const std::string &Weapon::getType() const
{
    return this->_type;
}