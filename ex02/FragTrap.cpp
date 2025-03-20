#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string &name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap cnstructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        std::cout << "FragTrap " << this->getName() << " can't attack - no energy or hit points left!" << std::endl;
        return;
    }
    this->energyPoints--;
    std::cout << "FragTrap " << this->getName() << " viciously attacks " << target 
              << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "I request the highest of fives !" << std::endl;
}