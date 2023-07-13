#include <stdlib.h>

/**
 * _memset - fill memory with a constant byte
 *
 * @s: input pointer that represents memory block of space
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: returns pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: returns a pointer with new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = malloc(nmemb * size);
	if (j == NULL)
		return (NULL);

	_memset(j, 0, nmemb * size);

	return (j);
}
