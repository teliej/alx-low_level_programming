/**
 * leet - encodes a string into 1337
 * @s: string input
 *
 * Return: pointer @s
 */
char *leet(char *s)
{
	int i, j = 0;
	int k[] = {97, 101, 111, 116, 108};
	int l[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == k[i] || s[j] == l[i])
			{
				s[j] = n[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
