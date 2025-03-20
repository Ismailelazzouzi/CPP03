#include "FragTrap.hpp"

int main(void)
{
    std::string name = "Maha";
    std::string name1 = "Najoua";
    std::string name2 = "Khaoula";
    // parametrized constructor test
    FragTrap maha(name);
    FragTrap najoua(name1);
    FragTrap khaoula(name2);
    // copy constructor test
    FragTrap copyMaha(maha);
    FragTrap copyNajoua(najoua);
    // assignment operator test
    maha = khaoula;
    // attack && take damage funcs test
    for (size_t i = 0; i < 5; i++)
    {
        if (i < 3)
        {
            maha.attack("Najoua");
            najoua.takeDamage(30);
        }
        najoua.attack("Maha");
        maha.takeDamage(30);
    }
    // beRepaired func test
    maha.beRepaired(12);
    najoua.beRepaired(13);
    // turn to a gate keeper
    maha.highFivesGuys();
    najoua.highFivesGuys();
    return (0);
}