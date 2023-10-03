#include <stdio.h>
#include "main.h"

/**
 * _strlen - calculate string lenght
 * @s: The string
 *
 * This program calculate the lenght of a string
 *
 * Return: The string lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
