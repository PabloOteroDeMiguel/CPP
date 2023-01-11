/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:46:34 by potero            #+#    #+#             */
/*   Updated: 2023/01/11 10:08:27 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Exception : virtual public std::exception {

			public:
				virtual const char* what() const throw();
		};

const char*	Exception::what() const throw() {

	return("Is NULL.");
}

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

void	tryIdentify(Base *p) {

		if (dynamic_cast<A*>(p))
			std::cout << "Is A" << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << "Is B" << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << "Is C" << std::endl;
		else
			throw Exception();
}


void	identify(Base *p)
{
	try
	{
		tryIdentify(p);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
