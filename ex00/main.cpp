#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clap("CL4P-TP");

	clap.attack("a bandit");
	clap.takeDamage(5);
	clap.beRepaired(3);
	clap.takeDamage(10);
	clap.beRepaired(5);
	clap.attack("another bandit");

	std::cout << std::endl;

	ClapTrap trap("TR4P-TP");
	trap.attack("the hero");
	
	std::cout << std::endl;
	
	ClapTrap copy(clap);
	copy.attack("someone");

	return 0;
}
