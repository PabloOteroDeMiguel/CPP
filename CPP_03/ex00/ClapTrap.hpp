/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:13:54 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/17 16:13:23 by potero           ###   ########.fr       */
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
		int		getHitpoints();
		int		getEnergyPoints();
		int		getAttackDamage();
		void	setEnergyPoints(unsigned int amount);
		void	setHealedPoints(unsigned int amount);

		void 	attack(std::string const & target);
		void 	takeDamage(unsigned int amount);
		void 	beRepaired(unsigned int amount);
		int		isDead();

	private:
		std::string	_name;
		int			_hitpoints;
		int			_energy_points;
		int			_attack_damage;

};

#endif
