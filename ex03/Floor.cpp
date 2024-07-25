/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 23:16:10 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor(void): item(NULL)
{
}

Floor::Floor(Floor const &floor)
{
	if (floor.item)
		this->item = floor.item->clone();
	else
		this->item = NULL;
}

Floor::~Floor(void)
{
	delete this->item;
}

void	Floor::leftItem(AMateria *item)
{
	delete this->item;
	this->item = item;
}

Floor	&Floor::operator=(Floor const &floor)
{
	delete this->item;
	if (floor.item)
		this->item = floor.item->clone();
	else
		this->item = NULL;
	return (*this);
}
