#include "main.h"
/**
* print_sign - determine the sign of a number
* @x: the int to check
* Return: 1 and print '+' if x is greater than 0
*/
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	} else if (x == 0)
	{
		_putchar(48);
		return (1);
	} else if (x < 0)
	{
		_putchar('-');
	}
		return (-1);
}
