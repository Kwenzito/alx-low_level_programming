#include "main.h"

/**
 * clear_bit - The function sets the value bit to 0...
 * at a given index
 * @n: pointer to number
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long x = 1UL;

	if (index > 63)
		return (-1);

	*n = (~(x << index) & *n);
	return (1);
}

