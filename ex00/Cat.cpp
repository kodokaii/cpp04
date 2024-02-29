/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/28 14:12:42 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("cat")
{
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat): Animal(cat)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuu !" << std::endl;
}

Cat		&Cat::operator=(Cat const &cat)
{
	*static_cast<Animal *>(this) = cat;
	return (*this);
}
