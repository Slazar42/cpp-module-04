/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:07:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 17:33:31 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called with default type : Dog" << std::endl;
	type = "Dog";
}
Dog::Dog(std::string tp) : Animal(tp)
{
	std::cout << "Dog constructor called with type : " << tp << std::endl;
	type = tp;
}

Dog::Dog(const Dog &original)
{
	std::cout << "Dog copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called with type : " << type << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog type : " << type << " makes a sound" << std::endl;
}