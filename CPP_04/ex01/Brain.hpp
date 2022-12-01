/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:05:30 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 12:12:11 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {

	public:

		Brain(void);
		~Brain(void);
		Brain(Brain& cpy);
		Brain			operator=(Brain& rhs);

	private:
		std::string ideas[100]:

};

#endif
