#include <stdio.h>
/**
 *main - Entry Point
 *Description: 'prints number of base 10'
 *Return: Always 10
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
