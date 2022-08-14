/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sampleclass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 14:12:41 by potero-d          #+#    #+#             */
/*   Updated: 2022/08/12 14:48:29 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "sampleclass.hpp"

Sample::Sample(void) {

	std::cout << "Constructor called" << std::endl;
	return;
}

Sample::~Sample(void) {

	std::cout << "Destructor called" << std::endl;
	return;
}
