/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:24:27 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 18:22:19 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "No type";
	std::cout << "Animal constructor called with default type : " << type << std::endl;
}

Animal::Animal(const Animal &original)
{
	std::cout << "Animal copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

Animal &Animal::operator=(const Animal &obj)
{
	std::cout << "Animal assignation operator called to assign from this tpe : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called with type : " << type << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}
