#include"main.h"

/**
 * print_array - prints j elements of an array of integers.
 *
 * @j: elements parameter input
 * @k: string parameter input
 *
 * Return: Nothing
 */
void print_array(int *k, int j)
{
	int i;

	for (i = 0; i < j; ++i)
	{
		if (i != (j - 1))
			printf("%d, ", k[i]);
		else
			printf("%d", k[i]);
	}
	printf("\n");
}
