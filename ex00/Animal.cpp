/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 13:15:56 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string const &type): type(type)
{
	std::cout << "Animal: All constructor called" << std::endl;
}

Animal::Animal(Animal const &animal): type(animal.type)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

std::string		Animal::getType(void) const
{
	return (this->type);
}

void			Animal::makeSound(void) const
{
	std::cout << "..." << std::endl;
}

Animal			&Animal::operator=(Animal const &animal)
{
	this->type = animal.type;
	return (*this);
}
