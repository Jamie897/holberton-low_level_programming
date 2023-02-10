#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: an array of integers
 * @n: the numbers of elements to swap
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	n = n - 1;
	while (i <= n)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n--] = temp;
	}
}
