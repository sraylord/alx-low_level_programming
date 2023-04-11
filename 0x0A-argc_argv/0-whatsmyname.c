#include <stdio.h>

/**
 *Description-prints program's name
 *main-prints program name, followed by a new line.
 *@argc:int.
 *@argv:list.
 *Return:0-success.
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
