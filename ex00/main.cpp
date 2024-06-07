#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	bob.attack("sa");
	bob.takeDamage(5);
	bob.beRepaired(5);

	std::cout << "ERROR TEST" << std::endl;
	ClapTrap kari("kari");
	std::cout << "Energy point " << kari.getEnergyPoint() << std::endl;
	kari.beRepaired(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	kari.takeDamage(2147483647);
	std::cout << "Energy point " << kari.getEnergyPoint() << std::endl;
}
