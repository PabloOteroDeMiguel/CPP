/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:17:14 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/19 15:32:35 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {

	public:

		//Form();
		Form(std::string name, int requiredSign, _requiredExecute);
		~Form();
		Form(Formm& cpy);
		Form& operator=(Form& rhs);

		std::string	getName() const;
		bool		getSigned();
		int			getRequiredSign() const;
		int			getRequiredExecute() const;

	private:

		std::string const	_name;
		bool				_signed;
		int const			_requiredSign;
		int const			_requiredExecute;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
