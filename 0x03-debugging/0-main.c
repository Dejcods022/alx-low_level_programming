#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main function - tests if an integer is positive or negative
 * Retun: Always 0 (success)
 */

void positive_or_negative(int i)
{
	int n;

	n == i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
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
