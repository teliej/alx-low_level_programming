#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given in the parameter
 * @str: string to duplicate
 *
 * Return: returns pointer j (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *j;
	unsigned int i, len;

	i = 0;
	len = 0;
	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	j = malloc(sizeof(char) * (len + 1));
	if (j == NULL)
		return (NULL);
	while ((j[i] = str[i]) != '\0')
		i++;
	return (j);
}
