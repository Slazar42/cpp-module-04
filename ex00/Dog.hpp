/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:21:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/06 10:51:42 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
	public :
		Dog();
		Dog(std::string type);
		Dog(const Dog &original);
		Dog &operator=(const Dog &original);
		~Dog();
		void makeSound() const;
		std::string getType() const;
};

#endif