#include <stdio.h>

/**
 * main - Enter Point
 *
 * Description: this program prints the
 * alphabet in lowercase in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
