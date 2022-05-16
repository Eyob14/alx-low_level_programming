#include "main.h"

/**
 * print_rev - prints a string in reverse order
 *
 * @s: a string to be printed in reversed order
 *
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	char c = *(s + length);

	while (c != '\0')
	{
		length++;
		c = *(s + length);
	}

	while (length >= 0)
	{
		_putchar(c);
		--length;
		c = *(s + length);
	}
	_putchar('\n');
}
