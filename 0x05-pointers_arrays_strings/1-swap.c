#include "main.h"

/**
 *swap_int -> a functions to swap integer
 *@a: an integer
 *@b: an integer
 *Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
