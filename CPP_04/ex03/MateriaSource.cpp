/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:06:42 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 15:56:10 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

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
