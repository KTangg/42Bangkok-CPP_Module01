/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:09:48 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 18:49:53 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << ": died" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": ";
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setname(std::string name)
{
	this->_name = name;
}
