#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: determine wheather a character is uppercase or not
 *@c: character to check
 *
 * Return: returns 1 if character is uppercase or 0 if not
 *
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
