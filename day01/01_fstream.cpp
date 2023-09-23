/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_fstream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:13:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/23 15:26:40 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main( void ) {

	std::ifstream ifs( "numbers" );
	unsigned int dst;
	unsigned int dst2;
	
	ifs >> dst >> dst2;
	
	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();

	std::ofstream ofs( "test.out" );
	ofs << "i like ponies a whole damn lot" << std::endl;
	ofs.close();
	return 0;
}