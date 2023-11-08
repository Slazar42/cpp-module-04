/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:12 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 17:34:01 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called with default type : Cat" << std::endl;
	type = "Cat";
}
Cat::Cat(std::string tp) : Animal(tp)
{
	std::cout << "Cat constructor called with type : " << tp << std::endl;
	type = tp;
}

Cat::Cat(const Cat &original)
{
	std::cout << "Cat copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called with type : " << type << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat type : " << type << " makes a sound" << std::endl;
}