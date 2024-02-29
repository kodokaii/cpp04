/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 17:34:45 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
}

Ice::Ice(Ice const &ice): AMateria(ice.type)
{
}

Ice::~Ice(void)
{
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void		Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice			&Ice::operator=(Ice const &ice)
{
	*static_cast<AMateria *>(this) = ice;
	return (*this);
}
