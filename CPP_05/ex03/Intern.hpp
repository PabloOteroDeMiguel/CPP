/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:02:52 by potero            #+#    #+#             */
/*   Updated: 2022/12/23 12:24:48 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	typedef Form* (Intern::*form)(std::string); //Store a function to a variable Google ;)

	public:

		Intern();
		~Intern();
		Intern(Intern & cpy);
		Intern& operator=(Intern const & rhs);

		Form*	makeForm(std::string name, std::string target);
		Form*	makeTreeForm(std::string target);
		Form*	makeRobotoForm(std::string target);
		Form*	makePardonForm(std::string target);

	private:
	
		std::string	forms[3];
		form	knowForms[3];

};

#endif
