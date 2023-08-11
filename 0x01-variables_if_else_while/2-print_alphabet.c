#include <stdio.h>

/**
 * main - Enter Point
 *
 * Description: this program prints the
 * alphabet in lowercase, followed by a new line using putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	return (0);
}
