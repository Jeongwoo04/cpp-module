/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:57 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:41 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <sstream>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    Zombie( std::string str );
    ~Zombie();

    void    announce( void );
    void    setName( std::string str );
};

Zombie* zombieHorde( int N, std::string str );

#endif
