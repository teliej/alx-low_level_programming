#include <stdio.h>

/**
 * main - prints the number of arguments.
 * @argc: number of arguments.
 * @argv: list of all the arguments.
 * Return: 0 means  success.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
