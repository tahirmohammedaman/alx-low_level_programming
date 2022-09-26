#include "main.h"

/**
 * _strchr - locates first occurrence of a character in a string
 * @s: input string
 * @c: input character to be searched for
 *
 * Return: pointer to first occurrence of character.
 *	NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return (0);
}
