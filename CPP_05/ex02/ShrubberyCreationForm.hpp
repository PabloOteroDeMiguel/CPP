/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:28:19 by potero            #+#    #+#             */
/*   Updated: 2022/12/20 12:32:40 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();	
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

		virtual void	execute(Bureaucrat const & executor) const;
		virtual void	action(void) const;


};

#endif
