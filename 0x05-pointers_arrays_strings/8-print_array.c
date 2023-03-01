#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints n element of an array
 *
 * @a: an input array
 *
 * @n: an input integer
 *
 * Return:nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}

	_putchar('\n');
}
