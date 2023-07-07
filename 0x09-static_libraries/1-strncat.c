/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @k: bytes from @src
 * Return: pointer @dest
 */
char *_strncat(char *dest, char *src, int k)
{
	int i, j;

	i = 0;

	/*find size of dest array*/
	while (dest[i])
		i++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (j = 0; j < k && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	/*null terminate dest*/
	dest[i + j] = '\0';

	return (dest);
}
