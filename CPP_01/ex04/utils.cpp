/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:16:27 by potero            #+#    #+#             */
/*   Updated: 2022/10/26 22:53:23 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	char_to_string(char *buffer, int length) {

	std::string copy = "";
	int			i;

	i = 0;
	while (i < length) {

		copy += buffer[i];
		i++;
	}
	copy[i] = 0;	

	return (copy);
}

std::string new_file_name(std::string file) {

	int			i;
	int			j;
	std::string	new_file = "";
	std::string	extension;

	extension = ".replace";
	i = 0;
	while (i < (int)file.length()) {
		
		new_file += file[i];
		i++;
	}
	for (j = 0; j < 8; j++) {
		new_file += extension[j];
	}
	return (new_file);
}
