#include "main.h"
#include <stdio.h>

int _strlen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - a dunction to obtain the lenght of the sstring s
 * @s: a string to calculate length
 * Retrun: the lenghth of the string s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * @s: an input string
 * Return: 1 if string is a palindrome or 0 when its not a palindrome
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}

	return (helper_palindrome(s, len));
}

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	else if (*s == *(s + len - 1))
	{
		return (helper_palindromes(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}
