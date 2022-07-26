#include <stdio.h>

/**
 *main -> a function to ptint its name
 *@argv: an array of command list
 *@argc: is an argc parameter
 *Return: 0 for success
 */
int main(int argc __attribute__((unused)), *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
