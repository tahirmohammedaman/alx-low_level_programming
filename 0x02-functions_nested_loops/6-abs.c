#include "main.h"

/**
 * _abs - returns the absolute value of integer input
 * @n: input
 *
 * Return: absolute value of input
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	if (n == 0)
		return (0);
	return (-n);
}
