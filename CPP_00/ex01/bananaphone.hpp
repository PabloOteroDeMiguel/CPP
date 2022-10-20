/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bananaphone.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:18 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/20 16:07:38 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANANAPHONE_H
# define BANANAPHONE_H

#include <ostream>
#include <iostream>
#include <cctype>
#include <stdlib.h>
#include "contacts.hpp"
#include "phonebook.hpp"

class Phonebook;

int		main(int argc, char **argv);
void	init();
bool	check_command(std::string command, Phonebook &bananaphone);

/*ADD*/
void	add(Phonebook &bananaphone);
bool	valid_phone(std::string phone);

/*SEARCH*/
void	print_name(std::string name);
void	search(Phonebook &bananaphone);
bool	enter_index(Phonebook &bananaphone, std::string enter);
void	print_contact(int index, Phonebook &bananaphone);

#endif
