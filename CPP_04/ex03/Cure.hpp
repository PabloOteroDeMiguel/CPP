/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:26:55 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 16:50:57 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "header.hpp"

class Cure : virtual public AMateria {

	public:

		Cure();
		~Cure();
		Cure(Cure& cpy);
		Cure&	operator=(Cure& rhs);
		virtual AMateria*	clone() const;
		virtual void use(ICharacter& target);
};

#endif
