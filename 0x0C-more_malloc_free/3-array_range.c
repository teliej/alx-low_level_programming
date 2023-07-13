#include <stdlib.h>

/**
 * array_range - makes an array of integers
 *
 * @min: min number of elements
 * @max: max number of elements
 *
 * Return: returns array pointer and null if it fails
 */

int *array_range(int min, int max)
{
	int i, *j;

	if (min > max)
		return (NULL);

	j = malloc((max - min + 1) * sizeof(int));
	if (j == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		j[i] = min;
		min++;
	}
	return (j);
}
