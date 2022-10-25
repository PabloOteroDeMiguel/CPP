/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:18:49 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/25 16:01:25 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <ostream>
#include <iostream>
#include <cctype>
#include <stdlib.h>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);
		Zombie(void);
		void		announce(void);
		std::string	getName(void);
		void		setHordeName(std::string horde);
		void		setName(std::string name);

	private:
		std::string	_name;	
		std::string _hordName;	
};

Zombie *zombieHorde(int N, std::string name);

#endif
