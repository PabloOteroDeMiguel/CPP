/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifStatement.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:46:49 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/29 12:04:38 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <string>

int	main () {

	bool	isMale;
	
	isMale = false;
	if (isMale) {
		std::cout << "You are a male" << std::endl;
	}
	else {
		std::cout << "You are not male" << std::endl;
	}

	return 0;
}
