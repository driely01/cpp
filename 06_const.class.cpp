/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_const.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:43:04 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:05:02 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "06_const.class.hpp"

Sample::Sample( float const f ) : pi(f), qd(42) {
	
	std::cout << "constructor called" << std::endl;
	return;
}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	return;
}

void	Sample::bar( void ) const {
	
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;
	return;
}