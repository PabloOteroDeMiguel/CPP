/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 11:44:44 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	main() {

	Karen	karen;
	std::string	level;

	std::cout << "What is Karen yelling? " << std::endl;
	std::cin >> level;
	karen.complain(level);
}

	
