#include "main.h"

/**
 * _strlen_recursion - a fn that returns the length of a string
 * @s: an input string to printing
 * Return: the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
