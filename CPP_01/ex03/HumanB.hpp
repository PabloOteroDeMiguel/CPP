/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:29:46 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 14:06:06 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <ostream>
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanB {
	
	public:
		HumanB(std::string name);
		~HumanB(void);
		void		attack();
		void		setWeapon(Weapon& weapon_type);
	//	void		setWeapon(Weapon weapon_type);

	private:
		std::string _name;
		Weapon*		_weapon_type;
};

#endif
