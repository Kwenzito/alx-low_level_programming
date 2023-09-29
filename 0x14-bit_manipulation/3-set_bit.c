#include "main.h"

/**
 * set_bit -The function  sets a bit at a given index to 1
 * @n: number to set bit in
 * @index: index of the bit ti be set
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long x = 1UL;

	if (index > 63)
		return (-1);

	*n = ((x << index) | *n);
	return (1);
}
