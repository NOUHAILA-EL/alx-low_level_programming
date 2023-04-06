#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}

	else
		_putchar('\n');
}
