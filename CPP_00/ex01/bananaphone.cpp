/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bananaphone.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:34:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/20 15:02:52 by potero           ###   ########.fr       */
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
	std::cout << "\033[0m" << std::endl;
}

bool	check_command(std::string command, Phonebook &bananaphone) {

	if (command == "ADD") {
		std::cout << "You choose \033[1;32m(ADD).";
		std::cout << "\033[0m" << std::endl;
		add(bananaphone);
	}
	else if (command == "SEARCH") {
		std::cout << "You choose \033[1;33m(SEARCH).";
		std::cout << "\033[0m" << std::endl;
		search(bananaphone);
	}
	else if (command == "EXIT") {
		std::cout << "You choose \033[1;31m(EXIT).";
		std::cout << "\033[0m" << std::endl;
		return (true);
	}
	else {
		std::cout << "Error\n Bad command, please repeat." << std::endl;
	}
	return (false);
}

int	main(int argc, char **argv) {

	Phonebook	bananaphone;
	std::string	command;

	argv = 0;
	if (argc == 1) {
		init();
		bananaphone.startIndex();
		bananaphone.setNumContacts();
	}
	else {
		std::cout << "Error:\n Bad arguments." << std::endl;
		return (0);
	}
	std::cout << "Choose an option: ";
	std::cout << "\033[1;32m(ADD) ";
	std::cout << "\033[1;33m(SEARCH) ";
	std::cout << "\033[1;31m(EXIT)";
	std::cout << "\033[0m" << std::endl;
	std::cin >> command;
	while (!check_command(command, bananaphone)) {
		std::cout << "Choose an option: ";
		std::cout << "\033[1;32m(ADD) ";
		std::cout << "\033[1;33m(SEARCH) ";
		std::cout << "\033[1;31m(EXIT)";
		std::cout << "\033[0m" << std::endl;
		std::cin >> command;
	}

	return (0);
}
