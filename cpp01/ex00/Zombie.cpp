#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
     std::cout << getZombie() << " is dead" << std::endl;

}

void Zombie::announce(void)
{
    std::cout << getZombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie(std::string name)
{
    this->_zombie = name;
}

std::string Zombie::getZombie()
{
    return this->_zombie;
}