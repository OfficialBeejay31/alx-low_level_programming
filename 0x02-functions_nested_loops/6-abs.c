#include "main.h"
/**
 * _abs - the function to find the absolute value
 * @r: the input character
 * Description: this is a function to find
 * the absolute value of an integer
 * Return: abs value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}

