/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:58:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/11 15:09:51 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "10_NonMemeberAttFn.hpp"

void f0( void ) {
	
	Sample instance;
	std::cout << "number of instance : " << Sample::getNbInst() << std::endl;
	return;
}

void f1( void ) {

	Sample istance;
	std::cout << "number of instance : " << Sample::getNbInst() << std::endl;
	f0();
	return;
}

int main ( void ) {

	std::cout << "number of instance : " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "number of instance : " << Sample::getNbInst() << std::endl;
	return 0;
}