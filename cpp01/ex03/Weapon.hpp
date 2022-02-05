/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:30 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:55 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
//Weapon 클래스를 만드세요. 해당 클래스는 문자열 자료형과, 해당 문자열의 상수 참조를 반환하는 getType메소드를 포함해야 합니다. 아, 당연히 setType도 있어야 해요!

# include <string>
# include <iostream>

class   Weapon{
private:
    std::string name;

public:
    Weapon( std::string str );
    void    setType( std::string str );
    const std::string&    getType( void );
};

#endif
