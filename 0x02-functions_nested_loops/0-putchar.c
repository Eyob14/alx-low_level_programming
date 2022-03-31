#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	char  elements[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		c = elements[i];
		_putchar(c);
	}
	return (0);
}
