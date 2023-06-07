#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:

    std::string _zombie;

    public:

    Zombie();
    ~Zombie(void);

    void announce(void);
    std::string getZombie();
    void setZombie(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif