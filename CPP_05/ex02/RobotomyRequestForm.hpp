/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:28:04 by potero            #+#    #+#             */
/*   Updated: 2022/12/22 14:17:15 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <stdlib.h> 
#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:

		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const & cpy);
		RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);

		void	action(void) const;
};

#endif
