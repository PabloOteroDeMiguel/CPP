/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:42:39 by potero            #+#    #+#             */
/*   Updated: 2022/11/21 16:41:42 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

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
