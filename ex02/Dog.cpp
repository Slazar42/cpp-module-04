/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:07:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 18:31:23 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called with default type : " << type << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &original)
{
	std::cout << "Dog copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj){
		type = obj.type;
		brain = new Brain();
		for (int i = 0; i < 100; i++)
			brain->setIdea(i, obj.brain->getIdea(i));
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called with type : " << type << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Dog type : " << type << " makes a sound" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}