/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:43:48 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 17:51:29 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called with default type : WrongCat" << std::endl;
	type = "no type";
}

WrongCat::WrongCat(std::string tp)
{
	std::cout << "WrongCat constructor called with type : " << tp << std::endl;
	type = tp;
}

WrongCat::WrongCat(const WrongCat &original)
{
	std::cout << "WrongCat copy constructor called to copy from this type : " << original.type << std::endl;
	*this = original;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout << "WrongCat assignation operator called to assign from this type : " << obj.type << std::endl;
	if (this != &obj)
		type = obj.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called with type : " << type << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat type : " << type << " makes a sound" << std::endl;
}

