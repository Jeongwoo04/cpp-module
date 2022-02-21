/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:51:13 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 14:05:47 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _err(false), val(0.0)
{
}

Convert::Convert(std::string input): _err(false), val(0.0)
{
	if (input.length() == 1 && !std::isdigit(input[0]))
	{
		val = static_cast<double>(input[0]);
		return ;
	}
	errno = 0;
	char *eptr = NULL;
	val = std::strtod(input.c_str(), &eptr);

	try
	{
		if (errno == ERANGE)
			throw( errnoErangeException() );
		// ex) d1
		if (!std::isdigit(input[0]) && !(input[0] == '+' || input[0] == '-') && val == 0.0 )
			throw( invalidInputException() );
		// ex) 42.12ff
		if (!(*eptr == 0 || std::string(eptr) == "f"))
			throw( invalidInputException() );
	}
	catch(std::exception& e)
	{
		_err = true;
		std::cout << e.what() << std::endl;
		return ;
	}
	setInput(input);
}

Convert::Convert(const Convert& src)
{
	this->_err = src._err;
	this->val = src.val;
}

Convert::~Convert()
{
}

Convert&	Convert::operator=(const Convert& src)
{
	if (this == &src)
		return (*this);
	this->_err = src._err;
	this->val = src.val;
	return (*this);
}

const char*	Convert::errnoErangeException::what( void ) const throw()
{
	return ("Exception: ERANGE errno.");
}

const char* Convert::invalidInputException::what( void ) const throw()
{
	return ("Exception: invalid input.");
}

const char* Convert::impossibleException::what( void ) const throw()
{
	return ("impossible");
}

const char* Convert::nonDisplayableException::what( void ) const throw()
{
	return ("Non displayable");
}

void	Convert::printToChar( void ) const
{
	std::cout << "char: ";

	try
	{
		if (std::isnan(val) || std::isinf(val) || \
			val > std::numeric_limits<char>::max() || \
			val < std::numeric_limits<char>::min())
			throw ( impossibleException() );
		else
		{
			char c = static_cast<char>(val);
			if (std::isprint(c))
				std::cout << "'" << c << "'" << std::endl;
			else
				throw ( nonDisplayableException() );
		}
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

void	Convert::printToInt( void ) const
{
	std::cout << "int: ";

	try
	{
		if (std::isnan(val) || std::isinf(val) ||
			val > std::numeric_limits<int>::max() ||
			val < std::numeric_limits<int>::min())
			throw( impossibleException() );
		else
		{
			int i = static_cast<int>(val);
			std::cout << i << std::endl;
		}
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

void	Convert::printToFloat( void ) const
{
	std::cout << "float: ";

	try
	{
		if (!(std::isnan(val) || std::isinf(val)) &&
			(val > std::numeric_limits<float>::max() ||
			val < std::numeric_limits<float>::max() * -1))
			throw ( impossibleException() );
		if (std::isinf(val))
			std::cout << std::showpos;
		float f = static_cast<float>(val);
		int	i = static_cast<int>(val);
		if (i == f && (val >= INT32_MIN && val <= INT32_MAX))
		{
			if (this->len <= 6)
				std::cout << f << ".0f" << std::endl;
			else
				std::cout << f << "f" << std::endl;
		}
		else
		{
			std::cout << std::setprecision(7);
			std::cout << f << "f" << std::endl;
		}
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

void	Convert::printToDouble( void ) const
{
	std::cout << "double: ";

	int	i = static_cast<int>(val);
	if (i == val && (i >= INT32_MIN && i <= INT32_MAX))
	{
		if (this->len <= 6)
			std::cout << val << ".0" << std::endl;
		else
			std::cout << val << std::endl;
	}
	else
	{
		std::cout << std::setprecision(15);
		std::cout << val << std::endl;
	}
}

void	Convert::printf( void ) const
{
	if (this->_err)
		return ;
	printToChar();
	printToInt();
	printToFloat();
	printToDouble();
}

void	Convert::setInput( std::string str )
{
	int i = -1;
	std::string input;

	if (this->val == 0)
		return ;
	if (str.find_first_not_of('0') == str.find('.', 0))
		input = str.substr(str.find('.') - 1, -1);
	std::cout << input << std::endl;;
	if (input.find(".", 0) != std::string::npos)
	{
		while (static_cast<size_t>(i) < input.length() && input.at(++i))
		{
			if (input.at(i) == '0' || input.at(i) == '.')
				continue;
			else
				break;
		}
		if (input.find(".", 0) != std::string::npos)
		{
			if (input.at(0) == '0')
				this->len = input.find_last_not_of('0') - input.find_first_not_of('0', input.find('.') + 1) + 1;
			else
				this->len = input.find_last_not_of('0');
		}
		else
			this->len = input.find_last_not_of('0');
		this->type = 'd';
	}
	else
	{
		this->len = input.length();
		this->type = 'i';
	}
}
