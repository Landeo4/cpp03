#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	public:
	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &nb);
	ClapTrap &operator=(const ClapTrap &a);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getEnergyPoint(void);
	private:
	std::string _Name;
	int _HitPoint;
	int _EnergyPoint;
	int _AttackDamage;
};

#endif