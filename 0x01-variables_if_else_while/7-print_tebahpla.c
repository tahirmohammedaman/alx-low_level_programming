#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
		putchar(ch--);
	putchar('\n');

	return (0);
}
