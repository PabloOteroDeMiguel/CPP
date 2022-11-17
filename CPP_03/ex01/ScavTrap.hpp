/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:39 by potero            #+#    #+#             */
/*   Updated: 2022/11/17 17:20:49 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : ClapTrap {
	
	public:

		ScavTrap(void);		
		~ScavTrap(void);		
		ScavTrap(std::string name);		



	private:

		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;

};

#endif
