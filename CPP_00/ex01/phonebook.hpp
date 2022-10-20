/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:43:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/20 13:50:17 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "bananaphone.hpp"

class Phonebook {
	public:
		Contact	contact[8];
		int		index;
		int		num_contacts;

		Phonebook (void);
		~Phonebook (void);

		void	startIndex();
		void	setNumContacts();
};

#endif
