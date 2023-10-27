#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index in a decimal
 * @n: pointer to the number
 * @index: index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1); /* Error: Index is out of range*/

	bitmask = ~(1UL << index);
	*n &= bitmask;

	return (1);
}
