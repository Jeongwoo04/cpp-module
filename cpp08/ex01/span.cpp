/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:12:59 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 19:39:33 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(): _vector(0, 0)
{
}

Span::Span( unsigned int N ): _vector(0, 0)
{
	this->_vector.reserve( N );
}

Span::~Span()
{
}

Span::Span( const Span& src ): _vector(0, 0)
{
	this->_vector.reserve( src._vector.capacity() );
	std::copy( src._vector.begin(), src._vector.end(), std::back_inserter(this->_vector) );
}

Span&	Span::operator=( const Span& src )
{
	if (this == &src)
		return ( *this );
	if ( this->_vector.capacity() < src._vector.capacity() )
		throw ( NotEnoughSpaceException() );
	this->_vector.clear();
	std::copy( src._vector.begin(), src._vector.end(), std::back_inserter(this->_vector) );
	return ( *this );
}

const char* Span::NotEnoughSpaceException::what( void ) const throw()
{
	return ("Exception: Not enough space.");
}

const char* Span::NotEnoughSizeException::what( void ) const throw()
{
	return ("Exception: Cannot found span.");
}

void	Span::addNumber( unsigned int val )
{
	if ( this->_vector.size() == this->_vector.capacity() )
		throw ( NotEnoughSpaceException() );
	this->_vector.push_back( val );
}

unsigned int	Span::shortestSpan( void )
{
	if ( this->_vector.size() < 2 )
		throw ( NotEnoughSizeException() );
	std::vector<unsigned int>	tmp( this->_vector );

	std::sort( tmp.begin(), tmp.end() );
	unsigned int	distance;
	unsigned int	sh_span = UINT_MAX;

	for (unsigned int i = 1; i < this->_vector.size(); i++)
	{
		distance = tmp[i] > tmp[i - 1] ? tmp[i] - tmp[i - 1] : tmp[i - 1] - tmp[i];
		if (distance < sh_span)
			sh_span = distance;
	}
	return ( sh_span );
}

unsigned int	Span::longestSpan( void )
{
	if ( this->_vector.size() < 2 )
		throw ( NotEnoughSizeException() );
	unsigned int	M;
	unsigned int	m;
	M = *std::max_element( this->_vector.begin(), this->_vector.end() );
	m = *std::min_element( this->_vector.begin(), this->_vector.end() );
	return ( M - m );
}
