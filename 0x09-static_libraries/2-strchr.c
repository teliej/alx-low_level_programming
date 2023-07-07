/**
 * _strchr - finds  a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: returns *s or '\0'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');

}
