#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FlagTrap.h"
#include "DiamondTrap.h"

int main() {
//    std::cout << "=== Testing ClapTrap ===" << std::endl;
//    ClapTrap clap("Clap");
//    clap.attack("target1");
//    clap.takeDamage(5);
//    clap.beRepaired(3);
//    std::cout << std::endl;
//
//    std::cout << "=== Testing ScavTrap ===" << std::endl;
//    ScavTrap scav("Scav");
//    scav.attack("target2");
//    scav.takeDamage(15);
//    scav.beRepaired(10);
//    scav.guardGate();
//    std::cout << std::endl;
//
//    std::cout << "=== Testing FlagTrap ===" << std::endl;
//    FlagTrap flag("Flag");
//    flag.attack("target3");
//    flag.takeDamage(20);
//    flag.beRepaired(15);
//    flag.highFivesGuys();
//    std::cout << std::endl;

    std::cout << "=== Testing DiamondTrap ===" << std::endl;
    DiamondTrap diamond("Diamond");
    diamond.attack("target4");
    diamond.takeDamage(25);
    diamond.beRepaired(20);
    diamond.whoAmI();
    std::cout << std::endl;

//    // Polymorphism test
//    std::cout << "=== Polymorphism Test ===" << std::endl;
//    ScavTrap* ptr = new DiamondTrap("tmp");
//    ptr->attack("target5");
//    delete ptr;
//    std::cout << std::endl;

    return 0;
}
//=== Testing ClapTrap ===
//•ClapTrap• String constructor called
//        Clap attacks target1, causing 0 points of damage!
//Clap received 5 of damage!
//Clap has 5 HP remaining!
//Clap has 8 HP remaining!
//
//=== Testing ScavTrap ===
//•ScavTrap• String constructor called
//        Scav attacks target2, causing 20 points of damage!
//Scav received 15 of damage!
//Scav has 85 HP remaining!
//Scav has 95 HP remaining!
//Scav is now in Gate Keeper mode.
//
//=== Testing FlagTrap ===
//•FlagTrap• String constructor called
//        Flag attacks target3, causing 30 points of damage!
//Flag received 20 of damage!
//Flag has 80 HP remaining!
//Flag has 95 HP remaining!
//•FlagTrap• Flag is high fiving.
//
//=== Testing DiamondTrap ===
//•DiamondTrap• String constructor called
//        Diamond attacks target4, causing 30 points of damage!
//Diamond received 25 of damage!
//Diamond has 75 HP remaining!
//Diamond has 95 HP remaining!
//DiamondTrap name: Diamond
//        ClapTrap name: Diamond_clap_name
//
//=== Polymorphism Test ===
//•DiamondTrap• String constructor called
//        tmp attacks target5, causing 30 points of damage!
//•DiamondTrap• Destructor called
