/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:59:32 by slazar            #+#    #+#             */
/*   Updated: 2023/11/09 22:28:39 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain 
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &old);
		Brain &operator=(const Brain &old);
		~Brain();
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

#endif