#include "main.h"
/**
 *
 * more_numbers - prints 0 - 14 ten times and you
 * can only use _putchar three times
 *
 * Return : Always 0 ( Success )
*/
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar("%d", i);

		}
		_putchar("\n");
	}
	return (0);
}

