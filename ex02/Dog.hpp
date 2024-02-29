/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 15:30:10 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"
# include "Animal.hpp"

class Dog: public Animal
{
	private:
		Brain	*brain;

	public:
				Dog(void);
				Dog(Dog const &dog);
				~Dog(void);
		void	makeSound(void) const;
		void	sleep(void);
		void	eat(void);
		void	play(void);
		Dog		&operator=(Dog const &dog);
};

#endif
