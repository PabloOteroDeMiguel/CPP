/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: potero-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:18:10 by potero-d          #+#    #+#             */
/*   Updated: 2022/12/15 13:06:23 by potero-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter {

	public:

		Character(void);
		Character(std::string const& name);
		~Character(void);
		Character(Character& cpy);
		Character&	operator=(Character& rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
		void printMateria();

	private:

		std::string	_name;
		AMateria	*materia[4];
};

#endif
