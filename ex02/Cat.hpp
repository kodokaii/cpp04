/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 15:29:28 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Brain.hpp"
# include "Animal.hpp"

class Cat: public Animal
{
	private:
		Brain	*brain;

	public:
				Cat(void);
				Cat(Cat const &cat);
				~Cat(void);
		void	makeSound(void) const;
		void	sleep(void);
		void	eat(void);
		void	play(void);
		Cat		&operator=(Cat const &cat);
};

#endif
