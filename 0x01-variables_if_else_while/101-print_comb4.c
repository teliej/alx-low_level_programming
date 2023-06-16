#include <stdio.h>
/**
* main - creates the possible combinations of three digits
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, k, p;

	for (n = 48; n < 58; n++)
	{
		for (k = 49; k < 58; k++)
		{
			for (p = 50; p < 58; p++)
			{
				if (p > k && k > n)
				{
					putchar(n);
					putchar(k);
					putchar(p);
					if (n != 55 || k != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
