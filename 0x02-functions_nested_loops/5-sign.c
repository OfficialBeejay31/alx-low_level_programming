#include "main.h"
/**
 * print_sign - the function to beused to print the sign
 * @n: the input character
 * Description: this function prints the sign of the int
 * Return: it returns + if > 0,
 * 0 if ==0 and - if < 0
 */
int print_sign(int n)
{
	int value = 0;
		if (n > 0)
		{
			value = 1;
			_putchar('+');
		}
		else if (n == 0)
		{
			value = 0;
			_putchar('0');
		}
		else 
		{
			value = -1;
			_putchar('-');
		}
		return (value);
}

