#include <iostream>

int	main( void )
{
	const int bits = 8;
	int val;
	int i;

	i = 10;
	val = (i << 2);
	std::cout << val << std::endl;
	val = (i >> bits);
	std::cout << val << std::endl;
	return ( 0 );
}

// 0000 1010 = 10
// 0001 0100 = 20
