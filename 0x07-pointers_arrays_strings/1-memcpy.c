#include "main.h"

/**
 * _memcpy - a fn that copies memry area
 * @dest: memory area dest to copy
 * @src: memory area soucre to copy from
 * @n: number of bytes
 * Return: returns to copy location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
