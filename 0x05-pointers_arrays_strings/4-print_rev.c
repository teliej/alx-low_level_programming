#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; ++len)
	;
	for (--len; len >= 0; --len)
		_putchar(s[len]);
	_putchar('\n');
}
