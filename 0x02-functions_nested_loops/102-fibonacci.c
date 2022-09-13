#include <stdio.h>

/**
 * main - First 50 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	long x = 1, y = 2, tmp;
	int i;

	printf("1, 2");
	for (i = 0; i < 48; i++)
	{
		printf(", %ld", (x + y));

		tmp = y;
		y = (x + y);
		x = tmp;
	}
	printf("\n");

	return (0);
}
