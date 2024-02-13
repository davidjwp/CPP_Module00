/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djacobs <djacobs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 21:28:06 by djacobs           #+#    #+#             */
/*   Updated: 2024/02/13 18:30:14 by djacobs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

AForm::AForm(void): name("default form"), Signed(false), GradeToSign(0), GradeToExecute(0){}

AForm::AForm(AForm& F): name(F.getName()), Signed(F.getSigned()), GradeToSign(F.getGTS()), GradeToExecute(F.getGTE()){}

AForm::~AForm(void){}

int AForm::evalGTS(const int grade){
	if (grade < 1)
		throw AForm::GTSTooHigh();
	else if (grade > 150)
		throw AForm::GTSTooLow();
	return grade;
}

int AForm::evalGTE(const int grade){
	if (grade < 1)
		throw AForm::GTETooHigh();
	else if (grade > 150)
		throw AForm::GTETooLow();
	return grade;
}

AForm::AForm(const char *N, const int GTS, const int GTE): name(N), 
GradeToSign(AForm::evalGTS(GTS)), GradeToExecute(AForm::evalGTE(GTE)){}

char * AForm::getName(void){ return (char*)name;}

bool	AForm::getSigned(void){ return Signed;}

int AForm::getGTS(void) const{ return GradeToSign;}

int AForm::getGTE(void) const{ return GradeToExecute;}

void	AForm::beSigned(Bureaucrat& B){
	if (!Signed && Bureaucrat::getGrade(B) <= getGTS())
		Signed = true;
	else if (Bureaucrat::getGrade(B) > getGTS())
		throw AForm::GTSTooHigh();
}

void	AForm::setAttributes(const char *N, bool S){
	if (N)
		name = N;
	else
		name = "(null)";
	Signed = S;
}

void	AForm::execute(Bureaucrat const &B) const{
	if (Bureaucrat::getGrade(B) <= getGTS()){
		if (Bureaucrat::getGrade(B) <= getGTE())
			action(B.target);
		else throw AForm::GTETooLow();
	}
	else throw AForm::GTSTooLow();
}
