/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:18:37 by djacobs           #+#    #+#             */
/*   Updated: 2024/01/07 12:51:02 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal{

public:

	Cat(void);
	Cat(Cat& cpy);
	~Cat(void);

	Cat&	operator=(Cat& d1);
	virtual void	makeSound(void) const;
};

#endif