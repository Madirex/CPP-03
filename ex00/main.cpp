/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 17:38:42 by anmateo-          #+#    #+#             */
/*   Updated: 2025/08/05 17:38:44 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
