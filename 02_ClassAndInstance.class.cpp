/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ClassAndInstance.class.cpp                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:48:48 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:06:50 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "02_ClassAndInstance.class.hpp"

Sample::Sample( void ) {
	std::cout << "constractor called" << std::endl;
	return;
}

Sample::~Sample( void ) {
	std::cout << "destroctor called" << std::endl;
	return;
}