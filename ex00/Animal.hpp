/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 13:35:10 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
						Animal(void);
						Animal(std::string const &type);
						Animal(Animal const &animal);
		virtual			~Animal(void);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		Animal			&operator=(Animal const &animal);
};

#endif
