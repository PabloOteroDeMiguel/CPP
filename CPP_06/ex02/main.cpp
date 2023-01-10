/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:48:43 by potero            #+#    #+#             */
/*   Updated: 2023/01/10 18:51:36 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {

	Base *first = generate();
	std::cout << "First: ";
	identify(first);

	Base *second = generate();
	std::cout << "Second: ";
	identify(second);

	Base *last = generate();
	std::cout << "Last: ";
	identify(last);

	delete first;
	delete second;
	delete last;
}
