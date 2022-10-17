/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   switch_statements.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:26:06 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 11:55:57 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

std::string	getDayOfWeek(int dayNum) {

	std::string	dayName;

	switch (dayNum) {
	case 0 :
		dayName =  "Sunday";
		break;
	case 1 :
		dayName =  "Monday";
		break;
	case 2 :
		dayName =  "Tuesday";
		break;
	case 3 :
		dayName =  "Wednesday";
		break;
	case 4 :
		dayName =  "Thursday";
		break;
	case 5 :
		dayName =  "Friday";
		break;
	case 6 :
		dayName =  "Saturday";
		break;
	default	:
		dayName = "Error";
	return (dayName);
	}

	return (dayName);
}

int	main() {

	int	day;
	std::cout << "Enter a day number: ";
	std::cin >> day;

	std::cout << getDayOfWeek(day) << std::endl;

	return (0);
}
