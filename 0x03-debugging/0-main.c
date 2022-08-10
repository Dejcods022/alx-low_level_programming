#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - tests if an integer is positive or negative
 * @i: an integer parameter
 * @n: an integer parameter
 * Retun: Always 0 (success)
 */

void positive_or_negative(int i)
{
	int n;
	int i;

	srand(time(0));
	n = i;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}

int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
