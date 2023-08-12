#include <stdio.h>

/**
 * main - Entery point
 *
 * Description: This program print all possible
 * diffrent combinations of two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

