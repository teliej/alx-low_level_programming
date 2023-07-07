/**
 * _strstr - finds a substring
 *
 * @haystack: input string
 * @needle: subtring
 *
 * Return: a pointer *i or NULL byte
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
	{
		i = haystack;
		j = needle;
		while (*j != '\0' && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);
		haystack++;
	}
	return ('\0');
}
