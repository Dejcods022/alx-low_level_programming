#include "main.h"

/**
 *_strlen_recursion -> gets the length og a string
 *@s: string param
 *Return: length of string
 */
int _strle_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion);
}
