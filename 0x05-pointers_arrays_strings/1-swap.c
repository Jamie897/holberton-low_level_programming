#include "holberton.h"

/**
 * swap_int - swapping values.
 *
 * @a: arg a
 *
 * @b: arg b
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
