#include "main.h"

/**
 * print_rev - a fn that prints a string in reverse
 * followed by a new line
 * @s: an input string
 * Return: nothing
 */

void print_rev(char *s)
{
	char *len = s;

	while (*len)
	{
		len++;
	}

	len -= 1;

	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
