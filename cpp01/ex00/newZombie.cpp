#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {

    Zombie* z1 = new Zombie();
    z1->setZombie(name);
    z1->announce();
    return z1;
}