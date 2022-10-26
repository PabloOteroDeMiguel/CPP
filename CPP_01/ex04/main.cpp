/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:36:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/26 22:04:10 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream> 
#include <ostream> 


int	main(int argc, char **argv) {

	int 			i;
	std::string		s1;
	std::string		s2;
	int				length_buffer;
	int				length;
	int				s1_lenght;
	int				s2_lenght;
	std::size_t		found;
	std::fstream	fs;
	std::string		new_file;
	std::string		copy = "";

	if (argc != 4) {
		std::cout << "Error: " << std::endl;
		std::cout << "Bad number of arguments." << std::endl;
		return (0);
	}

	s1 = argv[2];
	s2 = argv[3];

	s1_lenght = s1.length();
	s2_lenght = s2.length();
	std::cout << "String for search: " << s1 << std::endl;
	std::cout << "Replace string: " << s2 << std::endl;
	std::cout << "s1_lenght: " << s1_lenght << std::endl;
	std::cout << "----------------" << std::endl;

	std::ifstream fd (argv[1], std::ifstream::binary);
	// get length of file:
	fd.seekg (0, fd.end);
    length_buffer = fd.tellg();
    length = length_buffer;
    fd.seekg (0, fd.beg);
	// allocate memory:
	char	*buffer = new char [length_buffer];
	// read data as a block:
	fd.read(buffer, length_buffer);
	fd.close();

	std::cout.write (buffer,length_buffer);
	std::cout << "----------------" << std::endl;
/*
	std::cout << buffer[0] << std::endl;
	std::cout << buffer[1] << std::endl;
	std::cout << length_buffer << std::endl;
	std::cout << length << std::endl;
	std::cout << "----------------" << std::endl;
*/
	i = 0;
	while (i < length) {

		copy += buffer[i];
		i++;
	}
	copy[i] = 0;
	new_file = "test";
	fs.open (new_file, std::fstream::in | std::fstream::out | std::fstream::app);
	found = copy.find(s1);
	while (found != std::string::npos) {

		fs << copy.substr(0, found);
		fs << s2;
		copy = copy.substr(found + s1_lenght, length);
		found = copy.find(s1);
	}
	fs << copy;
	fs.close();

	delete[] buffer;
}
