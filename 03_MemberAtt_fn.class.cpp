/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_MemberAtt_fn.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:40:03 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:07:56 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "03_MemberAtt_fn.class.hpp"

Sample::Sample( void ) {
	
	std::cout << "constructor called" << std::endl;
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