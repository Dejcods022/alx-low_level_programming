#include "main.h"

/**
 *
 *void print_numbers(void) -> is function that prints numbers 0 to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + '0');
	_putchar('\n');
}
