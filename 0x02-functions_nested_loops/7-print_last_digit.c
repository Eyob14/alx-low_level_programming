#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: a number to compute
 *
 * Description: prints the last digit of a number
 *
 * Return: n
 */

int print_last_digit(int n)
{
	int l, p;

	l = n % 10;
	if (l <  0)
		l = -l;
	p = '0' + l;
	_putchar(p);
	return (l);
}
