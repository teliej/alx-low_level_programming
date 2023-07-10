#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int i, j, k;

	k = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			k = 0;
		else if (k == 0)
		{
			k = 1;
			j++;
		}
	}

	return (j);
}
/**
 * strtow - splits a string.
 * @str: string to split
 *
 * Return: returns pointer of array of strings (Success)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, letters, j = 0, start, end;

	while (*(str + len))
		len++;
	letters = count_word(str);
	if (letters == 0)
		return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (letters + 1));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
