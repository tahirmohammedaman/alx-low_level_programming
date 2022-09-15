#include <stdio.h>

/**
 * main - Program that finds and prints
 *	the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
	long n = 612852475143;
	long i, max = 1;

	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0 && i > max)
		{
			long j;

			for (j = 2; j < i; j++)
				if (i % j == 0)
					break;

			if (j == i)
				max = i;
		}
	}
	printf("%ld\n", max);

	return (0);
}
