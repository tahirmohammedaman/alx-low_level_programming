#include "main.h"

/**
 * jack_bauer - prints every minute of day Jack Bauer
 */
void jack_bauer(void)
{
	int j, a, c, k;

	for (j = 0; j <= 2; j++)
		for (a = 0; a <= 9; a++)
			for (c = 0; c <= 5; c++)
				for (k = 0; k <= 9; k++)
				{
					_putchar(j + '0');
					_putchar(a + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(k + '0');
					_putchar('\n');

					if (j == 2 && a == 3 && c == 5 && k == 9)
						return;
				}
}
