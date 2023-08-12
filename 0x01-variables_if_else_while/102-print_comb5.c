#include <stdio.h>
/**
 * main - Entery point
 *
 * Description: program that prints all
 * possible different combinations of two two-digits numbers.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j <= 100; j++)
		{
			if (i < 10)
			{
				putchar('0');
				putchar(i + '0');
			}
			else
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
			}
			putchar(' ');
			if (j < 10)
			{
				putchar('0');
				putchar(j + '0');
			}
			else
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

