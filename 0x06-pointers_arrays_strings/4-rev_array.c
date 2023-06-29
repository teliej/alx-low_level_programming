/**
 * reverse_array - reverses array of an integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int k, i, j;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
