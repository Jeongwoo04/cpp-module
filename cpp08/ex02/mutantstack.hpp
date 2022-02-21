/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:35:00 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 19:40:07 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>
# include <deque>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	MutantStack() {};
	MutantStack(const MutantStack& src){ *this = src; };
	~MutantStack() {};

	MutantStack& operator=(const MutantStack& src)
	{
		if (this == &src)
			return (*this);
		std::stack<T>::operator=( src );
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator	iterator;
	typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator	reverse_iterator;

	iterator	begin( void ) {
		return (this->c.begin());
	};
	iterator	end( void ) {
		return (this->c.end());
	};

	const_iterator	cbegin( void ) const {
		return (this->c.cbegin());
	};
	const_iterator	cend( void ) const {
		return (this->c.cend());
	};

	reverse_iterator	rbegin( void ) {
		return (this->c.rbegin());
	};
	reverse_iterator	rend( void ) {
		return (this->c.rend());
	};
};

#endif
