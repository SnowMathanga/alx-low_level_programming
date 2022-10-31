#include "main.h"

/**
 * _memset - a fn that fills memory with constant bytes
 * @s: location to fll
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: returns pointers to location filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
