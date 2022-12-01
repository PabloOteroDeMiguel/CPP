/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 18:49:36 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : virtual public Animal {

	public:

		Dog(void);
		~Dog(void);
		Dog(Dog& cpy);
		Dog			operator=(Dog& rhs);
		void		makeSound() const;

};

#endif
