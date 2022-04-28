/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 17:37:45 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 18:03:10 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);

int	main(int argc, char *argv[])
{
	randomChump("Armel");
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			Zombie	*tmpZombie = newZombie(argv[i]);
			tmpZombie->announce();
			delete tmpZombie;
		}
	}
	randomChump("Vlad");
	return (0);
}
