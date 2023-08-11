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

	for (i = 0; i < 16; i++)
	{
		int remander = i % 16;

		if (remander < 10)
		{
			putchar(remander + '0');
		}
		else
		{
			putchar(remander - 10 + 'a');
		}
	}

	putchar('\n');
	return (0);
}
