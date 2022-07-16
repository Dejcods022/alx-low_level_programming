#include <stdio.h>

/**
 * fizzbuzz -> prints fizz or buzz or fizzbuzz
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("fizz\t");
		if (i % 5 == 0)
			printf("buzz\t");
		if (i % 15 == 0)
			printf("fizzbuzz\t");
		else
			printf("%d\t", i);
	}
}
