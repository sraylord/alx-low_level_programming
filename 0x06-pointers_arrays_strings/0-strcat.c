#include "main.h"
/**
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of test array*/
	while (dest[c])
		c++;

	/* iterate through each str array value without the null buyte */
	for (c2 = 0; src[c2] ; c2++)
	{
		/* append src[c2] to dest[c] while overwriting the null byte in dest */
		dest[c++] = src[c2];
	}
	return (dest);
}
