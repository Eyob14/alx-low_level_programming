#include "main.h"

/**
 * print_numbers - Entry point of the function
 *
 * Description: prints a character to the console
 *
 * Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
