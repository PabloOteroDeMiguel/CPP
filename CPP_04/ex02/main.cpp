/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:50 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 11:18:10 by potero-d         ###   ########.fr       */
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
//	const Animal*	meta = new Animal();							//Abstract class.
//	std::cout << "Animal type: " << meta->getType() << std::endl;

	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << "i says: ";
	i->makeSound(); //will output the cat sound!

	std::cout << "j says: ";
	j->makeSound();
	
//	std::cout << "meta says: ";
//	meta->makeSound();

//	delete meta;
	delete i;
	delete j;

	std::cout << "------------------CAT---------------------" << std::endl;

	Cat	*luke = new Cat();
	Cat	*leia = new Cat();
	
	std::cout << "Luke thoughts: " << std::endl;
	luke->getBrain()->thoughts();
	std::cout << "Leia thoughts: " << std::endl;
	leia->getBrain()->thoughts();
	std::cout << "Set an idea" << std::endl;
	luke->getBrain()->setIdea("It's that some Turkey", 10);
	*leia = *luke;
	std::cout << "Luke thoughts: " << std::endl;
	luke->getBrain()->thoughts();
	std::cout << "Leia thoughts: " << std::endl;
	leia->getBrain()->thoughts();
	std::cout << "Set a New idea" << std::endl;
	luke->getBrain()->setIdea("Let's have a Turkey Sandwich!", 10);
	std::cout << "Luke thoughts: " << std::endl;
	luke->getBrain()->thoughts();
	std::cout << "Leia thoughts: " << std::endl;
	leia->getBrain()->thoughts();

	delete luke;
	delete leia;
	
	std::cout << "------------------DOG---------------------" << std::endl;
	
	Dog	*otto = new Dog();
	Dog	*tamal = new Dog();
	
	std::cout << "Otto thoughts: " << std::endl;
	otto->getBrain()->thoughts();
	std::cout << "Tamal thoughts: " << std::endl;
	tamal->getBrain()->thoughts();
	std::cout << "Set an idea" << std::endl;
	otto->getBrain()->setIdea("It's that some Ham", 10);
	*tamal = *otto;
	std::cout << "Otto thoughts: " << std::endl;
	otto->getBrain()->thoughts();
	std::cout << "Tamal thoughts: " << std::endl;
	tamal->getBrain()->thoughts();
	std::cout << "Set a New idea" << std::endl;
	otto->getBrain()->setIdea("Let's have a Ham Sandwich!", 10);
	std::cout << "Otto thoughts: " << std::endl;
	otto->getBrain()->thoughts();
	std::cout << "Tamal thoughts: " << std::endl;
	tamal->getBrain()->thoughts();

	delete otto;
	delete tamal;

	std::cout << "----------------ARRAY---------------------" << std::endl;

	const Animal*	litter[4];
	int		n;

	n = 0;

	while (n < 4) {
		
		if (n % 2 == 0)
			litter[n] = new Dog();
		else
			litter[n] = new Cat();
		n++;
	}
	n = 0;
	while (n < 4) {

		delete litter[n];
		n++;
	}
}
