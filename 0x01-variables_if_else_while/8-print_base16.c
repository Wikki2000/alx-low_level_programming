#include <stdio.h>
#include <string.h>

/**
 * main - Entry of the program
 *
 * This program print hexadecimal digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned int i = 0;
	char hex_digit[] = "0123456789abcdef";
	unsigned int str_lenght = strlen(hex_digit);

	while (i < str_lenght)
	{
		putchar(hex_digit[i]);
		i++;
	}

	putchar(10);
	return (0);
}
