#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string Name);
	FragTrap(const FragTrap &nb);
	FragTrap &operator=(const FragTrap &a);
	~FragTrap(void);

	void highFivesGuys(void);
	void attack(const std::string& target);
	private:
};

#endif