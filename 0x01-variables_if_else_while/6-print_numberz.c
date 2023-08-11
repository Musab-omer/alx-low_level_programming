#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program will prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 *
 * Return: Always 0 (success)
 *
 * Converter: - giet input as integer type and
 * convert it to the it's crosponding
 * ASCII which lead to char that can be
 * printed using putchar() function
 *
 * @digit: is number we need to convert
 */
char converter(int digit)
{
	return ('0' + digit);
}

int main(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		ch = converter(i);
		putchar(ch);
		i++;
	}
	printf("\n");
	return (0);
}
