#include "Zombie.hpp"

int main()
{
    Zombie* zombie = zombieHorde(7, "bob");
    // for(int i = 0; i < 7; i++)
    // {
    //     zombie[i].announce();
    // }
    delete[] zombie;
    return 0;
}