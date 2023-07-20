#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 *
 * @n: start of the arg parameters
 *
 * Return: returns the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	unsigned int param, sum = 0;

	va_start(i, n);
	for (param = 0; param < n; param++)
		sum += va_arg(i, int);
	va_end(i);
	return (sum);
}
