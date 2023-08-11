#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 *
 * Return: Always 0 (success)
 *
 * printDigits: - Convert int digits to  crosponding
 * ASCII which lead to char that can be
 * printed using putchar() function
 *
 * @i: input param
 */
void printDigits(int i)
{
	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
}

int main(void)
{
	int i = 0;

	printDigits(i);
	printf("\n");
	return (0);
}
