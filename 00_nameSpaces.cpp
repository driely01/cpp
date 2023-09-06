/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_nameSpaces.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:54:15 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/05 13:00:08 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	gl_var = 1;
int	f(void) { return 2; }

namespace	foo {
	
	int gl_var = 3;
	int	f(void) { return 4; }
}

namespace	bar {

	int gl_var = 5;
	int f(void) { return 6; }
}

namespace muf = bar;

int main(void) {

	printf("gl_var:		[%d]\n", gl_var);
	printf("f()		[%d]\n\n", f());

	printf("foo::gl_var:	[%d]\n", foo::gl_var);
	printf("foo::f():	[%d]\n\n", foo::f());

	printf("bar::gl_var:	[%d]\n", bar::gl_var);
	printf("bar::f():	[%d]\n\n", bar::f());
	
	printf("muf::gl_var:	[%d]\n", muf::gl_var);
	printf("muf::f():	[%d]\n\n", muf::f());

	printf("::gl_var:	[%d]\n", ::gl_var);
	printf("::f():		[%d]\n", ::f());
	
	return 0;
}