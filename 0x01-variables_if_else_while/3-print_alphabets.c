#include <stdio.h>

/**
* main - create alphabets in lowercase and uppercase
* with a new line
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int alph_la;

	for (alph_la = 'a'; alph_la <= 'z'; alph_la++)
		putchar(alph_la);
	for (alph_la = 'A'; alph_la <= 'Z'; alph_la++)
		putchar(alph_la);
	putchar('\n');
	return (0);
}
