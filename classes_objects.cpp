/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   classes_objects.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:14:56 by potero            #+#    #+#             */
/*   Updated: 2022/10/18 12:04:14 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

class Book {
	public:
		std::string	title;
		std::string author;
		int			pages;
};


int main() {

	Book	book1;
	Book	book2;

	book1.title = "Harry Potter";
	book1.author = "JKR";
	book1.pages = 500;

	book2.title = "Loed Of The Rings";
	book2.author = "Tolkein";
	book2.pages = 503;

	std::cout << book1.title << std::endl;

	return (0);
}
