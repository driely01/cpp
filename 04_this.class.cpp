/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_this.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:43:25 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:09:03 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "04_this.class.hpp"

Sample::Sample( void ) {
	
	std::cout << "constructor called" << std::endl;
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;
	this->bar();
	return;
}

Sample::~Sample( void ) {
	
	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::bar( void ) {
	
	std::cout << "member function bar called" << std::endl;
	return;
}