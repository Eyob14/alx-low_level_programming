#include "main.h"

/**
 * _isdigit - main entry
 * @c: an integer to check
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
