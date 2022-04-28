/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:11:00 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 18:45:28 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

static void	testHorde(int N, std::string name)
{
	Zombie *newHorde;

	std::cout << "Testing: "<< N << " Zombies Name \"" << name << "\"" << std::endl;
	newHorde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
	{
		newHorde[i].announce();
	}
	if (newHorde)
		delete[] newHorde;
}

int	main(void)
{
	for (int i = -10; i <= 10; i++)
	{
		if (i % 2 == 0)
			testHorde(i, "Armel");
		else
			testHorde(i, "Vlad");
	}
}
