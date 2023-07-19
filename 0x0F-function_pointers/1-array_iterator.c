#include <stddef.h>

/**
 * array_iterator - executes a given function as a parameter on each element an array.
 *
 * @array: array (iterateable)
 * @size: size of array
 * @action: pointer function
 *
 * Return: returns nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
