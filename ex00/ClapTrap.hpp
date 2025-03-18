#include <iostream>

#pragma once

class ClapTrap
{
private:
    std::string     name;
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;
public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();
    ClapTrap    &operator=(ClapTrap const &other);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

