/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:11:03 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 18:49:51 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie	*newHorde = new Zombie[N];
	if (newHorde == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		newHorde[i].setname(name);
	}
	return (newHorde);
}
