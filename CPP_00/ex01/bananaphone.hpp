/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bananaphone.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:12:18 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 13:18:22 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANANAPHONE_H
# define BANANAPHONE_H

#include <ostream>
#include <iostream>
#include <cctype>
#include "contacts.hpp"
#include "phonebook.hpp"

int		main(int argc, char **argv);
void	init();
bool	check_command(std::string command);

#endif
