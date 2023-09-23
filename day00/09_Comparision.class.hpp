/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_Comparision.class.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:12:16 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/09 14:27:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {
	
	public:
		Sample( int v );
		~Sample( void );
		int	getFoo( void ) const;
		int	compare( Sample *other ) const;
	
	private:
		int	_foo;
};

#endif