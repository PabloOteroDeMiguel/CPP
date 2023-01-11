/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:48:43 by potero            #+#    #+#             */
/*   Updated: 2023/01/11 09:43:33 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {

	Base *first = generate();
	std::cout << "First: ";
	identify(first);
	sleep(1);

	Base *second = generate();
	std::cout << "Second: ";
	identify(second);
	sleep(1);

	Base *last = generate();
	std::cout << "Last: ";
	identify(last);
	sleep(1);

	Base *error = NULL;
	std::cout << "Error: ";
	identify(error);

	delete first;
	delete second;
	delete last;
}
