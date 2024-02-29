/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 23:17:06 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Floor.hpp"

# define MAX_MATERIA 4

class Character: public ICharacter
{
	private:
		std::string		name;
		AMateria		*materias[MAX_MATERIA];
		Floor			floor;

	public:
							Character(void);
							Character(std::string const &name);
							Character(Character const &character);
							~Character(void);
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		Character			&operator=(Character const &character);
};

#endif
