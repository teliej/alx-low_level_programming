#include "main.h"
#include <stdio.h>
/**
 *main - receives arguements for the terminal.
 *
 *@argc: - number of arguements received.
 *@argv: - list of the argument received.
 *Return: - 0 which indicate success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
