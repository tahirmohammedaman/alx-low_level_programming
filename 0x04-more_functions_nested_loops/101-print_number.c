#include "main.h"
/**
 * print_number - prints any number using _putchar
 * @n: input number
 */
void print_number(int n)
{
	unsigned int absn = n < 0 ? -((unsigned int)(n)) : +((unsigned int)(n));
	int nDigit, tmp;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
		_putchar('-');

	nDigit = 0;
	tmp = absn;

	while (tmp != 0)
	{
		tmp /= 10;
		nDigit++;
	}

	while (nDigit > 0)
	{
		_putchar((absn / _pow(10, nDigit - 1)) + '0');
		absn %= _pow(10, nDigit - 1);
		nDigit--;
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
