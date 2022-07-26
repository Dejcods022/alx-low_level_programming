#include <stdio.h>

/**
 *main -> a function printing a number
 *@argc: argc parameter
 *@argv: anarray of command list
 *Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
