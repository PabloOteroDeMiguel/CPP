/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 16:08:32 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/20 17:42:25 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public:

		Form();
		Form(std::string name, int requiredSign, int requiredExecute, std::string target);
		virtual ~Form();
		Form(Form const & cpy);
		Form& operator=(Form const & rhs);

		std::string	getName() const;
		bool		getSigned() const;
		int			getRequiredSign() const;
		int			getRequiredExecute() const;
		void		beSigned(Bureaucrat const &buro);

		void			setSigned(bool b);
		std::string		getTarget() const;
		void			execute(Bureaucrat const & executor) const;
		virtual void	action(void) const = 0;

		class GradeTooHighException : virtual public std::exception {

			public:
				virtual const char* what() const throw();

		};
		class GradeTooLowException : virtual public std::exception {

			public:
				virtual const char* what() const throw();
		};
		class AlreadySignedException : virtual public std::exception {
		
			public:
				virtual const char* what() const throw();
		};
		class NotSignedException : virtual public std::exception {
		
			public:
				virtual const char* what() const throw();
		};

	private:

		std::string const	_name;
		bool				_signed;
		int const			_requiredSign;
		int const			_requiredExecute;
		std::string const	_target;
};

std::ostream& operator<<(std::ostream& out, const Form& form);

#endif
