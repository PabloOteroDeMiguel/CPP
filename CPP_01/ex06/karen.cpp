/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:46 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 12:24:18 by potero-d         ###   ########.fr       */
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

void	Karen::test2(std::string str){

	std::cout << "Karen is talking some other "<< str << std::endl;
}

void	Karen::debug(void) {

	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::warning(void) {

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month" << std::endl;
}

void	Karen::info(void) {

	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::error(void) {

	std::cout << "This is unacceptable, I want to speak to the manager now" << std::endl;
}

void	Karen::what(void) {

	std::cout << "Karen is so confused that hit herself" << std::endl;
}



void	Karen::complain(int level) {

	pointer	lvl[5];

	lvl[0] = &Karen::debug;
	lvl[1] = &Karen::info;
	lvl[2] = &Karen::warning;
	lvl[3] = &Karen::error;
	lvl[4] = &Karen::what;


	switch(level) {
		case 0: (this->*lvl[0])();
		case 1: (this->*lvl[1])();
		case 2: (this->*lvl[2])();
		case 3: (this->*lvl[3])();
		break;
		default: (this->*lvl[4])();
	}

}
