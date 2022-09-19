#include <math.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: input string
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int num = 0, start = 0, length = 0;
	int sign = 1;

	int i = 0;

	while (s[i] < '0' || s[i] > '9')
	{
		if (s[i] == '\0')
			return (0);
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	start = i;
	while (s[i] >= '0' && s[i] <= '9')
		i++;
	length = i - start;


	for (i = 0; i < length; i++)
	{
		num += (s[start + i] - '0') * _pow(10, length - (i + 1));
	}

	num *= sign;

	return (num);
}

/**
 * _pow - effin writing my own pow function again
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
