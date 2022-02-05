/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:17 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:15 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"
//HumanA bob("Bob", club);

class   HumanA{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string str, Weapon &weapon);
    void    attack( void );
};


#endif
