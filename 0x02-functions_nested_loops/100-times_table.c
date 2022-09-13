#include "main.h"

/**
 * print_times_table - prints n x n multiplication table
 * @n: table limit
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
		for (j = 0; j <= n; j++)
		{
			if (i * j <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			else if (i * j <= 99)
			{
				_putchar(' ');
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
			else
			{
				_putchar(((i * j) / 100) + '0');
				_putchar((((i * j) % 100) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
}
