/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:42:21 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 13:39:35 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook (void)
{
	return ;
}

Phonebook::~Phonebook (void)
{
	std::cout << "Bananaphone closed and destroyed" << std::endl;
	return ;
}

void	Phonebook::startIndex() {
	this->index = 0;
}
