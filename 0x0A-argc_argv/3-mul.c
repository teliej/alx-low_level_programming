#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments.
 * @argc: number of arguments.
 * @argv: list of the arguments.
 * Return: 0 means success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
