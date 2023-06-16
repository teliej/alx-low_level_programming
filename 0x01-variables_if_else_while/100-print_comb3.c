#include <stdio.h>
/**
* main - create the  possible combinations of two digits
*
* Return: ALways 0 (Success)
*/
int main(void)
{
	int n;
	int k;

	for (n = 48; n <= 56; n++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > n)
			{
				putchar(n);
				putchar(k);
				if (n != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
