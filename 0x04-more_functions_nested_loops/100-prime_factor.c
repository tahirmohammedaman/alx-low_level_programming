#include <stdio.h>

/**
 * main - Program that finds and prints
 *	the largest prime factor of 612852475143
 *
 * Return: 0 on success
 */
int main(void)
{
	long n = 612852475143, i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i = 1;
		}
	}

	printf("%ld\n", n);

	return (0);
}
