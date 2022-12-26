/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 08:54:31 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/26 09:01:37 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<ostream>

int	main(int argc, char **argv) {

	if (argc != 2) {

		std::cout << "Error: Wrong number of arguments." << std::endl;
	}
	else {

		std::cout << argv[1] << std::endl;
	}

	return(0);
}
