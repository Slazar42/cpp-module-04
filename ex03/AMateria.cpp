/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:20:38 by slazar            #+#    #+#             */
/*   Updated: 2023/11/11 10:15:38 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria()
{
}

AMateria::AMateria(const AMateria &original)
{
	*this = original;
}

AMateria &AMateria::operator=(const AMateria &original)
{
	if (this != &original)
	{
		this->_type = original._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

