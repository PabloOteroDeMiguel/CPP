/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:11:05 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/20 16:19:15 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bananaphone.hpp"

void	add(Phonebook &bananaphone) {

	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone;
	std::string	secret;
	int			index;

	if (bananaphone.index == 8) {
		std::cout << "Memory full. Deleting oldest contact..." << std::endl;
		bananaphone.index = 0;
	}
	index = bananaphone.index;

	std::cout << "First name: ";
	std::cin >> first_name;
	std::cout << "Last name: ";
	std::cin >> last_name;
	std::cout << "Nickname: ";
	std::cin >> nick_name;
	bananaphone.contact[index].setContact(first_name, last_name, nick_name);

	std::cout << "Phone: ";
	std::cin >> phone;
	while (!valid_phone(phone)) {
		std::cout << "Invalid phone number, please repeat." << std::endl;
		std::cout << "Phone: ";
		std::cin >> phone;
	}
	bananaphone.contact[index].setPhone(phone);

	std::cout << "Darkest secret: ";
	std::cin >> secret;
	bananaphone.contact[index].setSecret(secret);

	if (bananaphone.num_contacts < 8) {
		bananaphone.num_contacts++;
	}
	bananaphone.contact[index].setIndex(index + 1);
	bananaphone.index++;
}

bool	valid_phone(std::string phone) {

	int	i;

	if (phone.length() != 9) {
		return (false);
	}

	for (i = 0; i < 9; i++) {
		if (phone[i] < 48 || phone[i] > 57) {
			return (false);
		}
	}
	return (true);
}
