#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *leet(char *s)
{
	int i, j;

	char a[] = "aeotl";
	char b[] = "AEOTL";

	char leet[] = "43071";

	for (i = 0; i < 5; i++)
		for (j = 0; s[j] != '\0'; j++)
			if (s[j] == a[i] || s[j] == b[i])
				s[j] = leet[i];

	return (s);
}
