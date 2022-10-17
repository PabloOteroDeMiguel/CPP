/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   guess_game.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:43:01 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/17 12:58:42 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <cmath>

int main() {

	int		secretNumber;
	int		guess;
	int		count;
	int 	limit;
	bool	outOfGuesses = false;

	count = 0;
	limit = 3;
	secretNumber = 7;
	std::cout << "Enter guess (0 to 9): ";
	std::cin >> guess;
	count++;
	while (secretNumber != guess && !outOfGuesses) {
		if (count < limit) {
			std::cout << "Enter guess (0 to 9): ";
			std::cin >> guess;
			count++;
		}
		else {
			outOfGuesses = true;
		}
	}
	if (outOfGuesses) {
		std::cout << "You lose!" << std::endl;
	}
	else {
	std::cout << "You win! SECRET NUMBER is " << guess << std::endl;
	}

	return (0);
}
