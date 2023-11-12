/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:30:26 by slazar            #+#    #+#             */
/*   Updated: 2023/11/12 02:14:00 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

typedef struct s_inventory
{
	AMateria * save;
	s_inventory *next;

}t_inventory;

class Character : public ICharacter{
	private:
		std::string _name;
		AMateria *_inventory[4];
		t_inventory *inv;
	public:
		Character();
		Character(std::string name);
		Character(const Character &original);
		Character &operator=(const Character &original);
		virtual ~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		t_inventory * create_node(AMateria * tmp);
		void add_to_list(t_inventory **head , t_inventory *node);
		void free_inventory(t_inventory *head);
};

#endif