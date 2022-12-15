/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:05:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 17:01:49 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "header.hpp"

class IMateriaSource;

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
