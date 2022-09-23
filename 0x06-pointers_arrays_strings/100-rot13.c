#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 46; j++)
			if (s[i] == alpha[j])
				s[i] = rot[j];

	return (s);
}
