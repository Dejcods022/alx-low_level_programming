#include "main.h"

/**
 *print_line -> prints a line
 *@n:integer param
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
}
