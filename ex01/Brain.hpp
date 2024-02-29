/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 16:06:45 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>
# include <iostream>

# define IDEAS_COUNT	100

class Brain
{
	protected:
		std::string		ideas[IDEAS_COUNT];
		unsigned int	ideasCount;

	public:
							Brain(void);
							Brain(Brain const &brain);
							~Brain(void);
		void				newIdea(std::string const &idea);
		std::string			getIdea(unsigned int index) const;
		unsigned int		getIdeasCount(void) const;
		Brain				&operator=(Brain const &brain);
};

#endif
