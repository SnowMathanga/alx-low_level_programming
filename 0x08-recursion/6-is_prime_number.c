#include "main.h"
int is_divisible(int num, int div);

/**
 * is_prime_number - a function that checks if a number is prime
 * @n: an input intger
 * Return: 1 if n is a prime number
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}

/**
 * is_divisible - check if num is divisible
 * @num: the number to be checked
 * @div: the result of division
 * Return: 1 if nu,ber is divisible or ) if num is not divisible
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}
	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}
