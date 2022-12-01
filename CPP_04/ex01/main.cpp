/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:50 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 21:11:29 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void	leaks(void) {
	system("leaks a.out");
}

int	main(void) {

	//atexit(leaks);
	const Animal*	meta = new Animal();
//	const Animal* test = meta;
	std::cout << "Animal type: " << meta->getType() << std::endl;
//	std::cout << "Animal type: " << test->getType() << std::endl;

	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << "i says: ";
	i->makeSound(); //will output the cat sound!

	std::cout << "j says: ";
	j->makeSound();
	
	std::cout << "meta says: ";
	meta->makeSound();

	//std::cout << "Meta thoughts: " << std::endl;
	//meta->thoughts();  //NO compile because not all animals have brain.
	//std::cout << "Cat thoughts: " << std::endl;
	//i->getBrain()->thoughts();
	//std::cout << "Dog thoughts: " << std::endl;
	//j->thoughts();

	delete meta;
	delete i;
	delete j;
/*
	std::cout  << "--------------------------------------" << std::endl;
	const WrongAnimal*	wrongMeta = new WrongAnimal();
	std::cout << "WrongAnimal type: " << wrongMeta->getType() << std::endl;

	const WrongAnimal*	wrongCat = new WrongCat();
	std::cout << wrongCat->getType() << " " << std::endl;
	
	std::cout << "wrongCat says: ";
	wrongCat->makeSound(); //will output the cat sound!

	delete wrongMeta;
	delete wrongCat;
*/
}

