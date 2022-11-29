/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:44:01 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 12:34:47 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<ostream>

class Animal {

	public:

		Animal(void);
		~Animal(void);
		Animal(Animal& cpy);
		Animal		operator=(Animal& rhs);
		std::string	getType();
		//std::string	const getType();

	protected:

		std::string	_type;

};

#endif
