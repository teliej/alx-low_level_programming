#include <stdio.h>
/**
* main - create a list of alphabet in lowercase
* adding a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alph_lower;

	for (alph_lower = 'a'; alph_lower <= 'z'; alph_lower++)
		putchar(alph_lower);
	putchar('\n');
	return (0);
}
