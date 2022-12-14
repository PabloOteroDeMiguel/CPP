/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:05:26 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 09:21:49 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "\033[1;31m";
	std::cout << "Brain called";
	this->_ideas[0] = "First was nothing...";
	std::cout << "\033[0m" << std::endl;
	return;
}

Brain::~Brain(void) {

	std::cout << "\033[1;31m";
	std::cout << "Brain destroyed, who needs one.";
	std::cout << "\033[0m" << std::endl;
	return;
}

Brain::Brain(Brain &cpy) {

	std::cout << "Brain copy called." << std::endl;
	*this = cpy;
	return;
}

Brain&	Brain::operator=(Brain& rhs) {

	int	i;

	std::cout << "Brain operator '=' called." << std::endl;
	i = 0;
	if (this != &rhs) {
		while (i < 100) {
			this->_ideas[i] = rhs.getIdea(i);
			i++;
		}
	}
	return (*this);
}

void	Brain::setIdea(std::string idea, int i) {

	this->_ideas[i] = idea;
}

std::string	Brain::getIdea(int i) {

	return (this->_ideas[i]);
}

void	Brain::thoughts(void) const {

	int i;

	i = 0;
	while (i < 100) {

		if (this->_ideas[i].size() != 0) {
			std::cout << "Idea " << i << ": " << this->_ideas[i] << std::endl;
		}
		i++;
	}
}
