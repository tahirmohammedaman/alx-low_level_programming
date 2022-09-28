#include "main.h"
/**
 * _strlen_recursion - calculates and returns length of string recursively
 * @s: input string
 *
 * Return: length of input string
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
