/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 23:17:40 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): name("Unamed")
{
	for (unsigned int i(0); i < MAX_MATERIA; i++)
		this->materias[i] = NULL;
}

Character::Character(std::string const &name): name(name)
{
	for (unsigned int i(0); i < MAX_MATERIA; i++)
		this->materias[i] = NULL;
}

Character::Character(Character const &character): name(character.name)
{
	for (unsigned int i(0); i < MAX_MATERIA; i++)
	{
		if (character.materias[i])
			this->materias[i] = character.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
}

Character::~Character(void)
{
	for (unsigned int i(0); i < MAX_MATERIA; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void				Character::equip(AMateria *m)
{
	unsigned int	idx;
	
	for (idx = 0; idx < MAX_MATERIA && this->materias[idx]; idx++);
	if (idx < MAX_MATERIA)
		this->materias[idx] = m->clone();
}

void				Character::unequip(int idx)
{
	if (0 <= idx && idx < MAX_MATERIA)
	{
		this->floor.leftItem(this->materias[idx]);
		this->materias[idx] = NULL;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (0 <= idx && idx < MAX_MATERIA && this->materias[idx])
		this->materias[idx]->use(target);
}

Character			&Character::operator=(Character const &character)
{
	this->name = character.name;
	for (unsigned int i(0); i < MAX_MATERIA; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
		if (character.materias[i])
			this->materias[i] = character.materias[i]->clone();
		else
			this->materias[i] = NULL;
	}
	return (*this);
}
