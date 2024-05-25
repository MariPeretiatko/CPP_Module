#ifndef CPP_CLAPTRAP_H
#define CPP_CLAPTRAP_H

#include<iostream>

# define RESET "\033[0m"
# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[36m"

class ClapTrap
{
private:
	std::string name;
    unsigned int hit_points;
    unsigned int energy;
    unsigned int attack_damage;
public:
    ClapTrap();
	ClapTrap(std::string name);
	ClapTrap& operator =(const ClapTrap& obj);
	ClapTrap(const ClapTrap &obj);
	~ClapTrap();

	std::string getName();
    unsigned int getHitPoints();
    unsigned int getEnergy();
    unsigned int getAttackDamage();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_CLAPTRAP_H