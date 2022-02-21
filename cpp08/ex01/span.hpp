/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:12:20 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 19:39:38 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <climits>
# include <cstdlib>

class Span
{
private:
	std::vector<unsigned int> _vector;
public:
	Span();
	Span( unsigned int N );
	~Span();
	Span( const Span& src );

	Span&	operator=( const Span& src );

	void	addNumber( unsigned int val );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

	class	NotEnoughSpaceException: public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	class	NotEnoughSizeException: public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	template <typename T>
	void	addRange( T begin, T end )
	{
		if ((this->_vector.capacity() - this->_vector.size()) <
			static_cast<size_t>(std::distance(begin, end)))
			throw ( NotEnoughSpaceException() );
		for (T iter = begin; iter != end; iter++)
			this->_vector.push_back(*iter);
	}
};

#endif
