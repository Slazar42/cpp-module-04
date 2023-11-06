/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:18:59 by slazar            #+#    #+#             */
/*   Updated: 2023/11/06 08:24:17 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
	private :
		std::string type;
	public :
		Animal();
		Animal(std::string type);
		Animal(const Animal &original);
		Animal &operator=(const Animal &original);
		~Animal();
};

#endif