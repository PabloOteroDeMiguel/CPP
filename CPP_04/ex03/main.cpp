/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:43:14 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/14 14:36:23 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"


void	leaks(void) {
	system("leaks a.out");
}

int	main(void) {

	//atexit(leaks);
	//AMateria*	m = new AMateria()			//Abstract class.;
	//std::cout << m->getType() << std::endl;
	AMateria*	c = new Cure();
	AMateria*	i = new Ice();

	AMateria*	cclone;
	AMateria*	iclone;
   	cclone = c->clone();
	iclone = i->clone();
	
	delete cclone;
	delete iclone;
	delete c;
	delete i;

	/*
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	*/
	return (0);

}
