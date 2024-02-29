/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 21:11:09 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MaterialSource.hpp"

MaterialSource::MaterialSource(void)
{
	for (unsigned int i(0); i < MAX_LEARN_MATERIA; i++)
		this->materias[i] = NULL;
}

MaterialSource::MaterialSource(MaterialSource const &materialSource)
{
	for (unsigned int i(0); i < MAX_LEARN_MATERIA; i++)
		this->materias[i] = materialSource.materias[i];
}

MaterialSource::~MaterialSource(void)
{
	for (unsigned int i(0); i < MAX_LEARN_MATERIA; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

void			MaterialSource::learnMateria(AMateria *materia)
{
	unsigned int	idx;

	for (idx = 0; idx < MAX_LEARN_MATERIA && this->materias[idx]
		&& this->materias[idx]->getType() != materia->getType(); idx++);
	if (idx < MAX_LEARN_MATERIA)
	{
		if (this->materias[idx])
			delete this->materias[idx];
		this->materias[idx] = materia->clone();
	}
}

AMateria		*MaterialSource::createMateria(std::string const &type)
{
	unsigned int	idx;

	for (idx = 0; idx < MAX_LEARN_MATERIA; idx++)
	{
		if (this->materias[idx] && this->materias[idx]->getType() == type)
			return (this->materias[idx]->clone());
	}
	return (NULL);
}

MaterialSource	&MaterialSource::operator=(MaterialSource const &materialSource)
{
	for (unsigned int i(0); i < MAX_LEARN_MATERIA; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (materialSource.materias[i])
			this->materias[i] = materialSource.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return (*this);
}
