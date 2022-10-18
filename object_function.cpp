/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object_function.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:59:20 by potero            #+#    #+#             */
/*   Updated: 2022/10/18 15:06:54 by potero           ###   ########.fr       */
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

		Book( std::string aTitle, std::string aAuthor, int aPages) {
			title = aTitle;
			author = aAuthor;
			pages = aPages;
		}

		bool	isLong() {
			if (pages > 500){
				return true;
			}
			return false;	
		}
};

int main() {

	Book	book1("Harry Potter", "JKR", 500);
	Book	book2("Lord Of The Rings", "Tolkein", 700);

	std::cout << book1.title << "is long. " << book1.isLong() << std::endl;
	std::cout << book2.title << "is long. " << book2.isLong() << std::endl;

	return (0);
}
