/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:21:24 by potero-d          #+#    #+#             */
/*   Updated: 2023/01/10 12:48:42 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr) {

	uintptr_t cast;
	cast = reinterpret_cast<uintptr_t>(ptr);
	std::cout << "Serialization of " << ptr->getId();
	std::cout << " --> " << cast << std::endl;
	return(cast);
}

Data *deserialize(uintptr_t raw) {

	Data *cast = reinterpret_cast<Data*>(raw);
	std::cout << "Deserialization of " << raw;
	std::cout << " --> " << cast->getId() << std::endl;
	return(cast);
}
