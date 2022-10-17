/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_loop.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:57:15 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 12:39:56 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>


int main() {

	int	index;

	index = 1;
	while (index <= 5) {
		std::cout << index << std::endl;
		index++;
	}

	/* do while loop first execute and then check de value*/
	do  {
		std::cout << index << std::endl;
		index++;
	}while (index <= 5); 


	return (0);
}
