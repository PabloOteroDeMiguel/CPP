/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:28:48 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 13:34:31 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <ostream>
#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon {
	public:
		Weapon(std::string str);
		~Weapon(void);
		std::string getType(void);
		void		setType(std::string str);

	private:
		std::string	_type;
};

#endif
