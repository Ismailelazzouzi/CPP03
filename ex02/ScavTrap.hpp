#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:

    ScavTrap();
    ScavTrap(std::string &name);
    ScavTrap(ScavTrap &other);
    ~ScavTrap();
    void guardGate();
    void attack(const std::string& target);
};