/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:48 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/12 16:44:51 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {

	public:

		Cat(void);
		~Cat(void);
		Cat(Cat& cpy);
		Cat&		operator=(Cat& rhs);
		void		makeSound() const;
		Brain*	getBrain();

	private:
		
		Brain	*brain;

};

#endif
