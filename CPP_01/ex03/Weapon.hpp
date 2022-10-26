/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:28:48 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 11:08:49 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <ostream>
#include <iostream>
#include "HumanA.hpp"

class Weapon {
	public:
		Weapon(void);
		~Weapon(void)
		std::string getType(void);
		std::string setType(std:string str);

	private:
		std::string	_type;
};
