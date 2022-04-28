/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoolpra <spoolpra@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:10:37 by spoolpra          #+#    #+#             */
/*   Updated: 2022/04/28 22:40:19 by spoolpra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		void				setType(std::string type);
		const std::string	&getType(void) const;

	private:
		std::string	_type;
};

#endif
