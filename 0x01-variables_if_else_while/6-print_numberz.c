#include <stdio.h>
/**
* main - prints all single digit numbers from 0 with putchar
* and a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
		putchar('\n');
	return (0);
}
