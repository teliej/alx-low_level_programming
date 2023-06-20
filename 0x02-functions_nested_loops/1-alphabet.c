#include "main.h"
/**
* print_alphabet - print alphabet in lowercases with a new line
*
*/
void print_alphabet(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}	_putchar('\n');
}
