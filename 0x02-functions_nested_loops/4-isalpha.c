#include "main.h"

/**
 * _isalpha - checks if input is a letter
 * @c: input
 *
 * Return: 1 if input is a letter. 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
