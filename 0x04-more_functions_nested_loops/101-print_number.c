#include "main.h"
/**
 * print_number - prints any number using _putchar
 * @n: input number
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n > 0)
	{
		int nDigit = 0;
		int tmp = n;

		while (tmp != 0)
		{
			tmp /= 10;
			nDigit++;
		}

		while (nDigit > 0)
		{
			_putchar((n / _pow(10, nDigit - 1)) + '0');
			n %= _pow(10, nDigit - 1);
			nDigit--;
		}
	}
}

/**
 * _pow - effin writing my own pow function
 * @b: base
 * @e: exponent
 *
 * Return: result
 */
int _pow(int b, int e)
{
	int pow = 1, i;

	for (i = 0; i < e; i++)
		pow *= b;

	return (pow);
}
