#include "main.h"

/**
 * _pow_recursion -> function for power recursion
 *@x: x ^ Y
 *@y: the exponent
 *return: power result
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
