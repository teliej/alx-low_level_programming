#include <stdlib.h>

/**
 * malloc_checked - allocates memory with malloc
 *
 * @b: amount of bytes
 *
 * Return: returns the pointer to our new allocated memory exit with 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *k;

	k = malloc(b);
	if (k == NULL)
		exit(98);
	return (k);
}
