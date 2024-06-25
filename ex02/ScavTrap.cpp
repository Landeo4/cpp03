#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Nameless")
{
	std::cout << "ScavTrap's Constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
	_Name = "Nameless";
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap's Constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 50;
	_AttackDamage = 20;
}

ScavTrap:: ScavTrap(const ScavTrap &nb) : ClapTrap(nb)
{
	*this = nb;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &a)
{
	if (this != &a)
	{
		this->_Name = a._Name;
	}
	return *this;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap's Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "ScavTrap don't have enought hit point" << std::endl;
		return ;
	}
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ScavTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoint--;
}

void ScavTrap::guardGate(void)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "ScavTrap don't have enought hit point" << std::endl;
		return ;
	}
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ScavTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ScavTrap is in Guard gate mode" << std::endl;
}
