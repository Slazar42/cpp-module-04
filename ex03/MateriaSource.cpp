/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:46:34 by slazar            #+#    #+#             */
/*   Updated: 2023/11/11 11:36:38 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_count = 0;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &original)
{
	*this = original;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &original)
{
	if (this != &original)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i])
				delete this->_materia[i];
			this->_materia[i] = original._materia[i]->clone();
		}
		this->_count = original._count;
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_count < 4)
	{
		this->_materia[this->_count] = materia;
		this->_count++;
	}
}

AMateria		*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	}
	return (NULL);
}

