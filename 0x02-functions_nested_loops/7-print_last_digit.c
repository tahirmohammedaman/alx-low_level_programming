#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input
 *
 * Return: last digit of input
 */
int print_last_digit(int n)
{
	int digit = (n >= 0) ? (n % 10) : -(n % 10);

	_putchar(digit + '0');
	return (digit);
}
