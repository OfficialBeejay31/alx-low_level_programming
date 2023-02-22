#include "main.h"
/**
 * _isalpha - to check if lowercase or uppercase and return a value
 * @c: an input character
 * Description: function returns 1 if its a letter,
 * lowercase or uppercase
 * Returns: 0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	char isletter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		for (lower = 'a'; lower <= 'z'; lower++)
		{
			if (c == lower || c == upper)
			{
				isletter = 1;
			}
		}
	}
	return (isletter);
}
