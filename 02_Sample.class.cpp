/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_Sample.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:48:48 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/06 18:54:00 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "02_Sample.class.hpp"

Sample::Sample(void) {
	std::cout << "constractor called" << std::endl;
	return;
}

Sample::~Sample(void) {
	std::cout << "destroctor called" << std::endl;
	return;
}