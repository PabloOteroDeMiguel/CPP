/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:34 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 10:29:53 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"

int	main() {

	Karen	karen;
	//tengo que creear un typedef para hacer un array de funciones puntero y otra array con las palabras clave
	pntr2 pnt2 = &Karen::test2;
//	pntr pnt1 = &Karen::test;

//	(karen.*pnt1) ("shit");
	(karen.*pnt2) ("good shit");

	pntr2 pnt1 = &Karen::test;
	(karen.*pnt1) ("good shit");

	pntr2	arry[2];

	arry[0] = &Karen::test2;
	arry[1] = &Karen::test;
	(karen.*arry[0]) ("good shit");
	(karen.*arry[1]) ("good shit");
}
	
