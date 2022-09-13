#include "main.h"

/**
 * times_table - prints 0x9 multiplication table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
			{
				if (j != 0)
					_putchar(' ');
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
}
