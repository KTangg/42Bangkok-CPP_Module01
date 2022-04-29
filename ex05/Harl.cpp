/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:46:47 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/29 14:12:50 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->f[e_debug] = &Harl::debug;
	this->f[e_info] = &Harl::info;
	this->f[e_warning] = &Harl::warning;
	this->f[e_error] = &Harl::error;

	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::complain(std::string level)
{
	size_t	value;

	value = _hashString(level.c_str());
	switch (value)
	{
		case (HASHDEBUG):
			(this->*f[e_debug])();
			break ;
		case (HASHINFO):
			(this->*f[e_info])();
			break ;
		case (HASHWARNING):
			(this->*f[e_warning])();
			break ;
		case (HASHERROR):
			(this->*f[e_error])();
			break ;
		default:
			std::cerr << "Invalid Argument" << std::endl;
	}
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
