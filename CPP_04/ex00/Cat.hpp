/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:47:48 by potero-d          #+#    #+#             */
/*   Updated: 2022/11/29 16:47:25 by potero           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef "CAT_HPP"
# define

#include "Animal.hpp"

class Cat : virtual public Animal {

	public:

		Cat(void);
		~Cat(void);
		Cat(Cat& cpy);
		Cat		operator=(Cat& rhs);

};
