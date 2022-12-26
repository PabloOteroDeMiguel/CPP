/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 08:54:31 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/26 09:52:39 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Literal.hpp"

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cout << "Error: Wrong number of arguments." << std::endl;
	}
	else {

		Literal one(argv[1]);
		one.cast();
		std::cout << "String: " << one.getString() << std::endl;
		std::cout << "Int: " << one.getInt() << std::endl;
		std::cout << "Char: " << one.getChar() << std::endl;
		std::cout << "Float: " << one.getFloat() << std::endl;
		std::cout << "Double: " << one.getDouble() << std::endl;
	}

	return(0);
}
