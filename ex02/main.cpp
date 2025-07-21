#include "FragTrap.hpp"

int main(void)
{
	std::cout << "--- Creating FragTrap ---" << std::endl;
	FragTrap frag("FR4G-TP");
	std::cout << std::endl;

	std::cout << "--- FragTrap's turn ---" << std::endl;
	frag.attack("a skag");
	frag.takeDamage(50);
	frag.beRepaired(25);
	frag.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Creating a copy ---" << std::endl;
	FragTrap frag_copy(frag);
	frag_copy.attack("another skag");
	std::cout << std::endl;

	std::cout << "--- End of program ---" << std::endl;
	return 0;
}
