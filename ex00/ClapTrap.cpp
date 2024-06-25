#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap's Constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 10;
	_AttackDamage = 0;
	_Name = "Nameless";
	return ;
}

ClapTrap:: ClapTrap(std::string Name): _Name(Name)
{
	std::cout << "Constructor called" << std::endl;
	_HitPoint = 10;
	_EnergyPoint = 10;
	_AttackDamage = 0;
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
	if (this->_HitPoint <= 0)
	{
		std::cout << "ScavTrap don't have enought hit point" << std::endl;
		return ;
	}
	if (this->_EnergyPoint == 0)
	{
		std::cout << "ClapTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoint--;
}

int ClapTrap::getEnergyPoint(void)
{
	return this->_EnergyPoint;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "ScavTrap don't have enought hit point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_Name << " take damage";
	std::cout << ", taking " << amount << " points of damage!" << std::endl;
	this->_HitPoint = this->_HitPoint - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	long long int result = this->_HitPoint + amount;
	if (result > 2147483647)
	{
		std::cout << "reparation too high, HitPoint set to 10" << std::endl;
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
