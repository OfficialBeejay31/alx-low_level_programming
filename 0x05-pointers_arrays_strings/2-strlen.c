#include "main.h"

/**
 * _strlen - function that counts the length of a string
 *
 * @s: an input string
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
