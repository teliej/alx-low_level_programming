#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _len(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _len(s + 1));
}

int compare(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (0 + compare(s, i + 1, j - 1));
	}
	return (0);
}

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _len(s) - 1));
}
