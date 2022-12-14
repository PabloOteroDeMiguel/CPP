/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:47:05 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 15:01:04 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include<iostream>
#include<ostream>

class AMateria {

	public:

		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria(AMateria& cpy);
		AMateria&	operator=(AMateria& rhs);
		
		std::string const &	getType() const; //Returns the materia type
		virtual AMateria*	clone() const = 0;
//		virtual void use(ICharacter& target);

	protected:

		std::string	_type;

};

#endif