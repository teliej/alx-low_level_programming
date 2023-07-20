#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers then a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of the args or parameters
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list i;
	unsigned int index;

	va_start(i, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(i, int));
		if (separator && index != n - 1)
			printf("%s", separator);
	}
	va_end(i);
	printf("\n");
}
