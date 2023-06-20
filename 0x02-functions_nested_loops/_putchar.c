#include <unistd.h>

/**
 * _putchar - puts the character c to stdout
 * @c: characters to display out
 *
 * Return: 1 good -1 not good.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
