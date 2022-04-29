/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:46:49 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/29 12:33:20 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
# define __HARL_HPP__

# include <iostream>

enum e_level
{
	e_debug,
	e_info,
	e_warning,
	e_error,
};

# define HASHDEBUG 0x46392e7
# define HASHINFO 0x25c10f
# define HASHWARNING 0x1647482e07
# define HASHERROR 0x47a5232

inline size_t	_hashString(const char *str)
{
	size_t	hash = 0;

	while (*str != '\0')
		hash = (hash << 5) + *str++;
	return (hash);
}

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	(Harl::*f[4])(void);
};

#endif
