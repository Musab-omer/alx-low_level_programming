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
	char lowerCh = 97;
	char upperCh = 65;

	while (lowerCh <= 122)
	{
		putchar(lowerCh);
		lowerCh++;
	}
	while (upperCh <= 90)
	{
		putchar(upperCh);
		upperCh++;
	}
	putchar('\n');
	return (0);
}
