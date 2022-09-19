#include "main.h"

/**
 * rev_string - reverses input string
 * @s: input string to be reversed
 */
void rev_string(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;

	/* decrement length by one to get index of last char */
	len--;
	for (i = 0; i <= len / 2; i++)
	{
		/* swap s[i] and s[len - i] */
		char tmp;

		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
