#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string Name);
	~ScavTrap(void);
	private:
	void GateKeeper(void);
	void guardGate();
};

#endif