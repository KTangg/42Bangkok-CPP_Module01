/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:18:33 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/29 14:15:07 by spoolpra         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Usage: ./harlFilter [level]" << std::endl;
		return (1);
	}
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

	unsigned char	mode;
	switch (_hashString(argv[1]))
	{
		case(HASHDEBUG):
			mode = 0b1111;
			break ;
		case(HASHINFO):
			mode = 0b1110;
			break ;
		case(HASHWARNING):
			mode = 0b1100;
			break ;
		case(HASHERROR):
			mode = 0b1000;
			break ;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			return (2);
	}

	Harl	instance(mode);
	testHarl(testString, instance);
	return (0);
}
