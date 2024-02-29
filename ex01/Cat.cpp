/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 16:37:59 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):	Animal("cat"),
				brain(new Brain)
{
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat):	Animal(cat),
							brain(new Brain(*cat.brain))
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
	std::cout << "Cat: ideas before death" << std::endl;
	for (unsigned int i(this->brain->getIdeasCount()); i; i--)
		std::cout << "\t" << this->brain->getIdea(i - 1) << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaouuuuu !" << std::endl;
}

void	Cat::sleep(void)
{
	this->brain->newIdea("if you wake me up, I'll scratch !");
}

void	Cat::eat(void)
{
	this->brain->newIdea("Where is my fish !");
}

void	Cat::play(void)
{
	this->brain->newIdea("Oh ! A red dot !");
}

Cat		&Cat::operator=(Cat const &cat)
{
	*static_cast<Animal *>(this) = cat;
	*this->brain = *cat.brain;
	return (*this);
}
