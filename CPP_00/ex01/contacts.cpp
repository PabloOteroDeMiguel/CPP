/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:19:38 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 14:03:34 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bananaphone.hpp"

Contact::Contact (void)
{
	return ;
}

Contact::~Contact (void)
{
	std::cout << "Contact " << this->first_name <<  " destroyed" << std::endl;
	return ;
}

Contact::Contact(std::string aFirst_name, std::string aLast_name, std::string aNick_name) {
	this->first_name = aFirst_name;
	this->last_name = aLast_name;
	this->nick_name  = aNick_name;
}

void	Contact::setPhone(std::string aPhone) {
	
	phone = aPhone;
}

