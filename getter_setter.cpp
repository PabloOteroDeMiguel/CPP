/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getter_setter.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:11:27 by potero            #+#    #+#             */
/*   Updated: 2022/10/18 15:31:29 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

class Book {
	private:
		std::string raiting;

	public:
		std::string	title;
		std::string author;
//		std::string raiting;

		Book( std::string aTitle, std::string aAuthor, std::string aRaiting) {
			title = aTitle;
			author = aAuthor;
		//	raiting = aRaiting;
			setRaiting(aRaiting);
		}

		void setRaiting(std::string aRaiting){
			if (aRaiting == "G" || aRaiting == "PG-13" ||
					aRaiting == "R" || aRaiting == "NR" ||aRaiting == "PG") {
				raiting = aRaiting;
			}
			else {
				raiting = "NR";
			}
		}
		
		std::string getRaiting() {
			return (raiting);
		}
};

int main() {

	Book	book1("Harry Potter", "JKR", "PG-13");
	Book	book2("Lord Of The Rings", "Tolkein", "PG-13");


//	std::cout << book2.title << " " << book2.raiting << std::endl; Es privado
	std::cout << book2.title << " " << book2.getRaiting()  << std::endl;
//	book2.raiting = "NA" Esto noo funciona porque es privado.
	book2.setRaiting("Na"); 
	std::cout << book2.title << " " << book2.getRaiting()  << std::endl;

	return (0);
}
