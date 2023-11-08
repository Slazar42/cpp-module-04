/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:08 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 18:56:49 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
	public :
		Cat();
		Cat(std::string type);
		Cat(const Cat &original);
		Cat &operator=(const Cat &original);
		~Cat();
		void makeSound() const;
		std::string getType() const;
};

#endif