#include <stdio.h>
/**
* main - create the lowercase alphabet in reverse
* with a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alph_lower;

	for (alph_lower = 'z'; alph_lower >= 'a'; alph_lower--)
	{
		putchar(alph_lower);
	}
		putchar('\n');
	return (0);
}
