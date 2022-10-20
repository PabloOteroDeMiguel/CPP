/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:23:23 by potero            #+#    #+#             */
/*   Updated: 2022/10/20 16:16:42 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "bananaphone.hpp"

void	print_name(std::string name) {

	int	spaces;
	int	i;
	std::string	blue;
	std::string	na;

	blue = "\033[1;34m";
	na = "\033[0m";
	spaces = 10 - name.length() - 1;
	i = 0;
	if (name.length() > 9) {
		std::cout << na << name.substr(0,9) << "." << blue << "|";
	}
	else {
		while (i < spaces) {
			std::cout << " ";
			i++;
		}
		std::cout << na << name << blue << " |";
	}
}

void	search(Phonebook &bananaphone) {

	int			i;
	std::string	enter;
	std::string	blue;
	std::string	na;
	std::string	red;

	blue = "\033[1;34m";
	red = "\033[1;31m";
	na = "\033[0m";
	std::cout << blue << " ___________________________________________" << std::endl;
	std::cout << "|   Index  |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (bananaphone.num_contacts == 0) {
		std::cout << "|" << red <<"            -No Contacts saved             ";
		std::cout << blue << "|" << std::endl;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << na << std::endl;
	}
	else {
		for (i = 0; i < bananaphone.num_contacts; i++) {
			std::cout << "|        " << na <<  bananaphone.contact[i].index;
			std::cout  << blue <<" |";
			print_name(bananaphone.contact[i].first_name);
			print_name(bananaphone.contact[i].last_name);
			print_name(bananaphone.contact[i].nick_name);
			std::cout << std::endl;
			std::cout << "|----------|----------|----------|----------|" << std::endl;
		}
	}
	
	std::cout << na;
	std::cout << red << " Index 0 -> CANCELL" << na << std::endl;
	std::cout << "Enter an Index for see details: ";
	std::cin >> enter;
	while (!enter_index(bananaphone, enter)){
		std::cout << "Enter an Index for see details: ";
		std::cin >> enter;
	}
}

bool	enter_index(Phonebook &bananaphone, std::string enter) {

	int	index;

	if (enter.length() > 1 || enter[0] < 48 || enter[0] > 56) {
		std::cout << "Error:\n Bad index." << std::endl;
		return (false);
	}
	if (enter[0] == 48){
		std::cout << "CANCELL" << std::endl;
	}
	else {
		index = atoi(enter.c_str());
		if (index > bananaphone.num_contacts) {
			std::cout << "Error:\n Contact doesn´t exist." << std::endl;
			return (false);
		}
		else {
			print_contact(index - 1, bananaphone);
		}
	}
	return (true);
}

void	print_contact(int index, Phonebook &bananaphone) {

	std::string	blue;
	std::string	na;

	blue = "\033[1;34m";
	na = "\033[0m";
	std::cout << blue << "First name: " << na;
	std::cout << bananaphone.contact[index].first_name << "." << std::endl;
	std::cout << blue << "Last name: " << na;
	std::cout << bananaphone.contact[index].last_name << "." << std::endl;
	std::cout << blue << "Nickname: " << na;
	std::cout << bananaphone.contact[index].nick_name << "." << std::endl;
	std::cout << blue << "Phone: " << na;
	std::cout << bananaphone.contact[index].phone << "." << std::endl;
	std::cout << blue << "Darkest secret: " << na;
	std::cout << bananaphone.contact[index].darkest_secret << "." << std::endl;
}	
