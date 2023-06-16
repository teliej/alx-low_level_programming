#include <stdio.h>
/**
* main - print numbers and charcters in lowercase
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	char alph_lower;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (alph_lower = 'a'; alph_lower <= 'f'; alph_lower++)
	{
	putchar(alph_lower);
	}
	putchar('\n');
	return (0);
}
