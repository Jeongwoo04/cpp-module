/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:51:25 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 20:09:58 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3


class Karen{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	std::string str[4];
	void (Karen::*p[4])(void);

public:
	Karen();
	~Karen();
	void complain( std::string level );
};

#endif
