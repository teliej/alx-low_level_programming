#include "main.h"

/**
 * is_prime - determine if input number is a prime number.
 * @n: input number.
 * @c: l
 * Return: 1 if n is a prime number and 0 otherwise.
 */

int prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, i + 1));
}

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
