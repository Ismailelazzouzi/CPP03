#include "ClapTrap.hpp"

int main(void)
{
    // Test default constructor
    ClapTrap defaultTrap;
    
    // Test parameterized constructor
    ClapTrap namedTrap("Clappy");
    
    // Test copy constructor
    ClapTrap copyTrap(namedTrap);
    
    // Test various actions
    defaultTrap.attack("Enemy");
    namedTrap.attack("Target");
    
    // Test taking damage
    namedTrap.takeDamage(5);
    namedTrap.beRepaired(3);
    
    // Test energy depletion (11 actions should deplete energy)
    for (int i = 0; i < 11; i++) {
        std::cout << "Action " << i+1 << ": ";
        copyTrap.attack("Enemy");
    }
    
    // Test with no energy left
    copyTrap.beRepaired(5);
    
    // Test taking fatal damage
    namedTrap.takeDamage(20);
    namedTrap.beRepaired(5); // Should not work because ClapTrap is "dead"
    namedTrap.attack("Target"); // Should not work because ClapTrap is "dead"
    
    // Test assignment operator
    ClapTrap assignTrap;
    assignTrap = namedTrap;
    assignTrap.takeDamage(1);
    
    return 0;
}