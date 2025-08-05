/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:40:46 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/05 17:40:47 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "--- Creating DiamondTrap ---" << std::endl;
	DiamondTrap diamond("DI4M-TP");
	std::cout << std::endl;

	std::cout << "--- DiamondTrap's turn ---" << std::endl;
	diamond.whoAmI();
	diamond.attack("a badass skag");
	diamond.takeDamage(40);
	diamond.beRepaired(20);
	diamond.guardGate();
	diamond.highFivesGuys();
	std::cout << std::endl;

	std::cout << "--- Creating a copy ---" << std::endl;
	DiamondTrap diamond_copy(diamond);
	diamond_copy.whoAmI();
	std::cout << std::endl;

	std::cout << "--- End of program ---" << std::endl;
	return 0;
}
