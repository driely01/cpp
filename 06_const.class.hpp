/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_const.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:36:16 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/08 13:54:59 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

	public:
		float const	pi;
		int			qd;
		Sample( float const f );
		~Sample( void );
		void	bar( void ) const;
	
};

#endif