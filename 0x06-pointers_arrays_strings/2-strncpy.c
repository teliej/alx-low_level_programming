/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @k: bytes of @src
 *
 * Return: pointer @dest
 */
char *_strncpy(char *dest, char *src, int k)
{
	int i;

	for (i = 0; i < k && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < k)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
