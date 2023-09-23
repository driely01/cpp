/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_newAndDelete.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:46:26 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/23 12:11:07 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWANDDELETE_H
#define NEWANDDELETE_H

#include <iostream>

class Student {
	
	private:
		std::string login;
	
	public:
		Student( std::string login );
		~Student( void );
};

class Students {
	
	private:
		std::string login;
	
	public:
		Students( void );
		~Students( void );
};

#endif