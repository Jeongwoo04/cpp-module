/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:22:09 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:22:09 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    Zombie( std::string str ) ;
    ~Zombie();
    void    announce( void );
};

Zombie* newZombie( std::string str );
void randomChump( std::string str );

#endif