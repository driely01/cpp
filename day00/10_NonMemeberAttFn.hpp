/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_NonMemeberAttFn.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:31:14 by del-yaag          #+#    #+#             */
/*   Updated: 2023/09/11 14:44:28 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {
	
	public:
		Sample( void );
		~Sample( void );
		static int	getNbInst( void );
	
	private:
		static int	_nbInst;
};

#endif