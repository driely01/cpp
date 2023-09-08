/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_geter.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:00:46 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 16:14:02 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

	public:
		Sample( void );
		~Sample( void );
		int		getFoo( void ) const;
		void	setFoo( int v );
	
	private:
		int		_foo;
};

#endif