/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:47:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:11:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "03_MemberAtt_fn.class.hpp"

int main( void ) {

	Sample	instance;

	instance.foo = 42;
	std::cout << "instance.foo: " << instance.foo << std::endl;
	instance.bar();
	return 0;
}