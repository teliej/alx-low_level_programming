#include "main.h"

void print_triangle(int size)
{
	int i,k;
	int j = size;

	for (i = 0; i < size; i++){
		for (k = 0; k < size; k++){

			if (k >= j){
				_putchar('#');
			}
			else{
				_putchar(' ');
			}
		}
		j--;
		_putchar('\n');
	}
}
