/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:12:29 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/10 13:05:09 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void) {

	Data		first("First");
	uintptr_t	a;
	a = serialize(&first);

	Data		*last = deserialize(a);
//	std::cout << last << std::endl;
	std::cout << last->getId() << std::endl;

	Data		*sum = deserialize(a + 1);
	Data		*rest = deserialize(a - 1);
	sum->getId();
	rest->getId();

	return(0);
}
