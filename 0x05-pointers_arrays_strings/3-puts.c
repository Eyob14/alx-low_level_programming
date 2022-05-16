#include "main.h"

/**
 * _puts - A function that print a string
 *
 * @str: a string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	char c = str[0];
	int length = 0;

	while (c != '\0')
	{
		_putchar(c);
		++length;
		c = *(str + length);
	}
	_putchar('\n');
}
