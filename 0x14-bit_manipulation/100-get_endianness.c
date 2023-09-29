#include "main.h"

/**
 * get_endianness - The function checks the endianness.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

