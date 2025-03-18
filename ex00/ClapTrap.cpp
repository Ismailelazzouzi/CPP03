#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Unnamed"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints),
                        energyPoints(other.energyPoints), attackDamage(other.attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default Destructor called" << std::endl;
}


ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
}
void ClapTrap::takeDamage(unsigned int amount)
{
}
void ClapTrap::beRepaired(unsigned int amount)
{
}