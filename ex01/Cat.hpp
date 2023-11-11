/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/10 16:53:27 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
	private :
		Brain *brain;
	public :
		Cat();
		Cat(const Cat &original);
		Cat &operator=(const Cat &original);
		~Cat();
		Brain& getBrain() const;
		void setBrain(Brain &b);
		void makeSound() const;
		std::string getType() const;
};

#endif