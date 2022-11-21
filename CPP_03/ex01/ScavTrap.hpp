/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:39 by potero            #+#    #+#             */
/*   Updated: 2022/11/21 11:55:45 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap {
	
	public:

		ScavTrap(void);		
		~ScavTrap(void);		
		ScavTrap(std::string name);		
		ScavTrap&	operator=(ScavTrap& rhs);
		ScavTrap(ScavTrap& cpy);

		void guardGate();
};

#endif
