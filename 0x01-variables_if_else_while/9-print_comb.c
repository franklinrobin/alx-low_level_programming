#include <stdio.h>
#include <stdio.h>
/**
 * main -main blcok
 *description prints all single digit numbers of base 10 starting from 0
 *followed by a new line.
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			puthcar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
