#include "main.h"

/**
 *print_daigonal -> draw diagonal line on a terminal
 *@size: integer param
 */
void print_diagonal(int n)
{

	char builder = '\';
	int size = n;

	for(int i = 0; i < size; i++)
	{
	for(int j = 0; j < size; j++)
		{
			if(j == i)
				_putchar("%c", builder);
			else
				_putchar(" ");
		}
	_putchar("\n");
	}
}
