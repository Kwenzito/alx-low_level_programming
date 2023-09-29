#include "main.h"

/**
 * binary_to_uint - The function converts a binary number to unsigned int
 * @b: pointer to character array representation of the binary number
 * Return: unsigned integer decimal representaion
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	int u_int = 0;

	if (!b)
		return (0);

	for (; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		u_int = 2 * u_int + (b[index] - '0');
	}

	return (u_int);
}

