/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_Sample.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:59:43 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/07 18:04:31 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

	public:
		char	a1;
		int		a2;
		float	a3;
		Sample( char p1, int p2, float p3 );
		~Sample( void );
};

#endif