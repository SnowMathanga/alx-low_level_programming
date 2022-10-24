#include "main.h"

/**
 * _strlen - a fn that returns the length of a string
 * @s: in input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
