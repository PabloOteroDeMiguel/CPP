/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:34 by potero            #+#    #+#             */
/*   Updated: 2023/01/10 18:51:46 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
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
//	try catch
	if (dynamic_cast<A*>(p))
		std::cout << "Is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Is C" << std::endl;
}
