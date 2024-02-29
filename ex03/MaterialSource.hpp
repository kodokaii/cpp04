/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MaterialSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlaerema <nlaerema@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:58:17 by nlaerema          #+#    #+#             */
/*   Updated: 2024/02/29 21:10:30 by nlaerema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIALSOURCE_H
# define MATERIALSOURCE_H

# include "IMateriaSource.hpp"

# define MAX_LEARN_MATERIA 2

class MaterialSource: public IMateriaSource
{
	private:
		AMateria	*materias[MAX_LEARN_MATERIA];

	public:
						MaterialSource(void);
						MaterialSource(MaterialSource const &materialSource);
						~MaterialSource(void);
		void			learnMateria(AMateria *materia);
		AMateria		*createMateria(std::string const &type);
		MaterialSource	&operator=(MaterialSource const &materialSource);
};

#endif
