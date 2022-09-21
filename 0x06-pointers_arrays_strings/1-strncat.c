#include "main.h"

/**
 * _strncat - concatenates source string onto destination string
 *			at most n characters
 * @dest: destination string
 * @src: source string
 * @n: limits how many characters are concatnated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, count = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && count < n)
	{
		dest[i++] = src[j++];
		count++;
	}
	dest[i] = '\0';

	return (dest);
}
