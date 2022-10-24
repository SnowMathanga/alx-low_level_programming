#include "main.h"

/**
 * puts2 - a function that prints every other chr of a string
 * starting with the 1st char ,followed by a new line
 * @str: An input string
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;

	for (; i <= len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
