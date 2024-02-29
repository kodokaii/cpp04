/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 16:39:05 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


					Brain::Brain(void):	ideasCount(0)
{
	std::cout << "Brain: Default constructor called" << std::endl;
}

					Brain::Brain(Brain const &brain):	ideasCount(brain.ideasCount)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	for (unsigned int i(0); i < brain.ideasCount; i++)
		this->ideas[i] = brain.ideas[i];
}

					Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
}

void				Brain::newIdea(std::string const &idea)
{
	if (this->ideasCount < IDEAS_COUNT)
		this->ideas[this->ideasCount++] = idea;
	else
	{
		for (unsigned int i(1); i < IDEAS_COUNT; i++)
			this->ideas[i - 1] = this->ideas[i];
		this->ideas[IDEAS_COUNT - 1] = idea;
	}
}

std::string			Brain::getIdea(unsigned int index) const
{
	if (index < this->ideasCount)
		return (this->ideas[index]);
	return ("");
}

unsigned int		Brain::getIdeasCount(void) const
{
	return (this->ideasCount);
}

Brain				&Brain::operator=(Brain const &brain)
{
	for (unsigned int i(0); i < brain.ideasCount; i++)
		this->ideas[i] = brain.ideas[i];
	this->ideasCount = brain.ideasCount;
	return (*this);
}
