#include <stdio.h>
/*
 * function main - entry point
 * description - printing base 10 numbers
 * Return: 0
 */
int main(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
	putchar (i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
	putchar (y);
	}

	putchar ('\n');
	return (0);
}
