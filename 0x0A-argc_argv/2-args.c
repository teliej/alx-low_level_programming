#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: number of arguments.
 * @argv: list of the arguments.
 * Return: 0 means success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
