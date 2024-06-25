#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Nameless")
{
	std::cout << "FragTrap's Constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap's constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}

FragTrap:: FragTrap(const FragTrap &nb)
{
	*this = nb;
}

FragTrap &FragTrap::operator=(const FragTrap &a)
{
	if (this != &a)
	{
		this->_Name = a._Name;
	}
	return *this;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap's Destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (this->_HitPoint <= 0)
	{
		std::cout << "FragTrap don't have enought hit point" << std::endl;
		return ;
	}
	if (this->_EnergyPoint == 0)
	{
		std::cout << "FragTrap don't have enought energy point" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_Name << " attack " << target;
	std::cout << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
	this->_EnergyPoint--;
}

void FragTrap::highFivesGuys(void)
{
	std::string a;
	std::cout << "High five guys? " << std::endl;
	std::cin >> a;
	if (!std::cin)
	{
		std::cout << "a problem happend with your high five" << std::endl;
	}
}
