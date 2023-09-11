/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_NonMemeberAttFn.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:46:46 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/11 14:53:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "10_NonMemeberAttFn.hpp"

Sample::Sample( void ) {
	
	std::cout << "constructor called" <<  std::endl;
	Sample::_nbInst += 1;
	return;
}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	Sample::_nbInst -= 1;
	return;
}

int Sample::getNbInst( void ) {
	
	return Sample::_nbInst;
}

int Sample::_nbInst = 0;