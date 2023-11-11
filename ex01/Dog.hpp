/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:21:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 15:59:23 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
	private :
		Brain *brain;
	public :
		Dog();
		Dog(const Dog &original);
		Dog &operator=(const Dog &original);
		~Dog();
		void makeSound() const;
		std::string getType() const;
};

#endif