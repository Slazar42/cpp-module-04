/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:24:27 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 17:34:27 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called with default type : Animal" << std::endl;
	type = "Animal";
}

Animal::Animal(std::string tp)
{
	std::cout << "Animal constructor called with type : " << tp << std::endl;
	type = tp;
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
void Animal::makeSound() const
{
	std::cout << "Animal type : " << type << " makes a sound" << std::endl;
}