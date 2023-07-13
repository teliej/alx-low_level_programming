#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: returns a new string followed by the first @n bytes
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, l, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	k = l = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[l] != '\0')
		l++;
	if (n >= l)
		n = l;
	str = (char *) malloc((k + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
