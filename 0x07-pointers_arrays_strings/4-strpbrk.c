#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a fn that searches a string for any of set of bytes
 * @s: an inpit string
 * @accept: an input char with to locate into a string s
 * Return: a pointer to the byte in s that matches one of trhe bytes in accept
 * or NUll if no such byte is found
 */

char *strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
