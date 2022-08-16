/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:55:52 by potero            #+#    #+#             */
/*   Updated: 2022/08/16 10:02:30 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>

void sayHi (std::string name) {

	std::cout << "Hello " << name << std::endl;

}

int	main () {

	sayHi("Robot!");

	return 0;
}
