/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:50:25 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 15:14:29 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>

class Convert
{
private:
	double	value;
	bool	err;

public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& src);
	~Convert();
	Convert&	operator=(const Convert& src);
};

#endif
