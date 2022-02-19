/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:12:27 by jeson             #+#    #+#             */
/*   Updated: 2022/02/19 22:54:07 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
private:
	unsigned int n;
	T	*arr;
public:
	Array();
	Array( unsigned int n );
	Array( const Array& src );
	~Array();

	Array& operator=( const Array& src );
	T& operator[]( unsigned int n ) const ;

	unsigned int	getN( void ) const;

	class OutOfRangeException: public std::exception
	{
	public:
		const char *what( void ) const throw();
	};
};

template <typename T>
Array<T>::Array(): n(0), arr(NULL)
{
}

template <typename T>
Array<T>::Array( unsigned int n ): n(0), arr(NULL)
{
	this->n = n;
	if (n)
		arr = new T[n];
}

template <typename T>
Array<T>::Array( const Array& src ): n(0), arr(NULL)
{
	this->n = src.getN();
	if (n)
		arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		arr[i] = src.arr[i];
}

template <typename T>
Array<T>::~Array()
{
	if (arr)
	{
		delete [] arr;
		arr = NULL;
	}
}

template <typename T>
Array<T>&	Array<T>::operator=( const Array& src )
{
	if ( this == &src )
		return ( *this );
	if ( arr )
	{
		delete [] arr;
		arr = NULL;
	}
	this->n = src.getN();
	if (n)
		arr = new T[n];
	for (unsigned int i = 0; i < n; i++)
		this->arr[i] = src.arr[i];
	return ( *this );
}

template <typename T>
T&	Array<T>::operator[]( unsigned int n ) const
{
	if ( n >= this->n )
		throw ( OutOfRangeException() );
	return ( arr[n] );
}

template <typename T>
unsigned int	Array<T>::getN( void ) const
{
	return ( this->n );
}

template <typename T>
const char*	Array<T>::OutOfRangeException::what( void ) const throw()
{
	return ("Out of range Exception.");
}

// Construction with no parameter: creates an empty array.
// • Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then
// display *a.)
// • Construction by copy and assignment operator. In both cases, modifying one of
// the two arrays after copy/assignment won’t affect anything in the other array.
// • You MUST use the operator new[] for your allocation. You must not do preventive
// allocation. Your code must never access non allocated memory.
// • Elements are accessible through the operator[].
// • When accessing an element with the operator[], if this element is out of the limits,
// a std::exception is thrown.
// • A member function size that returns the number of elements in the array. This
// member function takes no parameter and does not modify the current instance in
// any way.

#endif
