/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 23:12:35 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_H
# define FLOOR_H

# include "AMateria.hpp"

class Floor
{
	private:
		AMateria	*item;

	public:
				Floor(void);
				Floor(Floor const &floor);
				~Floor(void);
		void	leftItem(AMateria *item);
		Floor	&operator=(Floor const &floor);
};

#endif
