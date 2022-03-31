#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 *
 * Description: prints the alphabet, in lowercase followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;
	char c;

	for (i = 97; i <= 122; i++)
	{
		c = putchar(i);
		_putchar(c);
	}
	_putchar('\n');
}
