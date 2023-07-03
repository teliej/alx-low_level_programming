/**
 * _memset - a function that fills memory with a constant byte
 *
 *  @s: input pointer to char type represents the pointer
 *
 *  @b: input variable of char type represents the character
 *
 *  @n: unsigned int variable the number of bytes
 *
 *  Return:  pointer @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
