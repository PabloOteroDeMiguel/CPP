/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:44:01 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 18:26:58 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include<iostream>
#include<ostream>

class Animal {

	public:

		Animal(void);
		virtual ~Animal(void);
		Animal(Animal& cpy);
		Animal				operator=(Animal& rhs);
		const std::string	getType() const;
		virtual	void		makeSound() const;

	protected:

		std::string	_type;

};

#endif
