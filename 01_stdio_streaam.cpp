/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_stdio_streaam.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:11:31 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/06 18:23:39 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(void) {

	char	buff[512];

	std::cout << "hello world !" << std::endl;
	std::cout << "input a word: ";
	std::cin >> buff;
	std::cout << "you entred: [" << buff << "]" << std::endl;
	
	return 0;
}