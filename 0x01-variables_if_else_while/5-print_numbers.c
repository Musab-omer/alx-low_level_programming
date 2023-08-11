#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
