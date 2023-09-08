/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_visibility.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:37:41 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:49:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "07_visibility.class.hpp"

Sample::Sample( void ) {

	std::cout << "constructor called" << std::endl;
	this->publicFoo = 0;
	std::cout << "this->publicFoo = " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo = " << this->_privateFoo << std::endl;
	this->publicBar();
	this->_privateBar();
	return;
}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::publicBar( void ) const {
	
	std::cout << "memeber functuion public called" << std::endl;
	return;
}

void	Sample::_privateBar( void ) const {
	
	std::cout << "member function private called" << std::endl;
	return;
}