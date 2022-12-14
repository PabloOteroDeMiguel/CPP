/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:26:28 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 09:28:29 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include<iostream>
#include<ostream>

class WrongAnimal {

	public:

		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(WrongAnimal& cpy);
		WrongAnimal				operator=(WrongAnimal& rhs);
		const std::string	getType() const;
		void		makeSound() const;

	protected:

		std::string	_type;

};

#endif
