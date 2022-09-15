#include "main.h"

/**
 * print_diagonal - **** diagonals
 * @n: input
 */
void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
		_putchar('\n');

	for (i = 0; i <= n; i++)
		for (j = 0; j < i; j++)
		{
			if (j == i - 1)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
}
