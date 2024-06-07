#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	std::cout << "===ScavTrap test start===" << std::endl << std::endl;
	ScavTrap scav("cav");
	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
	scav.takeDamage(47);
	scav.beRepaired(47);
	scav.attack("Manu");
	scav.guardGate();
	std::cout << "===FragTrap test start===" << std::endl << std::endl;
	FragTrap frag("frag");
	std::cout << "Energy point of frag " << frag.getEnergyPoint() << std::endl;
	frag.takeDamage(47);
	frag.beRepaired(47);
	frag.attack("Manu");
	frag.highFivesGuys();
}

// ALORS KRUSH RAIWHELL
//musique ses levres