#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main() {

    std::cout << "=== Testing DiamondTrap ===" << std::endl;
    DiamondTrap diamond("Diamond");
    std::cout << diamond.ClapTrap::getName() << std::endl;
    std::cout << diamond.getName() << std::endl;
    std::cout << diamond.getHitPoints() << std::endl;
    std::cout << diamond.getEnergy() << std::endl;
    std::cout << diamond.getAttackDamage() << std::endl;
    diamond.attack("target4");
    diamond.takeDamage(25);
    diamond.beRepaired(20);
    diamond.whoAmI();
    std::cout << diamond.getName() << std::endl;
    std::cout << diamond.getHitPoints() << std::endl;
    std::cout << diamond.getEnergy() << std::endl;
    std::cout << diamond.getAttackDamage() << std::endl;
    std::cout << std::endl;

    diamond.highFivesGuys();
    diamond.guardGate();

    DiamondTrap dt = diamond;
    diamond.takeDamage(10);
    std::cout << dt.getName() << std::endl;
    std::cout << dt.getHitPoints() << std::endl;
    std::cout << dt.getEnergy() << std::endl;
    std::cout << dt.getAttackDamage() << std::endl;
    std::cout << std::endl;


    return 0;
}

