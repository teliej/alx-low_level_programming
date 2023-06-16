#include <stdio.h>
/**
* main - create the  possible combinations of two digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int k;

	for (n = 0; n < 100; n++)
	{
		for (k = 0; k < 100; k++)
		{
			if (n < k)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((k / 10) + 48);
				putchar((k % 10) + 48);
				if (n != 98 || k != 99)
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
