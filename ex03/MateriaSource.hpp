/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:46:37 by slazar            #+#    #+#             */
/*   Updated: 2023/11/11 11:36:31 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_materia[4];
		int			_count;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &original);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &original);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif