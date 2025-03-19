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
    if (this->hitPoints <= 0)
    {
        std::cout << this->name << " is already dead!" << std::endl;
        return ;
    }
    if (this->energyPoints > 0)
    {
        this->energyPoints--;
        std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
    else
        std::cout << this->name << " couldn't attack for lack of energy" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        if (amount >= this->hitPoints)
            this->hitPoints = 0;
        else
            this->hitPoints -= amount;
        std::cout << this->name << " took " << amount << " of damage" << std::endl;
    }
    else
        std::cout << this->name << " is already dead!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        if (this->energyPoints > 0)
        {
            this->hitPoints += amount;
            this->energyPoints--;
            std::cout << this->name << " repaired by " << amount << " of points" << std::endl;
        }
        else
            std::cout << this->name << " couldn't be repaired due to lack of energy" << std::endl;
    }
    else
        std::cout << this->name << " is already dead!" << std::endl;
}