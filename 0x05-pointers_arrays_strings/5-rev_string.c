#include "main.h"

/**
 * rev_string - a function tah reverse strings
 *
 * @s: an input string
 *
 * Return: Nothing
 */
coid rev_string(char *s)
{
	int len = 0, i = 0;

	char aux;

	while (s[len] = !'\0')
	{
		len++;
	}

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}

