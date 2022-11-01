/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 12:24:15 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	main(int argc, char **argv) {

	Karen		karen;
	int			idx;
	std::string	level[4];
	std::string	order;

	if (argc !=  2) {

		std::cout << "Karen is yelling so many things at same time!" << std::endl;
		return(0);
	}

	order = (std::string)(argv[1]);
	level[0] = "DEBUG"; 
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
	idx = 0;
	while (idx < 4) {
		
		if (order == level[idx])
			break;
		idx++;
	}
	karen.complain(idx);
	return (0);
}

	
