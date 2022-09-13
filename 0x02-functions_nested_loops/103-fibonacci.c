#include <stdio.h>

/**
 * main - sum of even Fibonacci numbers under 4,000,000
 *
 * Return: 0 on success
 */
int main(void)
{
	long x = 1, y = 2, tmp, sum = 0;

	while (y < 4000000)
	{
		if (y % 2 == 0)
			sum += y;

		tmp = y;
		y = x + y;
		x = tmp;
	}
	printf("%ld\n", sum);

	return (0);
}
