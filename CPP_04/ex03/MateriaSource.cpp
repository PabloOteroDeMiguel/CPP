/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:06:42 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 17:04:25 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

MateriaSource::MateriaSource() {

	int	i;

	i = 0;
	while( i < 4) {

		knowledgeBook[i] = NULL;
		i++;
	}

	std::cout << "\033[1;32m";
	std::cout << "The Great Book of Knowledge it's open";
	std::cout << "\033[0m" << std::endl;
}

MateriaSource::~MateriaSource() {

	int	i;

	i = 0;
	while( i < 4) {

		if (knowledgeBook[i])
			delete knowledgeBook[i];
		i++;
	}

	std::cout << "\033[1;32m";
	std::cout << "The Great Book of Knowledge it´s close";
	std::cout << "\033[0m" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource& cpy) {

	*this = cpy;
	return;
}

MateriaSource&	MateriaSource::operator=(MateriaSource& rhs) {

	int	i;

	i = 0;

	if (this != &rhs) {

		while (i < 4) {
			
			if (this->knowledgeBook[i])
				delete this->knowledgeBook[i];
			if (rhs.knowledgeBook[i])
				this->knowledgeBook[i] = rhs.knowledgeBook[i]->clone();
			else
				this->knowledgeBook[i] = NULL;
			i++;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m) {

	int	i;

	i = 0;
	while (i < 4) {
		
		if (!this->knowledgeBook[i])
			break;
		i++;
	}
	if (i < 4)
		this->knowledgeBook[i] = m;
	else {

		std::cout << "\033[1;32m";
		std::cout << "The Great Book of Knowledge it´s full";
		std::cout << "\033[0m" << std::endl;
	}
}
	
AMateria*	MateriaSource::createMateria(std::string const & type) {

	int	i;

	i = 0;
	while(i < 4) {

		if (this->knowledgeBook[i] &&
				(type == this->knowledgeBook[i]->getType())) {

			std::cout << "\033[1;32m";
			std::cout << "Materia " << type << " created";
			std::cout << "\033[0m" << std::endl;
			return(this->knowledgeBook[i]);
		}
		i++;
	}
	std::cout << "\033[1;32m";
	std::cout << "No materia found";
	std::cout << "\033[0m" << std::endl;
	return (NULL);
}
