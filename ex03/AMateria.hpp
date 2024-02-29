/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 21:08:15 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	type;

	public:
							AMateria(void);
							AMateria(std::string const &type);
							AMateria(AMateria const &aMateria);
		virtual				~AMateria(void);
		std::string const	&getType(void) const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		AMateria			&operator=(AMateria const &aMateria);
};

#endif
