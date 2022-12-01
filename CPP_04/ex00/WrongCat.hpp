/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:26:35 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/01 09:32:39 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

	public:

		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat& cpy);
		WrongCat			operator=(WrongCat& rhs);
		void		makeSound() const;

};

#endif
