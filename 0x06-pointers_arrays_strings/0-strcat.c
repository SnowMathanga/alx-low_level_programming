#include "main.h"

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: an input int
 * @src: an input int
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
