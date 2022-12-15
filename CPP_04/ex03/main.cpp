/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:43:14 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 13:07:42 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"


void	leaks(void) {
	system("leaks a.out");
}

int	main(void) {

	//atexit(leaks);
	//AMateria*	m = new AMateria()			//Abstract class.;
	//std::cout << m->getType() << std::endl;
	std::cout << ">-----     MATERIA     -----<" << std::endl;

	AMateria*	cure = new Cure();
	AMateria*	ice = new Ice();

	AMateria*	cclone;
	AMateria*	iclone;
   	cclone = cure->clone();
	iclone = ice->clone();
	
	delete cclone;
	delete iclone;

	std::cout << ">-----     CHARACTER     -----<" << std::endl;

	ICharacter* yo = new Character("Robot");
	ICharacter* tu = new Character("Human");

	yo->equip(cure);
	yo->equip(cure);
	yo->equip(ice);
	yo->equip(ice);
	yo->equip(cure);
//	yo->printMateria();

	yo->use(1, *tu);
	yo->use(3, *tu);
	tu->use(1, *yo);

	ICharacter* el = new Character("Copy");
	yo->printMateria();
//	el->printMateria();
	*el = *yo;
	el->printMateria();
	el->use(1, *tu);
	yo->use(1, *tu);
	yo->unequip(1);
	yo->printMateria();
	el->printMateria();
	yo->equip(ice);
	yo->use(1, *tu);
	el->use(1, *tu);
	delete yo;
	delete tu;
	delete cure;
	delete ice;

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
