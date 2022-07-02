#include <stdio.h>
#include <stdio.h>
/**
 * main -main block 
 * Description: Program printing all possible different combiations of two *digits and numbers must be separated by ,, followed by a space
 * The two digits should be different
 * 01 and 10 are like 0 and 1
 * prints only smallest combination
 * numbers printed in ascending oreder
 * you can only use the putchar function
 * putchar maximum five times 
 * no variables of type char 
 * all your code in the main function
 * Return: 0
*/
int main(void)
{
	int c;
	int d;
	int e = 0;

	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
		        {
				if (c != d && d != e && e < d && d < c)
				{
					putchar('0' + e);
					putchar('0' + d);
					putchar('0' + c);

					if (c + d + e != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}

		                }
	              
		                c++;

			}	
                        d++;
		}
	        e++;
	}	  
        putchar('\n')
	return (0);
	
}_

