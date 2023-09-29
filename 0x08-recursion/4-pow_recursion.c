#include "main.h"

/**
 * _pow_recursion - Find square of any given number
 * @x: The base number
 * @y: The power
 *
 * This function calculate sqaure of a number using recursion
 *
 * Return: The result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
