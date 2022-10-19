#include "main.h"

/**
 * _islower -check main
 * @c: an input character
 * Decription: fn uses _putchar function
 * alphabet in lowrcase 10 times
 * Return: 1 if is lowrcase or 0 if its upprecase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}

	return (lower);
}
