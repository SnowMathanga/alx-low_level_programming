#include "main.h"
int _sqrt(int prev, int root);

/**
 * _sqrt_recursion - it returns the value of sqaure root of n
 * @n: an input intger
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}

/**
 * _sqrt - find the square
 * @prev: previous value
 * @root: sqaure root value
 * Return: the sqaure root
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}

	return (_sqrt(prev + 1, root));
}
