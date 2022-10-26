/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:13 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 13:40:27 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <ostream>
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA {

	public:
		HumanA(std::string name, Weapon& weapon_type);
		~HumanA(void);
		void		attack();
		std::string	getWeapon();

	private:
		std::string _name;
		Weapon&		_weapon_type;
};

#endif
