#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap defaultTrap;
    
    ClapTrap namedTrap("Clappy");
    
    ClapTrap copyTrap(namedTrap);
    
    defaultTrap.attack("Enemy");
    namedTrap.attack("Target");
    
    namedTrap.takeDamage(5);
    namedTrap.beRepaired(3);
    
    for (int i = 0; i < 11; i++) {
        std::cout << "Action " << i+1 << ": ";
        copyTrap.attack("Enemy");
    }
    
    copyTrap.beRepaired(5);
    
    namedTrap.takeDamage(20);
    namedTrap.beRepaired(5);
    namedTrap.attack("Target");
    
    ClapTrap assignTrap;
    assignTrap = namedTrap;
    assignTrap.takeDamage(1);
    
    return (0);
}