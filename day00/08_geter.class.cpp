/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_geter.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:06:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 16:49:12 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "08_geter.class.hpp"

Sample::Sample( void ) {

	std::cout << "constructor called" << std::endl;
	this->setFoo( 0 );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;
	return;
}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	return;
}

int	Sample::getFoo( void ) const {

	return this->_foo;
}

void	Sample::setFoo( int v ) {

	if ( v >= 0 )
		this->_foo = v;
	return;
}
