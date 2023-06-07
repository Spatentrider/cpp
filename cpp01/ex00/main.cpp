#include "Zombie.hpp"

int main()
{
    Zombie bob;
    bob.setZombie("Michela");
    bob.announce();

    Zombie* z2 = newZombie("Lorenzo");

    randomChump("Kevin");
    delete z2;
    return(0);

}