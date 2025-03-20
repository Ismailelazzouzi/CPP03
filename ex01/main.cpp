#include "ScavTrap.hpp"

int main(void)
{
    std::string name = "Maha";
    std::string name1 = "Najoua";
    std::string name2 = "Khaoula";
    // parametrized constructor test
    ScavTrap maha(name);
    ScavTrap najoua(name1);
    ScavTrap khaoula(name2);
    // copy constructor test
    ScavTrap copyMaha(maha);
    ScavTrap copyNajoua(najoua);
    // assignment operator test
    maha = khaoula;
    // attack && take damage funcs test
    for (size_t i = 0; i < 5; i++)
    {
        if (i < 3)
        {
            maha.attack("Najoua");
            najoua.takeDamage(20);
        }
        najoua.attack("Maha");
        maha.takeDamage(20);
    }
    // beRepaired func test
    maha.beRepaired(12);
    najoua.beRepaired(13);
    // turn to a gate keeper
    maha.guardGate();
    najoua.guardGate();
    return (0);
}