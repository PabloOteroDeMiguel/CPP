/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:50 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 12:26:04 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	leaks(void) {
	system("leaks a.out");
}

int	main(void) {

	atexit(leaks);
	const Animal* meta = new Animal();
	std::cout << "Animal type: " << meta->getType() << std::endl;
	/*
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	*/
}

