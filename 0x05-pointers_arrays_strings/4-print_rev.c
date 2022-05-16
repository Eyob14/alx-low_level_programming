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
	int i = 0;

	for (i = (_strlen(s) - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * _strlen - is a function that returns the length of a string
 *
 * @s: a string parameter
 *
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 1;
	char c = s[0];

	while (c != '\0')
	{
		c = *(s + length);
		++length;
	}
	return (length - 1);
}
