/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:50:25 by jeson             #+#    #+#             */
/*   Updated: 2022/02/20 18:21:53 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cerrno>
# include <cmath>
# include <cstdlib>
# include <cctype>
# include <limits>
# include <exception>

class Convert
{
private:
	bool	_err;
	double	val;

public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& src);
	~Convert();
	Convert&	operator=(const Convert& src);

	void	printToInt( void ) const;
	void	printToChar( void ) const;
	void	printToDouble( void ) const;
	void	printToFloat( void ) const;

	void	printf( void ) const;

	class errnoErangeException : public std::exception
	{
	public:
		const char* what( void ) const throw();
	};

	class invalidInputException : public std::exception
	{
	public:
		const char* what ( void ) const throw();
	};

	class impossibleException : public std::exception
	{
	public:
		const char* what ( void ) const throw();
	};

	class nonDisplayableException : public std::exception
	{
	public:
		const char* what ( void ) const throw();
	};
};

#endif
