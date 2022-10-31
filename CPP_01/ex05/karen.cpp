/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:46 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/31 17:05:19 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "karen.hpp"

Karen::Karen(void){

	std::cout << "Karen it´s here" << std::endl;
	return ;
}

Karen::~Karen(void){

	std::cout << "Karen out" << std::endl;
	return ;
}

void Karen::setName(std::string name){

	this->_name = name;
}

std::string Karen::getName(void){

	return (this->_name);
}

void	Karen::test(std::string str){

	std::cout << "Karen is talking some "<< str << std::endl;
}
