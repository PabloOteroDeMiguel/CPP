/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:45:42 by potero            #+#    #+#             */
/*   Updated: 2022/11/21 17:23:18 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class ClapTrap;

class FragTrap : public ClapTrap {

	public:

		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string name);
		FragTrap&	operator=(FragTrap& rhs);
		FragTrap(FragTrap& cpy);
		
		void highFivesGuys(void);
};

#endif
