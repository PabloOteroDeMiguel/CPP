/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:05:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/12 16:35:22 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include<iostream>
#include<ostream>

class Brain {

	public:

		Brain(void);
		~Brain(void);
		Brain(Brain& cpy);
		Brain&	operator=(Brain& rhs);

		std::string	getIdea(int i);
		void		setIdea(std::string idea, int i);
		void		thoughts(void) const;
		
	private:

		std::string _ideas[100];

};

#endif
