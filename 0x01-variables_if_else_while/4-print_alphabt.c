#include <stdio.h>
/**
 *main -main block
 *Description getting a random number and checking its last digit
 *Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
