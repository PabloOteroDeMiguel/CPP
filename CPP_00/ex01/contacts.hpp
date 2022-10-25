/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:19:49 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 16:09:21 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

#include "bananaphone.hpp"

class Contact {
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone;
		std::string	darkest_secret;
		int			index;
		
		Contact (void);
		~Contact (void);

		//Contact(std::string aFirst_name, std::string aLast_name, std::string aNick_name) : first_name(aFirst_name), last_name(aLast_name), nick_name(aNick_name) {}; Hace lo mismo que l31
		Contact(std::string aFirst_name, std::string aLast_name, std::string aNick_name);	
		void	setPhone(std::string aPhone);
		void	setContact(std::string aFirst_name, std::string aLast_name,	std::string aNick_name);
		void	setIndex(int n);
		void	setSecret(std::string secret);
};

#endif

