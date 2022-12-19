/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:04:39 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 12:04:45 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include<iostream>
#include<ostream>
#include<exception>

class Bureaucrat {

	public:

		//Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat& cpy);
		Bureaucrat&	operator=(Bureaucrat& rhs);

		std::string	getName(); 
		int			getGrade();

		class GradeTooHighException : virtual public std::exception {

			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : virtual public std::exception {

			public:
				virtual const char* what() const throw();
		};

	private:

		std::string const	_name;
		int					_grade;
};

#endif
