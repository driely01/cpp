/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 14:31:35 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/09 15:29:58 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "09_Comparision.class.hpp"

int main( void ) {

	Sample	instance1( 42 );
	Sample	instance2( 42 );
	if ( &instance1 == &instance1 )
		std::cout << "instance1 and instance1 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance1 are not physically equal" << std::endl;
	
	if ( &instance1 == &instance2 )
		std::cout << "instance1 and instance2 are physically equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not physically equal" << std::endl;
	
	if ( instance1.compare( &instance1 ) == 0 )
		std::cout << "instance1 and instance1 are structurally equal" << std::endl;
	else
		std::cout << "istance1 and instance1 are not structurally equal" << std::endl;
	
	if ( instance1.compare( &instance2 ) == 0 )
		std::cout << "instance1 and instance2 are structurally equal" << std::endl;
	else
		std::cout << "instance1 and instance2 are not structuarlly equal" << std::endl;
	return 0;
}