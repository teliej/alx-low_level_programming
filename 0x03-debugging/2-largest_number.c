#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @i: first integer
 * @j: second integer
 * @k: third integer
 * Return: largest number
 */
int largest_number(int i, int j, int k)
{
	int large;

	if (i >= j && i >= k)
	{
		large = i;
	}
	else if (j >= i && j >= k)
	{
		large = j;
	}
	else
	{
		large = k;
	}
	return (large);
}
