/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:41:06 by potero            #+#    #+#             */
/*   Updated: 2022/10/18 14:57:29 by potero           ###   ########.fr       */
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

		Book() {
			title = "No title";
			author = "No author";
			pages = 0;
		}	
		Book( std::string aTitle, std::string aAuthor, int aPages) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}
};

int main() {

	Book	book1("Harry Potter", "JKR", 500);
	Book	book2("Lord Of The Rings", "Tolkein", 700);

	std::cout << book1.title << std::endl;
	book1.title = "Yo Robot";
	std::cout << book1.title << std::endl;

	Book	book3;
	std::cout << book3.title << std::endl;

	return (0);
}
