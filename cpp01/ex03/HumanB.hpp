/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:22 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:48 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class   HumanB{
private:
    std::string name;
    Weapon  *weapon;

public:
    HumanB( std::string str );
    void    setWeapon( Weapon &weapon );
    void    attack( void );
};

#endif
