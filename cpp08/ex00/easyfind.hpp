/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:47:11 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 15:52:24 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

class CannotFoundException: public std::exception
{
	const char* what( void ) const throw()
	{
		return ( "Exception: Cannot found." );
	}
};

template <typename T>
typename T::iterator	easyfind( T& container, int val )
{
	typename T::iterator	find;

	find = std::find( container.begin(), container.end(), val );
	if ( find == container.end() )
		throw ( CannotFoundException() );
	return ( find );
}

#endif
