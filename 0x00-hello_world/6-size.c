#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of char: %d byte(s)", (int) sizeof(int));
	printf("Size of an int: %d byte(s)", (int) sizeof(int));
	printf("Size of a long int: %d byte(s)", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)", (int) sizeof(float));

	return (0);
}
