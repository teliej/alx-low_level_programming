/**
 * _strpbrk - searches a string for any of a set of byte
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: returns the  pointer @s or NULL string byte if nothing is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
