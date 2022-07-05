#include <main.h>
/**
 * main - main Entry
 * Description: Program that prints the alphabet in lower case
 * Return: Always 0 
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
}
