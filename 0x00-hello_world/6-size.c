#include <stdio.h>

/**
 * main function  prints the size of various types on the computer
 */
int main(void)
{
	printf("Size of a char: %Zu byte(s)\n", sizeof(char));
	printf("Size of an int: %Zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %Zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %Zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %Zu byte(s)\n", sizeof(float));
	/**
	 * Return alwayes success  (0)
	 */
	return (0);
}
