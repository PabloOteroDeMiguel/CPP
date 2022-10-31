/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:49:58 by potero-d          #+#    #+#             */
/*   Updated: 2022/10/31 12:28:30 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<ostream>

#ifndef KAREN_HPP
#define KAREN_HPP

class	Karen {
	public:
		void	complain( std::string level );

	private:
		std::string	_name;

		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );


#endif
