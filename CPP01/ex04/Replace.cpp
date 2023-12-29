/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:38:37 by djacobs           #+#    #+#             */
/*   Updated: 2023/12/29 20:59:15 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.class.hpp"

Replace::Replace(void){}

Replace::~Replace(void){}

Replace::Replace(const std::ifstream &infile, const std::ofstream &outfile, std::string s1, std::string s2)
: in(&infile), out(&outfile), s1(s1), s2(s2){}

void	Replace::replaceFile(void)	const{
	std::string	cont;

	while (std::getline(this->in, cont)){
		if (!this->in->eof())
			cont += '\n';
		*this->out << s1;
	}
}

void	error(std::string msg){
	std::cerr << RED << "Error: " << RES << msg << std::endl;
}
