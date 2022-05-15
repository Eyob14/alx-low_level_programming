#include "main.h"

/**
 * swap_int - is a function which swaps the two provided parameters
 *
 *
 * @a: the first parameter
 * @b: the second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

}
