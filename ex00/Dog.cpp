/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 13:22:55 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog): Animal(dog)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
}

Dog		&Dog::operator=(Dog const &dog)
{
	*static_cast<Animal *>(this) = dog;
	return (*this);
}
