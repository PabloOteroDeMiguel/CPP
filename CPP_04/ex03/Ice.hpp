/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 12:26:01 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 15:00:57 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : virtual public AMateria {

	public:

		Ice();
		~Ice();
		Ice(Ice& cpy);
		Ice&	operator=(Ice& rhs);
		virtual AMateria*	clone() const;
	//	virtual void use(ICharacter& target);
};

#endif
