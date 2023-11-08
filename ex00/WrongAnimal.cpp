/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:46:13 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 18:55:51 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called with no type" << std::endl;
	type = "Wrong no type";
}

WrongAnimal::WrongAnimal(std::string tp) : type(tp)
{
	std::cout << "WrongAnimal constructor called with type : " << tp << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) : type(obj.type)
{
	std::cout << "WrongAnimal copy constructor called to copy from this type : " << obj.type << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called with type : " << type << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal type : " << type << " makes a sound" << std::endl;
}


