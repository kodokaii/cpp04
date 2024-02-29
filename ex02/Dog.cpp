/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 16:26:34 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("dog"),
				brain(new Brain)
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog):	Animal(dog),
							brain(new Brain(*dog.brain))
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
	std::cout << "Dog: ideas before death" << std::endl;
	for (unsigned int i(this->brain->getIdeasCount()); i ; i--)
		std::cout << "\t" << this->brain->getIdea(i - 1) << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
}

void	Dog::sleep(void)
{
	this->brain->newIdea("My pillow !");
}

void	Dog::eat(void)
{
	this->brain->newIdea("Where did i bury my bone ?");
}

void	Dog::play(void)
{
	this->brain->newIdea("It's my stick !");
}

Dog		&Dog::operator=(Dog const &dog)
{
	*static_cast<Animal *>(this) = dog;
	*this->brain = *dog.brain;
	return (*this);
}
