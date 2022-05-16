#include "main.h"

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
	int length = 0;
	char c = s[0];

	while (c != '\0')
	{
		c = *(s + length);
		length++;
	}
	return (length - 1);

}
