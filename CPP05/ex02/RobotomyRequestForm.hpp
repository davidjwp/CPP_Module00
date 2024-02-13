/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 16:25:12 by djacobs           #+#    #+#             */
/*   Updated: 2024/02/13 18:39:11 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:

	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm&);
	RobotomyRequestForm(const char *N);
	~RobotomyRequestForm();

	void action(std::string) const;

	RobotomyRequestForm& operator=(RobotomyRequestForm&);
};


#endif