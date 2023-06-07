#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:

    std::string _type;

    public:

    Weapon(const std::string &name);
    ~Weapon(void);

    const std::string &getType() const;
    void setType(const std::string &name);
};


#endif