#include "main.h"

/**
 * print_triangle - prints a square
 * @size: output size
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size < 1)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
			_putchar(' ');
		for (k = 0; k < i + 1; k++)
			_putchar('#');
	_putchar('\n');
	}
}
