#include "main.h"
#include <unistd.h>
/**
 * _puts - a function that prints a string followed
 * by a new line
 *
 * @str: an input string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

