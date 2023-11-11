/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:52:44 by slazar            #+#    #+#             */
/*   Updated: 2023/11/09 22:30:46 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "default";
}

Brain::Brain(const Brain &old)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = old;
}

Brain &Brain::operator=(const Brain &old)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &old)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = old.ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	return (ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

