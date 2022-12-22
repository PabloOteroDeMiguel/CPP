/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:28:19 by potero            #+#    #+#             */
/*   Updated: 2022/12/22 13:54:25 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();	
		ShrubberyCreationForm(ShrubberyCreationForm const & cpy);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

		void	action(void) const;


};

#endif
