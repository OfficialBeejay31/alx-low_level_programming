#include "main.h"

/**
 * _isdigit - a function that checks for uppercase character
 *
 * @c: an input character
 *
 * Return: 1 if c is uppercase and 0 if otherwise
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (c == i)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}


