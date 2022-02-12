#include "Point.hpp"

Point::Point(): x(0), y(0)
{
}

Point::Point(float const f1, float const f2): x(f1), y(f2)
{
	std::cout << "Point : (x, y) = (" << this->getX() << ", " << this->getY() << ")" << std::endl;
}

Point::Point(const Point& point): x(point.x), y(point.y)
{
}

Point::~Point()
{
}

Point&	Point::operator=(const Point& point)
{
    (void)point;
    return (*this);
}

Fixed   Point::getX( void ) const
{
    return ( x.toFloat() );
}

Fixed   Point::getY( void ) const
{
    return ( y.toFloat() );
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << "Evaluating Point : " << "(x, y) = (" << point.getX() << ", "<< point.getY() << ")";
    return (os);
}

// Private members:
// ◦ A Fixed const x
// ◦ A Fixed const y
// ◦ Anything else you judge useful.
// • Public members:
// ◦ A default constructor that initializes x and y to 0.
// ◦ A destructor.
// ◦ A copy constructor.
// ◦ A constructor that takes two constant floating points as parameters and that
// initializes x and y with those values.
// ◦ An assignation operator overload.
// ◦ Anything else you judge useful.
