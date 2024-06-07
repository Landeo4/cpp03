#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(std::string Name): _Name(Name)
{
	std::cout << "Constructor called" << std::endl;
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDammage = 0;
	return ;	
}

ClapTrap:: ClapTrap(const ClapTrap &nb)
{
	*this = nb;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &a)
{
	if (this != &a)
	{
		this->_Name = a._Name;
	}
	return *this;
}

ClapTrap:: ~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ClapTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << this->_AttackDammage << " points of damage!" << std::endl;
	this->_EnergyPoint--;
}

int ClapTrap::getEnergyPoint(void)
{
	return this->_EnergyPoint;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ClapTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " take damage";
	std::cout << ", taking " << amount << " points of damage!" << std::endl;
	this->_HitPoint = this->_HitPoint - amount;
	this->_EnergyPoint--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	long long int result = this->_HitPoint + amount;
	if (result > 2147483647)
	{
		std::cout << "reparation too high, HIPoint set to 10" << std::endl;
		this->_HitPoint = 10;
		return ;
	}
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ClapTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " repaired by " << amount;
	std::cout << " now energy point is at ";
	this->_HitPoint = result;
	std::cout << this->_HitPoint << std::endl;
	this->_EnergyPoint--;
}
