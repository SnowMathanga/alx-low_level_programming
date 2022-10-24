#include "main.h"
#include <stdio.h>

/**
 * swap int - a fn that swaps the vl of 2 numbrs
 * @a: an input int
 * @b: an input int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
