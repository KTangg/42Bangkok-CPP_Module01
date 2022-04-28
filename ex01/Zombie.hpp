/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:09:53 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 18:49:53 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setname(std::string name);

	private:
		std::string	_name;
};

#endif
