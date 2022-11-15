/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:54 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/15 13:29:37 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include<iostream>
#include<ostream>

class ClapTrap {

	public:

		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap&	operator=(ClapTrap& rhs);
		ClapTrap(ClapTrap& cpy);

		std::string	getName();
		int	getHitpoints();
		int	getEnergyPoints();
		int	getAttackDamage();
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;

};

#endif
