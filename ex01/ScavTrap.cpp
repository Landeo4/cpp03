#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap's Constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap's Destructor called" << std::endl;
}

void ScavTrap::GateKeeper(void)
{
	std::cout << "ScavTrap is now is Gate keeper mode" << std::endl;
}
