/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_InitList2.class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:31:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:10:15 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "05_InitList.class.hpp"

// the normal way

Sample::Sample( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {
	
	std::cout << "constructor called" << std::endl;
	this->a1 = p1;
	std::cout << "this->a1 = " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "this->a3 = " << this->a3 << std::endl;
}

Sample::~Sample( void ) {
	
	std::cout << "destructor called" << std::endl;
	return;
}