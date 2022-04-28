/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 19:21:37 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 19:53:24 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	// Print memory address of the string variable
	std::cout << "String Address: " << &str << std::endl;
	// Print memory address held by stringPTR
	std::cout << "stringPTR held: " << stringPTR << std::endl;
	// Print memory address held by stringREF
	std::cout << "stringREF held: " << &stringREF << std::endl;

	// Print value of the string
	std::cout << "String value: " << str << std::endl;
	// Print value pointed to by stringPTR
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	// Print value pointed to by stringREF
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}
