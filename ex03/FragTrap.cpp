#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap's constructor called" << std::endl;
	_HitPoint = 100;
	_EnergyPoint = 100;
	_AttackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap's Destructor called" << std::endl;
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
