#include <unistd.h>

/**
 * _putchar - writes the character to std out
 * @c: input character
 *
 * Return: pn success 11
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
