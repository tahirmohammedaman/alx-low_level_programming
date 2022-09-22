#include "main.h"

/**
 * _strncpy - copies one string onto another
 * @dest: destination string
 * @src: source string
 * @n: how many characters are copied at most
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
