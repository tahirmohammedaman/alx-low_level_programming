#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		int j;

		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}

		}
	}


	return (0);
}
