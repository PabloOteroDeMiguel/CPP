/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:43:33 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/19 14:12:44 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "bananaphone.hpp"

class Phonebook {
	public:
		Contact	contact[8];
		int		index;

		Phonebook (void);
		~Phonebook (void);

		void	startIndex();
};

#endif
