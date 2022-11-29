/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:45:42 by potero            #+#    #+#             */
/*   Updated: 2022/11/29 10:57:54 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : virtual public ClapTrap {

	public:

		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string name);
		FragTrap&	operator=(FragTrap& rhs);
		FragTrap(FragTrap& cpy);
		
		void highFivesGuys(void);
		void 	attack(std::string const & target);

};

#endif
