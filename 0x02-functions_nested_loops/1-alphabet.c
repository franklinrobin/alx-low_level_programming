#include <stdio.h>
/**
 * main - main Entry
 * Description: Program that prints the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		printf("%c ", c);
	return (0);
}
