/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:43:43 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 14:16:22 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
private:
	std::string ideas[100];
	int	size;

public:
	Brain();
	Brain(const Brain& src);
	virtual ~Brain();
	Brain& operator=(const Brain& src);

	int	getSize();
	void	setIdeas( std::string* ideas, int size );
	std::string*	getIdeas();
	void	clearBrain();
};

#endif
