#include <stdio.h>
/**
 * main-main block
 * Description printing alphabet in lower case
 * adds uppercase followed by a new line
 * Return 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;

	}

	puthcar('\n');
	return (0);

}