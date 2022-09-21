#include "main.h"

/**
 * _strcat - concatenates src string onto dest string
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a pointer to string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';

	return (dest);
}
