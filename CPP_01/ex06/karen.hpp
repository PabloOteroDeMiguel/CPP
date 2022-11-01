/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:58 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/01 12:24:21 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef KAREN_HPP
#define KAREN_HPP

#include<iostream>
#include<ostream>
#include<string.h>


class	Karen {
	public:
		Karen(void);
		~Karen(void);
		void		complain(int level);
		void		setName(std::string);
		std::string	getName(void);
		void		test(std::string str);
		void		test2(std::string str);

	private:
		std::string	_name;

		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);
		void		what(void);
};

typedef	void (Karen::* pointer)();

#endif
