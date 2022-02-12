#ifndef POINT_HPP
# define POINT_HPP

# include <cmath>
# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point( const Point& point );
    Point( float const f1, float const f2 );
	~Point();
    Point&	operator=( const Point& point );
    Fixed   getX( void ) const;
    Fixed   getY( void ) const;
};

std::ostream& operator<<( std::ostream& os, const Point& point );
bool bsp( Point const a, Point const b, Point const c, Point const point );

#endif
