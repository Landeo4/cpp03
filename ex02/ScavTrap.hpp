#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string Name);
	~ScavTrap(void);
	ScavTrap(const ScavTrap &nb);
	ScavTrap &operator=(const ScavTrap &a);

	void attack(const std::string& target);
	void guardGate();
	private:
};

#endif