#include"main.h"
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 * @print_alphabet: describe the parameter
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}

