#include <stdio.h>

/**
 * main - Enter Point
 *
 * Description: this program prints the
 * alphabet in lowercase, followed by a new line using putchar
 * print all letter except q and e
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 97;

	while (ch <= 122)
	{
		if (ch != 101 && ch != 113)
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
