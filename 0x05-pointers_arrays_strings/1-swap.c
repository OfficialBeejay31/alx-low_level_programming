#include "main.h"

/**
 * swap_int - function that swaps the values
 * of two integers
 *
 * @a: the first input integer
 *
 * @b: the second input integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
