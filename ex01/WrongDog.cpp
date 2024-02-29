/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 13:23:18 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal("wrongDog")
{
	std::cout << "WrongDog: Default constructor called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &wrongDog): WrongAnimal(wrongDog)
{
	std::cout << "WrongDog: Copy constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog: destructor called" << std::endl;
}

void		WrongDog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
}

WrongDog	&WrongDog::operator=(WrongDog const &wrongDog)
{
	*static_cast<WrongAnimal *>(this) = wrongDog;
	return (*this);
}
