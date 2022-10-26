#include "main.h"

/**
 * _strncat - a fn that concatentates 2 strings
 * @dest: a input string
 * @src: a input string
 * @n: an input integer
 * Return:A pointer the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int scrlen = 0;
	i = 0;
	char *temp = dest;
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}
	if (n > srclen)
	{
		n = srclen;
	}

	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp);
}
