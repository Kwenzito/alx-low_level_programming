#include "main.h"

/**
 * flip_bits - The function returns the number of bits...
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = 63, bit_counter = 0;
	unsigned long int bit, xor_n_m = n ^ m;

	for (; index >= 0; index--)
	{
		bit = xor_n_m >> index;
		if (bit & 1)
			bit_counter++;
	}

	return (bit_counter);
}
