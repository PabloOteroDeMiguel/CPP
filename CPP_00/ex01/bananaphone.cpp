/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bananaphone.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:34:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 14:12:43 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bananaphone.hpp"

void	init() {
	std::cout << "\033[1;33m";
	std::cout << " ____    __    _  _    __    _  _    __    ";
	std::cout << "____  _   _  _____  _  _  ____ " << std::endl;
	std::cout << "(  _ \\  /__\\  ( \\( )  /__\\  ( \\( )  /_";
	std::cout << "_\\  (  _ \\( )_( )(  _  )( \\( )( ___)" << std::endl;
	std::cout << " ) _ < /(__)\\  )  (  /(__)\\  )  (  /(__)";
	std::cout << "\\  )___/ ) _ (  )(_)(  )  (  )__) " << std::endl;
	std::cout << "(____/(__)(__)(_)\\_)(__)(__)(_)\\_)(__)(_";
	std::cout << "_)(__)  (_) (_)(_____)(_)\\_)(____)" << std::endl;
	std::cout << "\033[0m";
}

bool	check_command(std::string command, Phonebook bananaphone) {

	if (command == "ADD") {
		std::cout << "You choose \033[1;32m(ADD).";
		std::cout << "\033[0m" << std::endl;
		add(bananaphone);
	}
	else if (command == "SEARCH") {
		std::cout << "You choose \033[1;33m(SEARCH).";
		std::cout << "\033[0m" << std::endl;
	}
	else if (command == "EXIT") {
		std::cout << "You choose \033[1;31m(EXIT).";
		std::cout << "\033[0m" << std::endl;
	}
	else {
		std::cout << "Error\n Bad command, please repeat." << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv) {

	Phonebook	bananaphone;
	std::string	command;

	argv = 0;
	if (argc == 1) {
		init();
		bananaphone.startIndex();
	}
	else {
		std::cout << "Error:\n Bad arguments." << std::endl;
	}
	command = "";
	while (!check_command(command, bananaphone)) {
		std::cout << "Choose an option: ";
		std::cout << "\033[1;32m(ADD) ";
		std::cout << "\033[1;33m(SEARCH) ";
		std::cout << "\033[1;31m(EXIT)";
		std::cout << "\033[0m" << std::endl;
		std::cin >> command;
	}

	std::cout << bananaphone.contact[0].first_name << std::endl;

	return (0);
}

void	add(Phonebook bananaphone) {

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
//	std::string	phone;
//	std::string	secret;
	int			index;

	index = bananaphone.index;
	if (bananaphone.index == 7) {
		std::cout << "Memory full. Deleting oldest contact..." << std::endl;
	}
	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nick_name;
	//bananaphone.contact[index](first_name, last_name, nick_name);
	bananaphone.index++;
}
