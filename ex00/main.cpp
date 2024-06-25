#include "ClapTrap.hpp"

int main()
{
	ClapTrap bob("Bob");
	bob.attack("Dummy");
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

	ClapTrap jim("\033[34;01mjim\033[00m");
	ClapTrap	john("\033[34;01mJohn\033[00m");

	john.attack("jim");
	jim.takeDamage(0);
	// tester qu'il meurt bien
	// qu'il peut pas attaquer sil est mort ou quil nas plus de point d'energie;
	

}
