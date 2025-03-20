#include <iostream>
#include <string>

#pragma once

class ClapTrap
{
private:
    std::string     name;
public:
    unsigned int    hitPoints;
    unsigned int    energyPoints;
    unsigned int    attackDamage;
    ClapTrap();
    ClapTrap(const std::string &name, unsigned int hP, unsigned int eP, unsigned int aD);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();
    ClapTrap    &operator=(ClapTrap const &other);
    std::string &getName();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
