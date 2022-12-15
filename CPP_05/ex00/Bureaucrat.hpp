/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:39 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 18:23:06 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include<ostream>

class Bureaucrat {

	public:

		//Bureaucrat();
		Bureaucrat(std::string const & name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat& cpy);
		Bureaucrat&	operator=(Bureaucrat& rhs);


		void	GradeTooHighException();
		void	GradeTooLowException(void);

	private:

		const std::string	_name;
		int					_grade;

#endif
