#include "main.h"

/**
 * _abs - Entry point of the function
 * @n: a number to coompute
 *
 * Description: computes the absolute value of an integer
 *
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-1 * n);
}
