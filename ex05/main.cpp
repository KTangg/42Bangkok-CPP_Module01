/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:18:33 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/29 13:28:47 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	testHarl(std::string	testString[10], Harl &instance)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Test: [" << testString[i] << "]" << std::endl;
		instance.complain(testString[i]);
	}
	return ;
}

int	main(void)
{
	Harl	instance;
	std::string	testString[10] = {
		"",
		"debug",
		"DEBUg",
		"INFO ",
		" WARNING",
		" ERROR ",
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	testHarl(testString, instance);
	return (0);
}
