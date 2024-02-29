/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 13:16:10 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;

	public:
						WrongAnimal(void);
						WrongAnimal(std::string const &type);
						WrongAnimal(WrongAnimal const &wrongAnimal);
						~WrongAnimal(void);
		std::string		getType(void) const;
		void			makeSound(void) const;
		WrongAnimal		&operator=(WrongAnimal const &wrongAnimal);
};

#endif
