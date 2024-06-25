#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// int main()
// {
// 	ClapTrap bob("Bob");
// 	bob.attack("sa");
// 	bob.takeDamage(5);
// 	bob.beRepaired(5);

// 	std::cout << "ERROR TEST" << std::endl;
// 	ClapTrap kari("kari");
// 	std::cout << "Energy point " << kari.getEnergyPoint() << std::endl;
// 	kari.beRepaired(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	kari.takeDamage(2147483647);
// 	std::cout << "Energy point " << kari.getEnergyPoint() << std::endl;
// 	std::cout << "===ScavTrap test start===" << std::endl << std::endl;
// 	ScavTrap scav("cav");
// 	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
// 	scav.takeDamage(47);
// 	scav.beRepaired(47);
// 	scav.attack("Manu");
// 	std::cout << std::endl << "TESTING ENERGY POINT OF SCAVTRAP" << std::endl;
// 	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
// 	for (int i = 0; i < 49 ; i++)
// 		scav.takeDamage(1);
// 	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
// 	std::cout << "TESTING HIT POINT OF SCAVTRAP" << std::endl;
// 	ScavTrap dummy("Dummy");

// 	std::cout << "Energy point of Dummy " << dummy.getEnergyPoint() << std::endl;
// 	for (int i = 0; i < 19 ; i++)
// 		dummy.takeDamage(10);
// 	dummy.beRepaired(10);
// 	dummy.guardGate();
// }

int main()
{
	std::cout << std::endl << "===FragTrap test start===" << std::endl << std::endl;
	FragTrap frag("frag");
	std::cout << "Energy point of frag " << frag.getEnergyPoint() << std::endl;
	FragTrap scav("cav");
	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
	scav.takeDamage(47);
	scav.beRepaired(47);
	scav.attack("Manu");
	std::cout << std::endl << "TESTING ENERGY POINT OF FragTrap" << std::endl;
	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
	for (int i = 0; i < 49 ; i++)
		scav.takeDamage(1);
	std::cout << "Energy point of Scav " << scav.getEnergyPoint() << std::endl;
	std::cout << "TESTING HIT POINT OF FragTrap" << std::endl;
	FragTrap dummy("Dummy");

	std::cout << "Energy point of Dummy " << dummy.getEnergyPoint() << std::endl;
	for (int i = 0; i < 19 ; i++)
		dummy.takeDamage(10);
	dummy.beRepaired(10);
	frag.highFivesGuys();
}

// ALORS KRUSH RAIWHELL
//musique ses levres