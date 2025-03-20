#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap cnstructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->getName() << " is on Gate Keeping Mode" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << "ScavTrap " << this->getName() << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "ScavTrap " << this->getName() << " viciously attacks " << target 
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}