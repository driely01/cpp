/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_visibility.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:19:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 14:36:20 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

	public:
		int		publicFoo;
		Sample( void );
		~Sample( void );
		void	publicBar( void ) const;
	
	private:
		int		_privateFoo;
		void	_privateBar( void ) const;
};

#endif