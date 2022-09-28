#include "main.h"

/**
 * factorial - calculates and returns factorial of number recursively
 * @n: input number
 *
 * Return: factorial of input number.
 *	-1 if number is less than 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
