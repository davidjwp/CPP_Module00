/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:18:37 by djacobs           #+#    #+#             */
/*   Updated: 2024/01/10 19:14:23 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal{

private:
	Brain*	catBrain;

public:

	Cat(void);
	Cat(Cat& cpy);
	virtual ~Cat(void);

	Cat&	operator=(Cat& d1);
	virtual void	makeSound(void) const;
	virtual void	think(void) const;
};

#endif