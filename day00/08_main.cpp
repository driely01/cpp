/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:25:22 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 16:48:38 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "08_geter.class.hpp"

int main( void ) {

	Sample	instance;
	instance.setFoo( 42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	instance.setFoo( -42 );
	std::cout << "instance.getFoo(): " << instance.getFoo() << std::endl;
	return 0;
}