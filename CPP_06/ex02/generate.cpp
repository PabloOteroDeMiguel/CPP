/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:34 by potero            #+#    #+#             */
/*   Updated: 2023/01/11 08:37:04 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	random;

	srand((unsigned) time(NULL));
	random = rand() % 3;
	switch (random)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	case 2:
		return (new C);
	default:
		return (NULL);
	}
}

void	identify(Base *p)
{
	try
	{
		if (dynamic_cast<A*>(p))
			std::cout << "Is A" << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << "Is B" << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << "Is C" << std::endl;
	}
	catch(int e)
	{
		std::cout << "Is Null" << std::endl;
	}
/*
	try 
	{
		dynamic_cast<A*>(p);
		std::cout << "Is A" << std::endl;
	}
	try
	{
		dynamic_cast<B*>(p);
		std::cout << "Is B" << std::endl;
	}
	try
	{
		dynamic_cast<C*>(p);
		std::cout << "Is C" << std::endl;
	}
	catch
	{
		std::cout << "Is Null" << std::endl;
	}
*/
}
