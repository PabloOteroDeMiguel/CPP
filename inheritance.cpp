/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inheritance.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:34:27 by potero            #+#    #+#             */
/*   Updated: 2022/10/18 18:03:32 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

class Chef {
	public:
		void	makeChicken() {
			std::cout << "The chef makes chicken" << std::endl;
		}
		void	makeSalad() {
			std::cout << "The chef males salad" << std::endl;
		}
		void	makeSpecial() {
			std::cout << "The chef make burguer" <<std::endl;
		}
};

class SpanishChef : public Chef {
	public:
		void	makeCocido(){
			std::cout << "The chef makes cocido" << std::endl;
		} 
		void	getTortilla() {
			makeTortilla();
		}
		void	makeSpecial() {
			std::cout << "The chef make lamb" <<std::endl;
		}
	private:
		void	makeTortilla(){
			std::cout << "The chef makes Tortilla" << std::endl;
		} 

};

int main() {

	Chef		chef;
	SpanishChef	sp;

	chef.makeChicken();
	sp.makeSpecial();
	sp.makeCocido();
//	chef.makeCocido(); No hereda
//	sp.makeTortilla(); Es priv.
	sp.getTortilla();
	chef.makeSpecial();
	sp.makeSpecial();


	return (0);
}
