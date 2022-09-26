#include "main.h"

/**
 * _memset - fills first n bytes of memory with constant byte
 * @s: memory area
 * @b: constant byte used to fill
 * @n: number of bytes to fill
 *
 * Return: number of bytes to fill
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
