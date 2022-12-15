/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:05:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 16:14:54 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <string.h>
#include <stdio.h>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource& cpy);
		MateriaSource&	operator=(MateriaSource& rhs);
		
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

	private:
		
		AMateria* knowledgeBook[4];
};


#endif
