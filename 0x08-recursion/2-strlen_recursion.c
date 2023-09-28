#include "main.h"

/**
 * _strlen_recursion - Find lenght of a given string
 * @s: Pointer to the string whoose lenght is to be find
 *
 * This function find the lenght of a string
 *
 * Return: The lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
