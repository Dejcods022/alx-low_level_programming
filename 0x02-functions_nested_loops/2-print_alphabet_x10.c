#include "main.h"

/**
*print_alpabet_x10 -> prints the alphabet ten times
*
*/
void print_alphabet_x10(void);
{
	int j;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
		_putchar(j);
		}
		_putchar('\n');
	}
}
