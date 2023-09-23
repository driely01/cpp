/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_newAndDelete.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:42:12 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/23 12:11:37 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "00_newAndDelete.hpp"

Student::Student( std::string login ) : login(login) {

	std::cout << "Student " << this->login << " is born" << std::endl;
}

Student::~Student( void ) {
	
	std::cout << "Student " << this->login << " died" << std::endl;
}

Students::Students( void ) {
	
	std::cout << "Students is born" << std::endl;
}
Students::~Students( void ) {
	
	std::cout << "Students " << this->login << " died" << std::endl;
}

int main( void ) {

	Student bob = Student( "bob" );
	Student *jim = new Student( "jim" );
	Students *students = new Students[42];

	delete jim;
	delete[] students;
	return 0;
}