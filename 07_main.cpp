/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:50:08 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:59:35 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "07_visibility.class.hpp"

int main( void ) {

	Sample	instance;
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo" << instance._privateFoo << std::endl;
	instance.publicBar();
	// instance._privateBar();
	return 0;
}