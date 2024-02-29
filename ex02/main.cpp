/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 16:58:32 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define ARRAY_SIZE	10

int	main(void)
{
	Animal	*animal_array[ARRAY_SIZE];

	for (unsigned int i(0); i < ARRAY_SIZE; i++)
	{
		if (i * 2 < ARRAY_SIZE)
			animal_array[i] = new Dog();
		else
			animal_array[i] = new Cat();
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < ARRAY_SIZE; i++)
	{
		animal_array[i]->makeSound();
		animal_array[i]->eat();
		animal_array[i]->play();
		animal_array[i]->sleep();
	}
	std::cout << std::endl;
	for (unsigned int i(0); i < ARRAY_SIZE; i++)
		delete animal_array[i];
	return (0);
}
