#include <stdio.h>
/**
* main - prints the alphabets without q and e
*with new line
* Return: Aways 0 (Sucess)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
