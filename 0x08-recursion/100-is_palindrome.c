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

/**
* compare - compares the strings
* @s - string
* @i - small iteration.
* @j - large iteration.
* 
* Returns: 0 or 1 if true or not
*/

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

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: string.
 * Return: 1 if s is a palindrome.
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _len(s) - 1));
}
