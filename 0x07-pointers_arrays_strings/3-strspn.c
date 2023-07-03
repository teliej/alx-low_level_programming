/**
 * _strspn - gets the length of a prexif in a string
 *
 * @s: pointer to string input
 * @accept: prefix
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0; /*success*/
				break;
			}
			j++;
		}
		if (k == 1)
			break;
		i++;
	}

	return (i);
}
