/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:12 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 18:32:34 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called with default type : "<< type << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &original) 
{
	std::cout << "Cat copy constructor called to copy from this type : " << original.type << std::endl;\
	*this = original;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj){
		type = obj.type;
		brain = new Brain();
		for (int i = 0; i < 100; i++)
			brain->setIdea(i, obj.brain->getIdea(i));
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called with type : " << type << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat type : " << type << " makes a sound" << std::endl;
}

Brain& Cat::getBrain() const
{
	return (*brain);
}


void Cat::setBrain(Brain &b)
{
	this->brain = &b;
}

std::string Cat::getType() const
{
	return (type);
}