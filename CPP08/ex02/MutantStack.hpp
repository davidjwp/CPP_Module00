/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 20:55:50 by djacobs           #+#    #+#             */
/*   Updated: 2024/02/25 21:53:05 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack: public std::stack<T>{

public:
	MutantStack();
	MutantStack(MutantStack&);
	~MutantStack();

	MutantStack& operator=(MutantStack&);
	
	std::stack<T> getStack();
};

#endif