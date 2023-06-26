/**
 * _strcpy - copies a string from one pointer to another
 *
 * @src: source of string parameter input
 * @dest: destination of string
 * Return: pointer to dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[j] = src[i];
		++j;
	}
	dest[j] = '\0';

	return (dest);
}
