#include "main.h"

/**
 * print_diagonal - diagonal yimechegnal
 * @n: input
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n - 1; i++)
			_putchar('_');
		_putchar('\\');
	}
	_putchar('\n');
}
