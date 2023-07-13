#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer which represents empty memory block
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: returns pointer to the filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array with memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: returns pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

/**
 * check_number - checks if a string has only numbers
 *
 * @str: string to check
 *
 * Return: returns 0 is true 1 if false
 */

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}


/**
 * _length - length of strings
 *
 * @str: string to get length from
 *
 * Return: length of string
 */

int _length(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
 */

void multiply(char *s1, char *s2)
{
	int i, j, k, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	j = _length(s1);
	k = _length(s2);
	tmp = k;
	total_l = j + k;
	ptr = _calloc(sizeof(int), total_l);
	temp = ptr;

	for (j--; j >= 0; j--)
	{
		f_digit = s1[j] - '0';
		res = 0;
		k = tmp;
		for (k--; k >= 0; k--)
		{
			s_digit = s2[k] - '0';
			res += ptr[k + j + 1] + (f_digit * s_digit);
			ptr[j + k + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[j + k + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * error_exit - prints error with _putchar and exits with 98
 *
 * Return: Error 98 and exit(98)
 */

int error_exit(void)
{
	char *err;
	int i;

	err = "Error";
	for (i = 0; err[i] != '\0'; i++)
		_putchar(err[i]);
	_putchar('\n');
	exit(98);
}

/**
 * main - Entry point
 *
 * Description: a program that finds the product two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success and 98 if else
 */

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
