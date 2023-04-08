#include <stdio.h>
#include "main.h"

/**
 * main - principle function
 * @argc: number
 * @argv: array
 *
 * Return: return 0 
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
