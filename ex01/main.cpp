#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- Creating ScavTrap ---" << std::endl;
	ScavTrap scav("SC4V-TP");
	std::cout << std::endl;

	std::cout << "--- ScavTrap's turn ---" << std::endl;
	scav.attack("a really big bandit");
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();
	std::cout << std::endl;

	std::cout << "--- Creating a copy ---" << std::endl;
	ScavTrap scav_copy(scav);
	scav_copy.attack("another bandit");
	std::cout << std::endl;

	std::cout << "--- End of program ---" << std::endl;
	return 0;
}
