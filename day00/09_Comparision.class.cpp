/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_Comparision.class.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:11:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/09 14:55:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "09_Comparision.class.hpp"

Sample::Sample( int v ) : _foo( v ) {
	
	std::cout << "constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	
	std::cout << "destructor called" << std::endl;
	return;
}

int	Sample::getFoo( void ) const {
	
	return this->_foo;
}

int	Sample::compare( Sample * other ) const {

	if ( this->_foo < other->getFoo())
		return -1;
	else if (this->_foo > other->getFoo())
		return 1;
	return 0;
}