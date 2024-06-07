#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
	public:
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &nb);
	ClapTrap &operator=(const ClapTrap &a);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getEnergyPoint(void);
	~ClapTrap();
	private:
	std::string _Name;
	int _HitPoint;
	int _EnergyPoint;
	int _AttackDammage;
};

#endif