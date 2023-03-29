#include "main.h"

/**
 * rev_string - reverses a string
 * @s: array
 * @i: length of the string
 * Return: Always return 0
*/

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		/* do nothing, just iterate over the string */
	}

	for (i = i - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
