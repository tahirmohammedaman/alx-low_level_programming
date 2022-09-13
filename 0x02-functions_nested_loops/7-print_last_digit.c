#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input
 *
 * Return: last digit of input
 */
int print_last_digit(int n)
{
	_putchar((n % 10) + '0');
	return (n % 10);
}
