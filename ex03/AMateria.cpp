/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 21:18:27 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{ 
}

AMateria::AMateria(std::string const &type): type(type)
{
}

AMateria::AMateria(AMateria const &aMateria): type(aMateria.type)
{
}

AMateria::~AMateria(void)
{
}

std::string const	&AMateria::getType(void) const
{
	return (this->type);
}

void		AMateria::use(ICharacter &target __attribute__((unused)))
{
}

AMateria			&AMateria::operator=(AMateria const &aMateria)
{
	this->type = aMateria.type;
	return (*this);
}
