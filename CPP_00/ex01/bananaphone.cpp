/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bananaphone.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:34:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 13:19:08 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bananaphone.hpp"

void	init() {
	std::cout << "\033[1;33m";
	std::cout << " ____    __    _  _    __    _  _    __    ____  _   _  _____  _  _  ____ " << std::endl;
	std::cout << "(  _ \\  /__\\  ( \\( )  /__\\  ( \\( )  /__\\  (  _ \\( )_( )(  _  )( \\( )( ___)" << std::endl;
	std::cout << " ) _ < /(__)\\  )  (  /(__)\\  )  (  /(__)\\  )___/ ) _ (  )(_)(  )  (  )__) " << std::endl;
	std::cout << "(____/(__)(__)(_)\\_)(__)(__)(_)\\_)(__)(__)(__)  (_) (_)(_____)(_)\\_)(____)" << std::endl;
	std::cout << "\033[0m";
}

bool	check_command(std::string command) {

	if (command == "ADD") {
		std::cout << "You choose \033[1;32m(ADD).";
		std::cout << "\033[0m" << std::endl;
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

	std::string	command;

	argv = 0;
	if (argc == 1) {
		init();;
	}
	else {
		std::cout << "Error:\n Bad arguments." << std::endl;
	}
	command = "";
	while (!check_command(command)) {
		std::cout << "Choose an option: ";
		std::cout << "\033[1;32m(ADD) ";
		std::cout << "\033[1;33m(SEARCH) ";
		std::cout << "\033[1;31m(EXIT)";
		std::cout << "\033[0m" << std::endl;
		std::cin >> command;
	}


	return (0);
}
