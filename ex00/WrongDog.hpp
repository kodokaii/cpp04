/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 12:55:08 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
# define WRONGDOG_H

# include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
	public:
					WrongDog(void);
					WrongDog(WrongDog const &wrongDog);
					~WrongDog(void);
		void		makeSound(void) const;
		WrongDog	&operator=(WrongDog const &wrongDog);
};

#endif
