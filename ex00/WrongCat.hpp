/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:42:39 by slazar            #+#    #+#             */
/*   Updated: 2023/11/08 17:43:20 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>

class WrongCat
{
	private:
		std::string type;
	public:
		WrongCat();
		WrongCat(std::string tp);
		WrongCat(const WrongCat &original);
		WrongCat &operator=(const WrongCat &obj);
		~WrongCat();
		void makeSound() const;
};

#endif