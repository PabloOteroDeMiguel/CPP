/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:54:17 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/10 12:33:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <ostream>

class Data {

	public:

		Data();
		Data(std::string id);
		~Data();
		Data(Data& cpy);
		Data&	operator=(Data& rhs);

		std::string getId();

	private:

		 std::string	_id;
	
};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif
