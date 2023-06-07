#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* z1 = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        z1[i].setZombie(name);
        z1[i].announce();
    }
    return z1;
}