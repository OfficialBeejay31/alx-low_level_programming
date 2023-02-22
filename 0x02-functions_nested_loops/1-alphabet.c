#include "main.h"

/**
 * print_alphabet - this is the entry point of the program and the main function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
